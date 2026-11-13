# Doc 01 — Test Bench Configuration

Date: 2026-11-13

## Hardware Environment
| Component | Specification | Configuration Notes |
|---|---|---|
| **CPU** | Intel Core i5-10600K (6C/12T @ 4.10 GHz Base, up to 4.80 GHz Turbo) | Fixed P-core architecture (no E-cores) |
| **Motherboard** | ASUS Prime Z490-P (LGA1200, Intel Z490 Chipset) | PCIe 3.0 enabled, Resizable BAR enabled |
| **GPU** | Intel Arc B580 12GB (Battlemage / Xe2-HPG) | Driver Version: `32.0.101.9175` (2026-11-04) |
| **System Memory** | 16GB DDR4 (Corsair CMK32GX4M2A2666C16) | Tested at 2133 MT/s JEDEC & 2666 MT/s XMP Profile 1 |
| **Operating System** | Windows 11 Pro 64-bit (OS Build 26100) | Game Mode Enabled, HAGS Enabled |

## Firmware & BIOS Verification
- **Above 4G Decoding:** Enabled
- **Resizable BAR (ReBAR):** Enabled and confirmed functional
- **PCI Express Generation:** Gen3 x16 link operating at Gen3 speeds
- **Vulkan API Version:** Vulkan 1.3 ICD (`igvk64.dll`, version `32.0.101.9175`)
