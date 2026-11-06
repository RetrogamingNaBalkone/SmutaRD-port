// Structural comparison of existing Ghidra exports, not a semantic equivalence test.
// Run from repository root: node tools/research/compare-decompilations.cjs
const fs = require('node:fs');
const crypto = require('node:crypto');
const path = require('node:path');
const digest = file => crypto.createHash('sha256').update(fs.readFileSync(file)).digest('hex');
const manifest = JSON.parse(fs.readFileSync('analysis/originals-manifest.json', 'utf8').replace(/^\uFEFF/, ''));
const definitions = [
  ['smuta', 'SMUTA.EXE'], ['raising-dead', 'Rd.EXE'],
];
const samples = definitions.map(([game, name]) => {
  const sample = manifest.samples.find(s => s.path.endsWith('/' + name));
  if (!sample || digest(sample.path) !== sample.sha256 || fs.statSync(sample.path).size !== sample.size)
    throw new Error('Sample does not match manifest: ' + name);
  return { game, ...sample };
});
function tsv(file) {
  return fs.readFileSync(file, 'utf8').trimEnd().split(/\r?\n/).slice(1).map(s => s.split('\t'));
}
function load(game) {
  const dir = path.join('decompiled/s01-initial', game);
  const binary = fs.readFileSync(samples.find(s => s.game === game).path);
  const pe = binary.readUInt32LE(0x3c);
  const imageBase = binary.readUInt32LE(pe + 52);
  const sectionTable = pe + 24 + binary.readUInt16LE(pe + 20);
  const sections = [];
  for (let n = 0; n < binary.readUInt16LE(pe + 6); n++) {
    const offset = sectionTable + n * 40;
    sections.push({ start: imageBase + binary.readUInt32LE(offset + 12),
      size: binary.readUInt32LE(offset + 16), raw: binary.readUInt32LE(offset + 20) });
  }
  const functions = tsv(path.join(dir, 'functions.tsv'));
  const instructions = tsv(path.join(dir, 'disassembly.tsv')).map(row => ({
    address: parseInt(row[0], 16), bytes: row[1], text: row[2], flow: row[3],
  }));
  const index = new Map();
  for (const row of functions) {
    const start = parseInt(row[0], 16), size = Number(row[2]);
    if (size < 150) continue;
    const seq = instructions.filter(i => i.address >= start && i.address < start + size);
    // body_bytes is not necessarily a contiguous span. Reject such cases.
    let cursor = start;
    if (!seq.every(i => {
      if (i.address !== cursor) return false;
      cursor += i.bytes.length / 2;
      return true;
    }) || cursor !== start + size || seq.length < 30) continue;
    for (const instruction of seq) {
      const length = instruction.bytes.length / 2;
      const section = sections.find(s => instruction.address >= s.start &&
        instruction.address + length <= s.start + s.size);
      if (!section) throw new Error('Instruction outside raw PE sections');
      const offset = section.raw + instruction.address - section.start;
      if (binary.subarray(offset, offset + length).toString('hex') !== instruction.bytes.toLowerCase())
        throw new Error('Export bytes differ from PE at ' + instruction.address.toString(16));
    }
    const labels = new Map(seq.map((i, n) => [i.address, n]));
    const references = new Map();
    const normalized = seq.map(i => i.text.replace(/0x[0-9a-fA-F]{6,8}/g, text => {
      const address = parseInt(text, 16);
      if (labels.has(address)) return 'L' + labels.get(address);
      if (!references.has(address)) references.set(address, 'R' + references.size);
      return references.get(address);
    }) + '\t' + i.flow).join('\n');
    const record = { entry: row[0], body_bytes: size, instructions: seq.length };
    index.set(normalized, [...(index.get(normalized) || []), record]);
  }
  return index;
}
const [smuta, rd] = definitions.map(([game]) => load(game));
const pairs = [];
for (const [pattern, left] of smuta) {
  if (!rd.has(pattern)) continue;
  for (const a of left) for (const b of rd.get(pattern))
    pairs.push({ smuta: a, raising_dead: b });
}
pairs.sort((a, b) => b.smuta.body_bytes - a.smuta.body_bytes || a.smuta.entry.localeCompare(b.smuta.entry));
for (const sample of samples)
  if (digest(sample.path) !== sample.sha256) throw new Error('Sample changed during comparison');
const result = {
  schema_version: 1,
  address_space: 'Ghidra virtual addresses; image base 0x00400000; not runtime addresses',
  source: 'Existing Ghidra 12.1.2 s01-initial exports; no new decompilation',
  method: 'Exact instruction text and flow after per-function address renaming; internal targets retain instruction index; external address identity retained within each function',
  filters: { min_body_bytes: 150, min_instructions: 30, contiguous_body_required: true },
  limitations: [
    'Address-like numeric literals are renamed too; constants or different callees may create false positives.',
    'No cross-function reference equivalence, caller contracts, indirect targets, or runtime behavior verified.',
    'Includes compiler/runtime/library code; pair count is not shared engine coverage.',
    'Export bytes in all eligible contiguous bodies checked against PE sections; this does not validate instruction decoding or function boundaries.',
  ],
  samples, pair_count: pairs.length, pairs,
};
fs.writeFileSync('analysis/unified-port-comparison.json', JSON.stringify(result, null, 2) + '\n');
console.log('Verified sample hashes before/after; structural candidate pairs: ' + pairs.length);
