# Doc 03 — Vulkan User-Mode Driver (`igvk64.dll`) Architecture

Date: 2026-11-13. Disassembly & decompiler target: Intel Vulkan UMD (`igvk64.dll`, 27,717,520 bytes, x86_64, PE image base `0x180000000`).

## Binary Topology
- **Function Count:** 38,631 discovered functions.
- **Exported Symbols:** 140 exports (ICD interface facades: `vk_icdNegotiateLoaderICDInterfaceVersion`, `vk_icdGetInstanceProcAddr`, `vkCreateInstance`, `vkGetInstanceProcAddr`, `vkGetDeviceProcAddrINTEL`).
- **Internal Command Dispatch:** Commands are not resolved via flat export tables; the driver embeds 900 internal Vulkan command names (stored without the `vk` prefix) and builds dispatch tables dynamically at runtime.

## Dispatch Mechanism (`vkGetDeviceProcAddr`)
1. **Entrypoint Resolution (`FUN_1802877fc`):**
   Command name resolution is implemented as three sequential binary searches across three name-sorted tables stored within the logical device structure:
   - `[device + 0x00a8, device + 0x0228)`: Core Vulkan 1.0 commands (~16 entries).
   - `[device + 0x0228, device + 0x0a20)`: Extension command entries (~134 entries).
   - `[device + 0x0a20, device + 0x63d0)`: Extended API functions (~382 entries).
2. **Per-Entry Metadata & Validation:**
   Each dispatch entry is 24 bytes (`stride = 0x18`):
   ```c
   struct IntelVkDispatchEntry {
       const char *command_name;   // +0x00: Name string pointer
       void *fn_ptr;               // +0x08: Function implementation pointer
       uint32_t enabled_flag;      // +0x10: Activation state
       uint32_t min_api_version;   // +0x14: Required Vulkan API version
   };
   ```
3. **Command Metadata Initialization (`FUN_18031e0dc`):**
   A dedicated 21,501-byte registration function statically embeds metadata blocks (flags, version gates, string references) for all 900 commands and populates the device table structures upon `vkCreateDevice`.

## Overhead Observations
- Rather than using flat indexed tables (direct array lookup), Intel implements string matching and runtime gate evaluations.
- Although applications typically cache command pointers after initialization, this multi-tier architecture reflects the high structural complexity present throughout the driver codebase.
