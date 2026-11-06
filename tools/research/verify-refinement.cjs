// Verify targeted exports against PE bytes and the defects that motivated refinement.
// Run after refine-pseudocode.ps1 and its -Verify pass, from the repository root.
const fs = require('node:fs');
const crypto = require('node:crypto');
const assert = require('node:assert/strict');
const hash = b => crypto.createHash('sha256').update(b).digest('hex');
const read = p => fs.readFileSync(p, 'utf8');
const manifest = JSON.parse(read('analysis/originals-manifest.json').replace(/^\uFEFF/, ''));
const definitions = [
  ['smuta', 'SMUTA.EXE', ['0040840c','0041181c','00412628','0040e4ac','0042fc2c']],
  ['raising-dead', 'Rd.EXE', ['004044ec','004169e0','004177ec','00424f88','00433130']],
];
const results = [];
for (const [game, name, entries] of definitions) {
  const sample = manifest.samples.find(s => s.path.endsWith('/' + name));
  assert(sample);
  const binary = fs.readFileSync(sample.path);
  assert.equal(hash(binary),sample.sha256);
  assert.equal(binary.length,sample.size);
  const pe = binary.readUInt32LE(0x3c);
  const base = binary.readUInt32LE(pe+52);
  assert.equal(base,0x400000);
  const sections = [];
  const table = pe+24+binary.readUInt16LE(pe+20);
  for (let n=0; n<binary.readUInt16LE(pe+6); n++) {
    const p = table+n*40;
    sections.push({start: base+binary.readUInt32LE(p+12),size: binary.readUInt32LE(p+16),raw: binary.readUInt32LE(p+20)});
  }
  const functions = [];
  for (const [index,entry] of entries.entries()) {
    const prefix = `decompiled/s01-refined/${game}/${entry}`;
    const c = read(prefix+'.c');
    assert(!/in_stack_|in_ST0/.test(c), `${game} ${entry}: unbound input`);
    assert(c.includes('__cdecl'));
    if (index===0) {
      assert(c.includes('->field_10 ='));
      assert(!/\)\(\);/.test(c), 'Empty indirect call');
      assert(c.includes('->vtable[0xf]') && c.includes('->vtable[0x10]'));
    }
    if (index===4) assert(c.includes('longlong __cdecl') && c.includes('float10 value') && c.includes('RC=11'));
    const instructions = read(prefix+'.tsv').trimEnd().split('\n').map(s=>s.split('\t'));
    let cursor = parseInt(entry,16);
    for (const [address,bytes] of instructions) {
      const va = parseInt(address,16), size = bytes.length/2;
      assert.equal(va,cursor,'Noncontiguous function');
      cursor += size;
      const section = sections.find(s=>va>=s.start && va+size<=s.start+s.size);
      assert(section,'Unmapped PE address');
      const p = section.raw+va-section.start;
      assert.equal(binary.subarray(p,p+size).toString('hex'),bytes,`${game} ${address}: bytes differ`);
    }
    functions.push({entry,body_bytes:cursor-parseInt(entry,16),instructions:instructions.length,
      pseudocode_sha256:hash(fs.readFileSync(prefix+'.c')),listing_sha256:hash(fs.readFileSync(prefix+'.tsv'))});
  }
  assert.equal(hash(fs.readFileSync(sample.path)),sample.sha256);
  results.push({game,sample:sample.path,sha256:sample.sha256,functions});
}
fs.writeFileSync('analysis/pseudocode-refinement.json',JSON.stringify({schema_version:1,
  address_space:'Ghidra VA; image base 0x00400000; not runtime or file offsets',
  scope:'10 targeted functions; remaining automatic exports are not validated',
  limitations:['No gameplay verification','Opaque structures and indirect return types remain provisional',
    'x87 ROUND output omits CW truncation; see export headers and report'],samples:results},null,2)+'\n');
console.log('Verified 10 exports: PE bytes, bound inputs, field offset, indirect calls, x87 signature.');
