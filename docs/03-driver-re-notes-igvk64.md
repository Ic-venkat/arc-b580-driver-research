# Doc 03 — Reverse Engineering Notes: `igvk64.dll` (Arc Vulkan UMD)

Date: 2026-11-13. Tool: Ghidra 12.2 headless (JDK 25), full auto-analysis. Binary: `igvk64.dll` (27,717,520 bytes, PE x64, stripped, image base 0x180000000).
Evidence files in `data/re/ghidra_dumps/`.

## Topology
- **38,631 functions**, 3,156 with names (RTTI-derived), **140 exports** (ICD facade: `vk_icdNegotiateLoaderICDInterfaceVersion`, `vk_icdGetInstanceProcAddr`, `vkCreateInstance`, `vkGetInstanceProcAddr`, `vkGetDeviceProcAddrINTEL`, plus `ctl*` Intel Control Library exports).
- No vk command-name table export; all internal dispatch by **name strings embedded in binary** (900 found, stored *without* the "vk" prefix).

## Dispatch architecture (confirmed by decompilation)
1. `vkGetInstanceProcAddr` (0x1802870a0): for instance==NULL, lookup via `FUN_18071fa48` over sorted table [begin,end) with comparator `FUN_180d829b0`; **strips "vk" prefix first** (strncmp). For instance objects: `FUN_1802877fc(instance+0x18, name, ..., instance+0x17c)`.
2. `FUN_1802877fc` = device proc resolution: three sequential binary searches over three name-sorted tables in the device object:
   - `[device+0xa8, device+0x228)` — ~16 core commands
   - `[device+0x228, device+0xa20)` — ~134 extension commands
   - `[device+0xa20, device+0x63d0)` — ~382 commands
   Each entry stride 0x18 (24 bytes): `{name*, fn*, enabled, version}`.
3. Result validators `FUN_180287b40` / `FUN_1802881a8`: per-entry checks — enabled flag (+0x10), min version (+0x14, 0x400000=1.0), **per-command extension-name string filter** (+0x18/+0x1c). Returns `entry+8` (the fn pointer).
4. **Command metadata table builder**: `FUN_18031e0dc` (21,501 bytes — one of largest functions). Registers every command: name string pointer, arg-count, flags (0x400000 / 0xffffffff / 0x403000), per-command extension filter names. Alphabetically ordered, 8-qword blocks per command. Names of interest with their slot indexes: QueueSubmit=0xb30, QueueSubmit2=0xb35, QueuePresentKHR=0xb1c.
5. Tables are built at runtime during `CreateDevice`; the static binary has no direct pointer table to functions (verified: no 8-byte pointers to the name strings in initialized memory; only code references — 2 per string — all inside `FUN_18031e0dc`).

## Per-frame path identification status
- String→function static binding NOT directly present (runtime-built). Next: decompile device-construction (`CreateDevice` impl) to capture `{name → fn}` binding, or hook dynamically (Frida) to log resolved fn pointers per command name as ground truth.
- 78-entry repeated C++ vtables around 0x1814fa468.. = descriptor/pipeline class vtables (not command dispatch).
- Largest functions (100k+ bytes): `FUN_180ba7a08`, `FUN_180822548`, `FUN_180a77cb8`, `FUN_1808fb520` — likely state-init/compiler-related; TBI.

## Overhead-relevant findings (evidence-backed)
- Command resolution is **string-based + per-command filtering** (version/ext gating at lookup time) vs NVIDIA's known flat registry dispatch.
- Three-tier sorted-table machinery + 21.5KB metadata initializer = significant framework complexity; consistent with the measured CPU-bound gap (doc 02).
- Note: apps cache proc pointers so per-frame cost is in the *submit/draw implementation*, not the lookup — next phase targets those bodies.

## Ghidra artifacts
- Projects: `%TEMP%\opencode\ghidra_proj3\vk2` (igvk64 analyzed), `%TEMP%\opencode\ghidra_proj\arcdrivers` (igxe2hpgicd64).
- Scripts in `tools/`: DumpArc, DecompileAddr, DecompileBySymbol, XrefStrings, XrefAddr, ProbeNames, MapDispatch, FindFnTable.
