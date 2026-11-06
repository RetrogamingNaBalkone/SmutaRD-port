# Static evidence from the existing Ghidra export; never executes game binaries.
[CmdletBinding()]
param()
$ErrorActionPreference = 'Stop'
$repo = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$manifest = Get-Content -LiteralPath (Join-Path $repo 'analysis/originals-manifest.json') -Raw -Encoding UTF8 | ConvertFrom-Json
# The manifest schema is checked below before any sample is inspected.
$samples = $manifest.samples
if (-not $samples) { throw 'Expected manifest.samples' }
function Assert-Samples {
    foreach ($sample in $samples) {
        $path = Join-Path $repo $sample.path
        if ((Get-Item -LiteralPath $path).Length -ne $sample.size -or
            (Get-FileHash -LiteralPath $path -Algorithm SHA256).Hash -ne $sample.sha256) {
            throw "Manifest mismatch: $($sample.path)"
        }
    }
    "manifest_verified=$($samples.Count)"
}
function Inspect-Image([string]$relative) {
    $bytes = [IO.File]::ReadAllBytes((Join-Path $repo $relative))
    $pe = [BitConverter]::ToInt32($bytes, 60)
    $signature = [Text.Encoding]::ASCII.GetString($bytes, $pe, 2)
    "image=$relative header=$signature sha256=$((Get-FileHash -LiteralPath (Join-Path $repo $relative) -Algorithm SHA256).Hash)"
    if ($signature -ne 'PE') { return }
    if ([BitConverter]::ToUInt16($bytes, $pe + 24) -ne 0x10b) { throw 'Expected PE32' }
    $count = [BitConverter]::ToUInt16($bytes, $pe + 6)
    $table = $pe + 24 + [BitConverter]::ToUInt16($bytes, $pe + 20)
    $sections = @(for ($i = 0; $i -lt $count; $i++) {
        $offset = $table + $i * 40
        [pscustomobject]@{
            rva = [BitConverter]::ToUInt32($bytes, $offset + 12)
            raw = [BitConverter]::ToUInt32($bytes, $offset + 20)
            size = [BitConverter]::ToUInt32($bytes, $offset + 16)
        }
    })
    function Convert-Rva([long]$rva) {
        foreach ($section in $sections) {
            if ($rva -ge $section.rva -and $rva -lt ($section.rva + $section.size)) {
                return [int]($rva - $section.rva + $section.raw)
            }
        }
        throw "Unmapped RVA: $rva"
    }
    $imports = [BitConverter]::ToUInt32($bytes, $pe + 24 + 104)
    if ($imports -eq 0) { return }
    $offset = Convert-Rva $imports
    while ([BitConverter]::ToUInt32($bytes, $offset + 12) -ne 0) {
        $name = Convert-Rva ([BitConverter]::ToUInt32($bytes, $offset + 12))
        $end = $name
        while ($bytes[$end] -ne 0) { $end++ }
        'import=' + [Text.Encoding]::ASCII.GetString($bytes, $name, $end - $name)
        $offset += 20
    }
    if ($relative.EndsWith('/SMUTA.EXE')) {
        $pointer = [BitConverter]::GetBytes([int]0x434f1a)
        for ($i = 0; $i -le $bytes.Length - 4; $i++) {
            if ($bytes[$i] -eq $pointer[0] -and $bytes[$i + 1] -eq $pointer[1] -and
                $bytes[$i + 2] -eq $pointer[2] -and $bytes[$i + 3] -eq $pointer[3]) {
                'dispdib_absolute_pointer_file_offset={0:x8}' -f $i
            }
        }
        foreach ($address in @(0x434ef8, 0x434f1a, 0x43635c, 0x436368, 0x436930)) {
            # These addresses belong to DATA: RVA 0x34000, raw offset 0x32800.
            $offset = Convert-Rva ($address - 0x400000)
            'data_va={0:x8} file_offset={1:x8} bytes={2}' -f $address, $offset, [BitConverter]::ToString($bytes, $offset, 48)
        }
    }
}
Assert-Samples
$game = 'originals/smuta_modern_20261013/smuta_modern/'
foreach ($name in @('SMUTA.EXE', 'DISPDIB.DLL', 'waveopen.dll', 'smuta_music.dll', 'SETUP.EXE')) {
    Inspect-Image ($game + $name)
}
$export = Join-Path $repo 'decompiled/s01-initial/smuta'
Get-Content -LiteralPath (Join-Path $export 'program.txt') -Encoding UTF8 | Select-Object -First 9
Get-Content -LiteralPath (Join-Path $export 'disassembly.tsv') -Encoding UTF8 | Where-Object {
    $address = ($_ -split "`t", 2)[0]
    ($address -ge '0041f8d0' -and $address -lt '0041fa14') -or
    ($address -ge '0041fc2c' -and $address -lt '0041fe80') -or
    ($address -ge '00421d39' -and $address -lt '00421d66') -or
    ($address -ge '004044e8' -and $address -lt '00404578')
}
Assert-Samples
