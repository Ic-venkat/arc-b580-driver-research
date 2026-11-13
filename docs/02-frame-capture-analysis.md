# Doc 02 — Frame-Time Capture Analysis (CS2, Vulkan mode)

Date: 2026-11-13. Tool: PresentMon 2.6 console, ETW. Game: Counter-Strike 2 (`cs2.exe`, PID 3484), Vulkan renderer, uncapped FPS (SyncInterval=0). 4-minute captures.

## Method
```
presentmon.exe --process_name cs2.exe --v2_metrics --exclude_dropped --timed 240 --terminate_after_timed
```
(requires elevation; wrapped in `tools/run_capture.ps1`)

## Results

| Config | Frames | Avg ft (ms) | Avg FPS | p50 | p90 | p99 | CPUBusy avg | GPUBusy avg | CPU-bound % |
|---|---|---|---|---|---|---|---|---|---|
| 1x16GB @ 2133 (no XMP) | 23,167 | 9.36 | 106.9 | 8.94 | 13.85 | 21.71 | 8.96 | 3.65 | 99.8% |
| 1x16GB @ 2666 (XMP) | 27,307 | 7.34 | 136.2 | 5.76 | 11.02 | 13.40 | 7.00 | 2.85 | 100% |

Full per-metric percentiles: `data/metrics/cs2_*.csv`, comparison: `data/metrics/summary_comparison.csv`.
Raw per-frame data: `data/captures/cs2_frames*.csv` (~23k/27k rows; columns incl. FrameTime, CPUBusy, CPUWait, GPUBusy, GPUWait, GPUTime, GPULatency, PresentMode).

## Conclusions
1. **CPU-bound, not GPU-bound.** CPUBusy ≈ FrameTime on ~100% of frames; GPU idle-waits. The B580 finishes CS2's GPU work in ~3.5 ms (≈280 fps capability) but frames are paced at 9.5/7.3 ms by the CPU render thread.
2. **XMP alone = +28% avg fps, p99 improved 38% (21.7→13.4 ms).** Biggest cheap win.
3. Present path is healthy: Hardware Composed: Independent Flip, no composited latency, only 17 frames >100ms in run 1.
4. The "Arc vs NVIDIA" gap in CS2 is a **per-frame driver CPU cost** difference: Arc UMD does more work per submission, so with equal GPU capability the CPU budget runs out sooner.

## Next measurements planned
- After 2nd RAM stick (dual-channel): capture run #3.
- Post CPU upgrade: capture run #4 (compare headroom).
- Optional: DX11 vs Vulkan mode comparison in CS2.
