# Doc 06 — Draw-Call Pipeline Overhead: Mid-Frame Command Flushing in `CmdDrawIndexed`

Date: 2026-11-14. Phase 5 reverse engineering of `igvk64.dll`.

## Summary
Cross-referencing the functions invoked inside `vkCmdDrawIndexed` (`0x180031510`, 1,307 decompiled lines) with the `vkQueueSubmit` pipeline revealed that **the hardware packet emitters (`FUN_1800a8aa0` and `FUN_1800aaaa8`) are also called directly inside `CmdDrawIndexed`**.

This proves that Intel's Vulkan UMD does not purely buffer command stream tokens into command buffers during recording. Under certain pipeline state conditions or buffer boundary thresholds, it **flushes and emits command packets synchronously during individual draw calls**.

## Call-Site Evidence in `CmdDrawIndexed`

Inside `thunk_FUN_180031520` (`0x180031510`):
```c
// Line 1146 of hotpath_decomp.c:
FUN_180c47128(param_1, param_1 + 0xc1b0);   // Barrier / synchronization resolution

// Under buffer full / pipeline dirty conditions:
FUN_1800a8aa0(lVar25, 0, 0, 0);              // Primary hardware packet emitter
// or:
FUN_1800aaaa8(lVar32);                      // Secondary packet emitter
```

## Significance & Performance Impact

1. **Mid-Draw Command Submission:**
   In Vulkan, `vkCmdDrawIndexed` is intended to be an extremely lightweight host command that simply writes a few dozen bytes of draw parameters into a command buffer.
   In Intel's UMD, `CmdDrawIndexed` contains **51 internal call sites** and can trigger full hardware packet emission routines mid-recording.

2. **Affinity Loop Exposure During Draw Recording:**
   Because `FUN_1800a8aa0` and `FUN_1800aaaa8` contain the `SetProcessAffinityMask(GetCurrentProcess(), ...)` loop documented in Doc 05, this means whole-process affinity manipulation can be triggered not just at `QueueSubmit` boundaries, but potentially **in the middle of draw loops** if batch thresholds are reached during recording.

3. **High CPU Cycles Per Draw Call:**
   Compared to NVIDIA's minimal command-buffer recording path (~100–300 CPU cycles per draw call), Intel's 1,307-line draw implementation with dirty-state checks, dynamic ring reallocations (`FUN_180031210` x9), and inline submissions creates significant CPU overhead in draw-call-heavy titles like CS2.
