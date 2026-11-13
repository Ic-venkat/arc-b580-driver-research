import json

rt_base = 0x7ffd60cf0000
img_base = 0x180000000

with open(r"D:\git\arc-driver-research\data\re\dispatch_ground_truth.json") as f:
    data = json.load(f)

conv = {}
for name, fp in data["driver_resolved"].items():
    rva = int(fp, 16) - rt_base
    if 0 <= rva < 0x1bdf000:
        conv[name] = hex(img_base + rva)

with open(r"D:\git\arc-driver-research\data\re\dispatch_ghidra_map.json", "w") as f:
    json.dump(conv, f, indent=1, sort_keys=True)

print("converted:", len(conv))
for k in ["QueueSubmit", "CmdDraw", "CmdDrawIndexed", "CmdBindDescriptorSets", "CmdPipelineBarrier", "CmdBeginRenderPass", "CmdEndRenderPass", "CmdBindPipeline", "CmdSetViewport", "CreateCommandPool"]:
    print(k, "->", conv.get(k))
