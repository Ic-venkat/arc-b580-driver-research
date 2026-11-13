# Doc 04 — Ground-Truth Dispatch Map & Hot-Path Analysis

Date: 2026-11-13. Phase 4 breakthrough: dynamic probing captured the real command→implementation map.

## Method (see `tools/probe_dispatch.py`)
Python/ctypes via the **Vulkan loader** (vulkan-1.dll): created a real instance+device on the B580, resolved all 890 known command names via `vkGetDeviceProcAddr`, attributed pointers to `igvk64.dll` (loaded base 0x7ffd60cf0000, size 0x1bdf000).
- **229 commands resolved directly to driver code** (`data/re/dispatch_ground_truth.json`)
- 8 resolved to the loader (trampolines), 663 unresolved (mostly junk strings from RE string extraction; some are load-time gated)

## Runtime→Ghidra address conversion
RVA = runtime − 0x7ffd60cf0000; Ghidra = 0x180000000 + RVA (`tools/convert_dispatch_map.py`, output `data/re/dispatch_ghidra_map.json`).

## CS2-critical implementations identified (Ghidra addresses)
| Command | Ghidra addr | Shape |
|---|---|---|
| QueueSubmit | 0x18032a0d0 | 2-line thunk → `FUN_180138894` (validation guard) + `FUN_180137050` (real submit, ~600 lines, 20+ calls) |
| CmdDrawIndexed | 0x180031510 | 1308-line decompile, 51 call sites (decompiled under `thunk_FUN_180031520`) |
| CmdDraw | 0x1800a7eb0 | 425 lines, 15 calls |
| CmdBindDescriptorSets | 0x1800dd420 | 132 lines, 8 calls |
| CmdPipelineBarrier | 0x180205820 | 26 lines, 4 calls (likely thin → real impl deeper) |
| CmdBindPipeline | 0x180078f20 | 51 lines, 5 calls |
| CmdBeginRenderPass | 0x180c68e10 | TBI |
| CmdEndRenderPass | 0x180c6b6e0 | TBI |

## QueueSubmit structure (first decompile pass)
- Entry does a **validation check** (`FUN_180138894`): reads a flag at device+0x8d68, on failure aborts via `FUN_18061b740` (error/exit path — same function seen in vkCreateInstance).
- Real submit `FUN_180137050` (~600 decompiled lines): one Enter/LeaveCriticalSection pair, high call fan-out. Notable call targets: `FUN_180137024` x6, `FUN_1801381b4` x6, `FUN_180c47128` x4, `FUN_180033880` x4, `FUN_18009dba4` x4. Full C: `data/re/queuesubmit_impl.c`.
- Next: follow the fan-out; measure which part is per-command-buffer CPU work vs. batch-amortizable.

## Observations
- `CmdDrawIndexed`'s 1308-line body with 51 calls is consistent with Arc doing substantial per-draw validation/state work in the UMD.
- Thunk pattern (`thunk_FUN_...`) suggests a dispatch indirection layer everywhere — each command call passes through a guard thunk before the real implementation.

## TODO next session
1. Decompile fan-out callees of FUN_180137050; classify: memory alloc, sync handling, command-stream patching.
2. Decompile the real bodies behind CmdPipelineBarrier / CmdBeginRenderPass.
3. Count distinct code paths per frame; compare with ETW sampling (WPR trace of CS2 shows actual driver CPU time distribution; use the already-captured cs2_trace_xmp.etl).
4. DX11 UMD analysis (queued, project `arcdrivers`).
