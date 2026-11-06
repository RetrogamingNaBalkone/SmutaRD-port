param(
    [Parameter(Mandatory=$true)][string]$GhidraHome,
    [Parameter(Mandatory=$true)][string]$JavaHome,
    [string]$RunId = (Get-Date -Format 'yyyyMMdd-HHmmss')
)
$ErrorActionPreference = 'Stop'
if ($RunId -notmatch '^[A-Za-z0-9_-]+$') { throw 'RunId must be a simple directory name' }
$taskRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
$taskJava = Join-Path $JavaHome 'bin/java.exe'
$taskJar = Join-Path $GhidraHome 'Ghidra/Framework/Utility/lib/Utility.jar'
if (!(Test-Path -LiteralPath $taskJava) -or !(Test-Path -LiteralPath $taskJar)) { throw 'Ghidra or Java not found' }
$taskEvidence = "$taskRoot/research/evidence/decompilation/$RunId"
$taskProject = "$taskRoot/research/ghidra/$RunId"
$taskExport = "$taskRoot/decompiled/$RunId"
foreach ($taskPath in @($taskEvidence, $taskProject, $taskExport)) {
    if (Test-Path -LiteralPath $taskPath) { throw "Refusing to overwrite existing run: $taskPath" }
}
New-Item -ItemType Directory -Force $taskEvidence, $taskProject, $taskExport | Out-Null
function Get-OriginalInventory {
    @(Get-ChildItem -LiteralPath "$taskRoot/originals" -File -Recurse | Sort-Object FullName | ForEach-Object {
        [ordered]@{ path=$_.FullName.Substring($taskRoot.Length+1).Replace('\','/'); size=$_.Length;
            sha256=(Get-FileHash -LiteralPath $_.FullName -Algorithm SHA256).Hash.ToLowerInvariant() }
    })
}
$taskBefore = Get-OriginalInventory
$taskBefore | ConvertTo-Json -Depth 5 | Set-Content -Encoding UTF8 "$taskEvidence/originals-before.json"
$taskManifest = Get-Content -Raw -Encoding UTF8 "$taskRoot/analysis/originals-manifest.json" | ConvertFrom-Json
foreach ($taskSample in $taskManifest.samples) {
    $taskActual = @($taskBefore | Where-Object { $_.path -eq $taskSample.path })
    if ($taskActual.Count -ne 1 -or $taskActual[0].sha256 -ne $taskSample.sha256 -or $taskActual[0].size -ne $taskSample.size) {
        throw "Manifest mismatch: $($taskSample.path)"
    }
}
$taskPreviousLocal = $env:LOCALAPPDATA
$taskRecords = @()
try {
    $env:LOCALAPPDATA = "$taskProject/local"
    foreach ($taskGame in @(@{id='smuta';exe='SMUTA.EXE'}, @{id='raising-dead';exe='Rd.EXE'})) {
        $taskSample = @($taskManifest.samples | Where-Object { (Split-Path $_.path -Leaf) -ceq $taskGame.exe })[0]
        $taskOutput = "$taskExport/$($taskGame.id)"
        New-Item -ItemType Directory -Force $taskOutput | Out-Null
        $taskArguments = @('-Djava.system.class.loader=ghidra.GhidraClassLoader',
            "-Duser.home=$taskProject/home", "-Dapplication.settingsdir=$taskProject/settings",
            '-Djava.awt.headless=true', '-Xmx3G', '-cp', $taskJar,
            'ghidra.Ghidra', 'ghidra.app.util.headless.AnalyzeHeadless', $taskProject, 'SmutaRD',
            '-import', "$taskRoot/$($taskSample.path)", '-max-cpu', '2',
            '-scriptPath', $PSScriptRoot, '-postScript', 'ExportResearch.java', $taskOutput,
            '-log', "$taskEvidence/$($taskGame.id)-application.log",
            '-scriptlog', "$taskEvidence/$($taskGame.id)-script.log")
        $taskArguments | ConvertTo-Json | Set-Content -Encoding UTF8 "$taskEvidence/$($taskGame.id)-arguments.json"
        # Java writes normal INFO output to stderr; avoid PowerShell 5 treating it as a terminating error.
        $ErrorActionPreference = 'Continue'
        & $taskJava @taskArguments *> "$taskEvidence/$($taskGame.id)-console.log"
        $taskExit = $LASTEXITCODE
        $ErrorActionPreference = 'Stop'
        if ($taskExit -ne 0 -or !(Test-Path "$taskOutput/summary.properties") -or
            !(Select-String -LiteralPath "$taskEvidence/$($taskGame.id)-console.log" -SimpleMatch 'SMUTARD_EXPORT_COMPLETE' -Quiet)) {
            throw "Ghidra export failed: $($taskGame.id); inspect $taskEvidence"
        }
        $taskRecords += [ordered]@{ game=$taskGame.id; sample=$taskSample.path; sha256=$taskSample.sha256;
            output="decompiled/$RunId/$($taskGame.id)"; project="research/ghidra/$RunId/SmutaRD.gpr"; exit_code=$taskExit }
        Write-Output "Exported $($taskGame.id): $taskOutput"
    }
} finally {
    $env:LOCALAPPDATA = $taskPreviousLocal
    $taskAfter = Get-OriginalInventory
    $taskAfter | ConvertTo-Json -Depth 5 | Set-Content -Encoding UTF8 "$taskEvidence/originals-after.json"
    $taskUnchanged = ($taskBefore | ConvertTo-Json -Depth 5 -Compress) -ceq ($taskAfter | ConvertTo-Json -Depth 5 -Compress)
    [ordered]@{ run_id=$RunId; ghidra_home=$GhidraHome; java_home=$JavaHome; originals_unchanged=$taskUnchanged;
        original_files=$taskAfter.Count; samples=$taskRecords;
        exporter_sha256=(Get-FileHash "$PSScriptRoot/ExportResearch.java" -Algorithm SHA256).Hash.ToLowerInvariant();
        driver_sha256=(Get-FileHash $PSCommandPath -Algorithm SHA256).Hash.ToLowerInvariant()
    } | ConvertTo-Json -Depth 6 | Set-Content -Encoding UTF8 "$taskEvidence/run.json"
    if (!$taskUnchanged) { throw 'Originals changed during analysis' }
}
