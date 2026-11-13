# Intel Arc B580 Vulkan UMD CPU Overhead Investigation

**An empirical and reverse-engineering study into CPU-bound frame pacing and thread scheduling degradation on Intel Arc GPUs.**

---

## Executive Summary

Testing an **Intel Arc B580 12GB** (Driver `32.0.101.9175`) on an **Intel Core i5-10600K** running *Counter-Strike 2* (Vulkan mode) revealed that the system was **99.8% to 100% CPU-bound**, with the GPU running ~60% idle (~2.8–3.6 ms GPU busy time vs. ~7.3–9.4 ms frame time).

By disassembling and decompiling Intel's Vulkan User-Mode Driver (`igvk64.dll`), we identified the root architectural cause:

**Intel's Vulkan UMD actively invokes `SetProcessAffinityMask(GetCurrentProcess(), ...)` directly inside the per-frame submission loop (`vkQueueSubmit`).**

Every 100 command submissions, the driver calls a Win32 whole-process affinity override. This forces immediate kernel thread rescheduling across all CPU cores, evicts L1/L2 caches, overrides the game engine's custom thread scheduling, and causes severe frame-time spikes in CPU-bound scenarios.

---

## The Root Cause: Decompiled Evidence

In `igvk64.dll` (Driver version `32.0.101.9175`), tracing `vkQueueSubmit` (`0x18032a0d0`) down to hardware packet emission (`FUN_1800a8aa0` and `FUN_1800aaaa8`):

```c
// Decompiled from igvk64.dll: FUN_1800a8aa0 / FUN_1800aaaa8
// Atomic counter check: uVar29 is incremented per submission batch at offset +0x16640.
// Reciprocal multiplication by 0x47ae147ae147ae15 performs fast modulo 100 (uVar29 % 100 == 0).

if (uVar29 == ((uVar29 - lVar14 >> 1) + lVar14 >> 6) * 100) {
    DVar6 = GetActiveProcessorCount(0xffff);
    dVar33 = (double)pow(2.0, (double)DVar6) - 1.0;   // Generates full core mask: (1 << active_cores) - 1
    
    hProcess = GetCurrentProcess();
    SetProcessAffinityMask(hProcess, (longlong)dVar33 + lVar14); // FORCIBLY OVERRIDES PROCESS AFFINITY
}
LOCK();
plVar1 = (longlong *)(*(longlong *)(uVar18 + 0x48) + 0x16640);
*plVar1 = *plVar1 + 1;
UNLOCK();
```

### Why This Destroys Frame Pacing
1. **Whole-Process Affinity Reset:** `SetProcessAffinityMask` targets `GetCurrentProcess()`, which affects every thread of the game (main game thread, render thread, audio, worker threads).
2. **Kernel Context Switch Storm:** Modifying process affinity forces the Windows NT scheduler to evaluate and reschedule running threads across all cores.
3. **Cache Eviction (L1/L2 Cache Thrashing):** When the game's render thread is moved between cores, all cached state is lost, causing sudden bursts of memory fetches.
4. **Game Engine Interference:** Game engines like Valve's Source 2 manage thread pools and affinity explicitly. The driver periodically trampling over this causes micro-stutters and frame-time spikes.

---

## Benchmark & Telemetry Data (PresentMon 2.6)

Game: *Counter-Strike 2* (`cs2.exe`), Vulkan Renderer, Uncapped Framerate.

| Metric | Baseline (2133 MT/s Single-Ch) | XMP Enabled (2666 MT/s Single-Ch) |
|---|---|---|
| **Average FPS** | **106.9 FPS** | **136.2 FPS** (+28%) |
| **Frame Time (Avg)** | 9.36 ms | 7.34 ms |
| **Frame Time (p99)** | 21.71 ms | 13.40 ms |
| **CPU Busy Time (Avg)** | 8.96 ms | 7.00 ms |
| **GPU Busy Time (Avg)** | 3.65 ms | 2.85 ms (~280 FPS capability) |
| **CPU Bound %** | **99.8%** | **100.0%** |

Full per-frame capture logs (`.csv`) and computed summaries are available in [`data/captures/`](data/captures/) and [`data/metrics/`](data/metrics/).

---

## Repository Structure

```
├── README.md                               # This document
├── docs/                                   # Detailed technical writeups
│   ├── 01-system-profile.md                # Test bench specs & BIOS configuration
│   ├── 02-frame-capture-analysis.md        # PresentMon frame pacing analysis
│   ├── 03-driver-re-notes-igvk64.md        # Vulkan UMD dispatch architecture
│   ├── 04-dispatch-map-and-hotpath.md      # Dynamic dispatch map (229 commands resolved)
│   ├── 05-driver-affinity-manipulation.md  # Detailed disassembly & SetProcessAffinityMask analysis
│   └── 06-draw-pipeline-overhead.md        # Draw-call pipeline overhead & mid-frame flushing
├── LICENSE                                 # MIT License
├── data/
│   ├── captures/                           # Raw PresentMon CSV frame captures (50k+ frames)
│   ├── metrics/                            # Percentile analysis (p50, p90, p99, averages)
│   └── re/                                 # Decompiled C sources and Ghidra symbol dumps
│       ├── callee_details.c                # Full decompile of FUN_1800a8aa0 & FUN_1800aaaa8
│       ├── hotpath_decomp.c                # Hot-path commands (QueueSubmit, CmdDrawIndexed, etc.)
│       ├── queuesubmit_impl.c              # Submission path entrypoints
│       └── dispatch_ghidra_map.json        # 229 resolved runtime-to-Ghidra addresses
└── tools/                                  # Reproducible scripts
    ├── probe_dispatch.py                   # Real-time Vulkan ICD probe tool
    ├── run_capture.ps1                     # PresentMon automation wrapper
    └── *.java                              # Ghidra headless analysis scripts
```

---

## Recommendations for Intel Graphics Software Team

1. **Remove `SetProcessAffinityMask` from the UMD Submission Loop:** 
   User-Mode Drivers must never mutate host process affinity. If this is intended as an E-Core / P-Core mitigation for 12th+ Gen Intel CPUs:
   - Restrict any thread affinity adjustments strictly to internal driver worker threads (e.g., using `SetThreadAffinityMask`).
   - Query CPU topology once at device creation (`vkCreateDevice`) rather than executing repeated modulo checks in hot submission paths.
   - Completely disable this heuristic on systems with non-hybrid CPUs (e.g., 10th/11th Gen Core, AMD Ryzen).
2. **Flatten Command Dispatch:**
   Replace the multi-tier sorted binary-search command resolution with a static flat vtable to reduce CPU instruction footprint.
3. **Slim Down Per-Draw Validation:**
   Streamline `CmdDrawIndexed` validation paths in release builds.

---

## Reproduction & Verification

To inspect the binary yourself:
1. Load `igvk64.dll` (Driver `32.0.101.9175` or later) into Ghidra / IDA Pro.
2. Locate `vkQueueSubmit` export / symbol (`0x18032a0d0`).
3. Follow calls: `thunk_FUN_180138838` -> `FUN_180137050` -> `FUN_180033880` -> `FUN_1800a8aa0`.
4. Inspect xrefs to `SetProcessAffinityMask` or search for the reciprocal constant `0x47ae147ae147ae15`.
