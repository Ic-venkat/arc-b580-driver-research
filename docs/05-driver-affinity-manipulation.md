# Doc 05 — Critical Discovery: Driver Dynamic Affinity Manipulation in QueueSubmit Path

Date: 2026-11-14. Phase 5 reverse engineering of `igvk64.dll`.

## Summary
Decompilation of `QueueSubmit` execution fan-out (`FUN_180033880` -> `FUN_1800a8aa0` and `FUN_1800aaaa8`, each ~1200 lines of C) uncovered direct calls to Windows process management APIs inside the command submission loop:
- `GetActiveProcessorCount(0xffff)`
- `GetCurrentProcess()`
- `SetProcessAffinityMask(hProcess, ...)`

## Mechanism & Disassembly Analysis
Inside `FUN_1800a8aa0` and `FUN_1800aaaa8`:
1. The driver checks feature flags on the adapter/device state:
   - Flag at `device_state + 0x3f8 + 0xd00 != 0`
   - Atomic counter at `device_state + 0x16640`
2. **Frequency check via reciprocal multiplication**:
   The code computes `uVar % 100` using the 64-bit reciprocal constant `0x47ae147ae147ae15` (multiplication by reciprocal of 100).
   Every **100 batch submissions**, if the flag is active:
   ```c
   DVar6 = GetActiveProcessorCount(0xffff);
   dVar33 = pow(2.0, (double)DVar6) - 1.0;  // computes full core bitmask: (1 << active_cores) - 1
   hProcess = GetCurrentProcess();
   SetProcessAffinityMask(hProcess, mask);
   ```
3. Furthermore, interlocked counters (`LOCK(); plVar1 = plVar1 + 1; UNLOCK();`) track submission frequency at offsets `+0x16638` and `+0x16640`.

## Impact on Gaming Workloads (e.g., CS2)
1. **Calling `SetProcessAffinityMask` on the entire process** forcibly alters Windows thread scheduling for **all game threads** (render thread, engine main thread, audio, worker pool).
2. It resets any affinity optimizations previously set by the game engine (Source 2 explicitly manages thread affinities for P/E cores and worker pools).
3. `SetProcessAffinityMask` is a heavy Win32 kernel transition that invalidates thread scheduling state across all cores, causing scheduling stalls, context switch bursts, and cache invalidation.
4. This directly explains severe 1% and 0.1% low frame-time spikes in CPU-bound scenarios.

## Submission Path Pipeline
```
vkQueueSubmit (0x18032a0d0)
  └─ thunk_FUN_180138838
       ├─ FUN_180138894 (validation check)
       └─ FUN_180137050 (~600 lines, submission manager)
            ├─ FUN_180137024 / FUN_1801381b4 (dynamic array reallocator, growth factor x2)
            ├─ FUN_180c47128 (barrier/event synchronization processor)
            └─ FUN_180033880 (batch list iterator)
                 ├─ FUN_1800a8aa0 (1186 lines, primary hardware packet emitter)
                 │    └─ Every 100 submissions: SetProcessAffinityMask
                 └─ FUN_1800aaaa8 (1211 lines, secondary/fallback hardware emitter)
                      └─ Every 100 submissions: SetProcessAffinityMask
```
