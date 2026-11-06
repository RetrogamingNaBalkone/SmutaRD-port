[CmdletBinding()]
param([switch]$Verify)
$ErrorActionPreference = 'Stop'
$repo = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$initial = "$repo/research/evidence/decompilation/s01-initial"
$run = Get-Content -Raw -Encoding UTF8 "$initial/run.json" | ConvertFrom-Json
$evidence = "$repo/research/evidence/s01-refined"
$project = "$repo/research/ghidra/s01-refined"
$output = "$repo/decompiled/s01-refined"
$manifest = Get-Content -Raw -Encoding UTF8 "$repo/analysis/originals-manifest.json" | ConvertFrom-Json
function Assert-Samples {
    foreach ($s in $manifest.samples) {
        $p = Join-Path $repo $s.path
        if ((Get-Item -LiteralPath $p).Length -ne $s.size -or
            (Get-FileHash -LiteralPath $p -Algorithm SHA256).Hash -ne $s.sha256) { throw "Sample mismatch: $p" }
    }
    Write-Output "manifest_verified=$($manifest.samples.Count)"
}
Assert-Samples
if (!(Test-Path "$project/SmutaRD.gpr")) {
    if ($Verify) { throw 'No refined project to verify' }
    New-Item -ItemType Directory -Force $project | Out-Null
    Copy-Item -LiteralPath "$repo/research/ghidra/s01-initial/SmutaRD.gpr" -Destination $project
    Copy-Item -LiteralPath "$repo/research/ghidra/s01-initial/SmutaRD.rep" -Destination $project -Recurse
}
New-Item -ItemType Directory -Force $evidence | Out-Null
$recorded = Get-Content -Raw -Encoding UTF8 "$initial/smuta-arguments.json" | ConvertFrom-Json
$index = [Array]::IndexOf($recorded, 'ghidra.app.util.headless.AnalyzeHeadless')
if ($index -lt 0) { throw 'Missing recorded launcher' }
$mode = if ($Verify) { 'verify' } else { 'apply' }
$arguments = @($recorded[0..$index]) + @($project, 'SmutaRD', '-process', '*.EXE', '-noanalysis',
    '-scriptPath', $PSScriptRoot, '-postScript', 'RefinePseudocode.java', $output, $mode,
    '-log', "$evidence/$mode-application.log", '-scriptlog', "$evidence/$mode-script.log")
if ($Verify) { $arguments += '-readOnly' }
$arguments | ConvertTo-Json | Set-Content -Encoding UTF8 "$evidence/$mode-arguments.json"
$previousLocal = $env:LOCALAPPDATA
try {
    $env:LOCALAPPDATA = "$repo/research/ghidra/s01-initial/local"
    $ErrorActionPreference = 'Continue'
    & "$($run.java_home)/bin/java.exe" @arguments *> "$evidence/$mode-console.log"
    $result = $LASTEXITCODE
    $ErrorActionPreference = 'Stop'
    if ($result -ne 0) { throw "Ghidra exit $result; see $evidence/$mode-console.log" }
    foreach ($name in @('SMUTA.EXE','Rd.EXE')) {
        if (!(Select-String -LiteralPath "$evidence/$mode-console.log" -SimpleMatch "SMUTARD_REFINEMENT_PASSED $name " -Quiet)) {
            throw "Missing success marker for $name; see $evidence/$mode-console.log"
        }
    }
} finally {
    $env:LOCALAPPDATA = $previousLocal
    Assert-Samples
}
Write-Output "refinement=$mode passed"
