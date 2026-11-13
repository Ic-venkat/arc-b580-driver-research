# REA frame-time capture for CS2 on Arc B580
# Run this from an ELEVATED (Administrator) PowerShell window.
# It records 4 minutes of frame data + system trace, then stops.

$pm = "$env:LOCALAPPDATA\Microsoft\WinGet\Packages\Intel.PresentMon.Console_Microsoft.Winget.Source_8wekyb3d8bbwe\presentmon.exe"
$dir = "$env:TEMP\opencode"

Write-Host "== Starting PresentMon capture (4 minutes)..." -ForegroundColor Cyan
$pmJob = Start-Process -FilePath $pm -ArgumentList "--process_name","cs2.exe","--output_file","$dir\cs2_frames_xmp.csv","--v2_metrics","--exclude_dropped","--no_console_stats","--timed","240","--terminate_after_timed" -PassThru -NoNewWindow

Start-Sleep -Seconds 2
Write-Host "== Starting WPR system trace (GPU + CPU)..." -ForegroundColor Cyan
wpr -start GPU -start CPU -fileMode

Write-Host ""
Write-Host ">>> PLAY CS2 NOW - 4 minutes of normal/worst-case gameplay <<<" -ForegroundColor Yellow
Start-Sleep -Seconds 250

Write-Host "== Stopping WPR and saving trace..." -ForegroundColor Cyan
wpr -stop "$dir\cs2_trace_xmp.etl"

Write-Host "Waiting for PresentMon to finish writing CSV..." -ForegroundColor Cyan
try { $pmJob | Wait-Process -Timeout 60 -ErrorAction SilentlyContinue } catch {}

Write-Host ""
Write-Host "DONE. Files:" -ForegroundColor Green
Write-Host "  $dir\cs2_frames.csv"
Write-Host "  $dir\cs2_trace.etl"
