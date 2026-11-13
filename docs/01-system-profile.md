# Doc 01 — System Profile & Configuration Findings

Date: 2026-11-13

## Hardware detected
| Component | Detail | Note |
|---|---|---|
| CPU | Intel i5-10600K, 6C/12T @ 4.10 GHz | Weak pairing for Arc in CPU-bound games |
| Motherboard | ASUS Prime Z490-P (LGA1200, DDR4) | PCIe Gen3 x8 max for GPU slot |
| GPU | Intel Arc B580 12GB, driver 32.0.101.9175 (2026-11-04) | Recent driver; device OK |
| RAM | 1x Corsair CMK32GX4M2A2666C16 16GB | **Single channel!** |
| OS | Windows (build 26100) | |

## Configuration problems found (in order of impact)
1. **Single-channel RAM @ 2133 MT/s** (XMP disabled). Arc is bandwidth-sensitive; this alone explains a large chunk of the underperformance. Fixed 2026-11-13: XMP Profile 1 enabled -> 2666 MT/s (+25% bandwidth). Second stick still pending.
2. **Resizable BAR** — verified user enabled Above 4G Decoding + ReBAR in BIOS (2026-11-13). Was previously unverifiable from Windows (GPU-Z dump requires elevation; DSA rebar.json only contains generic compatibility tables, not live state).
3. PCIe Gen3 x8 — accepted limitation of Z490; measured GPU work is only ~3.5 ms/frame, so link bandwidth is not the limiter.

## CPU upgrade analysis (LGA1200 end of life)
- Best value used: i9-10850K/10900K (10C). Skip 11900K (8C, hotter, ~equal gaming).
- Real upgrade path: platform swap (12400F+DDR4 budget, or DDR5 platform — preferred for Arc due to bandwidth).
