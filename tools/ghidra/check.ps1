param([Parameter(Mandatory=$true)][string]$RunId)
$ErrorActionPreference = 'Stop'
if ($RunId -notmatch '^[A-Za-z0-9_-]+$') { throw 'RunId must be a simple directory name' }
$taskRoot = [IO.Path]::GetFullPath((Join-Path $PSScriptRoot '../..'))
$taskEvidence = "$taskRoot/research/evidence/decompilation/$RunId"
$taskRun = Get-Content -Raw -Encoding UTF8 "$taskEvidence/run.json" | ConvertFrom-Json
$taskJava = Join-Path $taskRun.java_home 'bin/java.exe'
# Assign the decoded array directly: wrapping ConvertFrom-Json in @() nests it in PS 5.1.
$taskImportArgs = Get-Content -Raw -Encoding UTF8 "$taskEvidence/smuta-arguments.json" | ConvertFrom-Json
$taskImportIndex = [Array]::IndexOf($taskImportArgs, '-import')
if ($taskImportIndex -lt 0) { throw 'Missing import argument in recorded invocation' }
$taskArguments = @($taskImportArgs[0..($taskImportIndex-1)]) + @(
    '-process', '*.EXE', '-noanalysis', '-readOnly', '-scriptPath', $PSScriptRoot,
    '-postScript', 'CheckResearch.java', "$taskRoot/decompiled/$RunId", $taskEvidence,
    '-log', "$taskEvidence/reopen-application.log", '-scriptlog', "$taskEvidence/reopen-script.log")
$taskArguments | ConvertTo-Json | Set-Content -Encoding UTF8 "$taskEvidence/reopen-arguments.json"
$taskPreviousLocal = $env:LOCALAPPDATA
try {
    $env:LOCALAPPDATA = "$taskRoot/research/ghidra/$RunId/local"
    $ErrorActionPreference = 'Continue'
    & $taskJava @taskArguments *> "$taskEvidence/reopen-console.log"
    $taskExit = $LASTEXITCODE
    $ErrorActionPreference = 'Stop'
    if ($taskExit -ne 0) { throw "Reopen failed: $taskExit" }
    foreach ($taskGame in @('smuta', 'raising-dead')) {
        if (!(Select-String -LiteralPath "$taskEvidence/reopen-console.log" -SimpleMatch "SMUTARD_REOPEN_CHECK_PASSED $taskGame " -Quiet)) {
            throw "Missing successful reopen check for $taskGame"
        }
    }
    Write-Output 'Saved project and exports verified for both games.'
} finally { $env:LOCALAPPDATA = $taskPreviousLocal }
