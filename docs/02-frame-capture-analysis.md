# Doc 02 — PresentMon Telemetry & CPU-Bound Bottleneck Analysis

Date: 2026-11-13. Tool: PresentMon 2.6 console, ETW capture. Target: *Counter-Strike 2* (`cs2.exe`), Vulkan Renderer, Uncapped Framerate (SyncInterval=0). 4-minute continuous gameplay traces.

## Methodology
Captures recorded via high-precision ETW hardware event tracing:
```
presentmon.exe --process_name cs2.exe --v2_metrics --exclude_dropped --timed 240 --terminate_after_timed
```

## Telemetry Summary

| Metric | 2133 MT/s Baseline | 2666 MT/s (XMP) | Delta | Architectural Significance |
|---|---|---|---|---|
| **Average Frame Time** | 9.36 ms | 7.34 ms | -21.6% | Directly pacing overall FPS |
| **Average FPS** | 106.9 FPS | 136.2 FPS | +27.4% | Severe memory/cache sensitivity |
| **p99 Frame Time** | 21.71 ms | 13.40 ms | -38.3% | Substantial micro-stutter reduction |
| **CPU Busy Time (Avg)** | 8.96 ms | 7.00 ms | -21.9% | Matches frame time (~95–100% of budget) |
| **GPU Busy Time (Avg)** | 3.65 ms | 2.85 ms | -21.9% | GPU finishes work in under ~3ms (~280–350 FPS capacity) |
| **CPU-Bound Ratio** | **99.8%** | **100.0%** | — | **System is entirely CPU render-thread blocked** |

## Telemetry Conclusions
1. **GPU Compute Capacity is Underutilized:**
   The Arc B580 GPU requires only ~2.8 to 3.6 ms of execution time per frame. The hardware is idling for ~60% of each frame cycle waiting for work from the CPU.
2. **Extreme Memory Latency Sensitivity:**
   A standard frequency increase from 2133 to 2666 MT/s yielded a massive +27.4% average FPS and a 38.3% improvement in 99th percentile frame times. This disproportionate sensitivity directly correlates with high cache invalidation rates in the CPU render thread.
3. **Present Path Verification:**
   The presentation path is optimal (`Hardware Composed: Independent Flip`), confirming that DWM compositing and display synchronization are not introducing pipeline stalls.
