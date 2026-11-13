"""
Probe Intel Arc Vulkan dispatch via the Vulkan loader (vulkan-1.dll).
Creates instance+device on the Arc B580, resolves every command name via
vkGetDeviceProcAddr, and records which pointers land inside igvk64.dll.
Output: data/re/dispatch_ground_truth.json (+ unfiltered all-procs map)
"""
import ctypes, json, sys, ctypes.wintypes as wt

# ---------- helpers ----------
psapi = ctypes.WinDLL("kernel32.dll")  # K32* forwarders
kernel32 = ctypes.WinDLL("kernel32.dll")

def module_of_addr(addr):
    hmod = wt.HMODULE()
    if kernel32.GetModuleHandleExW(0x4, ctypes.c_void_p(addr), ctypes.byref(hmod)):  # GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT
        buf = ctypes.create_unicode_buffer(260)
        psapi.K32GetModuleFileNameExW(kernel32.GetCurrentProcess(), hmod, buf, 260)
        return buf.value
    return None

def module_base(name_sub):
    pass

VK_SUCCESS = 0
vk = ctypes.WinDLL("vulkan-1.dll")

VKAPI = ctypes.WINFUNCTYPE

create_instance = vk.vkCreateInstance

class AppInfo(ctypes.Structure):
    _fields_ = [("sType", ctypes.c_int), ("pNext", ctypes.c_void_p),
                ("pApplicationName", ctypes.c_char_p), ("appVersion", ctypes.c_uint),
                ("pEngineName", ctypes.c_char_p), ("engineVersion", ctypes.c_uint),
                ("apiVersion", ctypes.c_uint)]

class CreateInfo(ctypes.Structure):
    _fields_ = [("sType", ctypes.c_int), ("pNext", ctypes.c_void_p), ("flags", ctypes.c_uint),
                ("pApplicationInfo", ctypes.POINTER(AppInfo)),
                ("enabledLayerCount", ctypes.c_uint), ("ppEnabledLayerNames", ctypes.c_void_p),
                ("enabledExtensionCount", ctypes.c_uint), ("ppEnabledExtensionNames", ctypes.c_void_p)]

app = AppInfo(0, None, b"reaprobe", 1, b"reaprobe", 1, (1 << 22) | (1 << 12))  # 1.1
ci = CreateInfo(0, None, 0, ctypes.pointer(app), 0, None, 0, None)
instance = ctypes.c_void_p()
r = create_instance(ctypes.byref(ci), None, ctypes.byref(instance))
print("vkCreateInstance ->", r, hex(instance.value or 0))
if r != VK_SUCCESS:
    sys.exit(1)

gipa = vk.vkGetInstanceProcAddr
gipa.restype = ctypes.c_void_p
gipa.argtypes = [ctypes.c_void_p, ctypes.c_char_p]

enum_pd = VKAPI(ctypes.c_int, ctypes.c_void_p, ctypes.POINTER(ctypes.c_uint), ctypes.POINTER(ctypes.c_void_p))(gipa(instance, b"vkEnumeratePhysicalDevices"))
count = ctypes.c_uint(0)
enum_pd(instance, ctypes.byref(count), None)
pds = (ctypes.c_void_p * count.value)()
enum_pd(instance, ctypes.byref(count), pds)
print("physical devices:", count.value)

class DevQueueCI(ctypes.Structure):
    _fields_ = [("sType", ctypes.c_int), ("pNext", ctypes.c_void_p), ("flags", ctypes.c_uint),
                ("queueFamilyIndex", ctypes.c_uint), ("queueCount", ctypes.c_uint),
                ("pQueuePriorities", ctypes.POINTER(ctypes.c_float))]

class DevCI(ctypes.Structure):
    _fields_ = [("sType", ctypes.c_int), ("pNext", ctypes.c_void_p), ("flags", ctypes.c_uint),
                ("queueCreateInfoCount", ctypes.c_uint), ("pQueueCreateInfos", ctypes.POINTER(DevQueueCI)),
                ("enabledLayerCount", ctypes.c_uint), ("ppEnabledLayerNames", ctypes.c_void_p),
                ("enabledExtensionCount", ctypes.c_uint), ("ppEnabledExtensionNames", ctypes.c_void_p),
                ("pEnabledFeatures", ctypes.c_void_p)]

prio = ctypes.c_float(1.0)
qci = DevQueueCI(0, None, 0, 0, 1, ctypes.pointer(prio))
dci = DevCI(0, None, 0, 1, ctypes.pointer(qci), 0, None, 0, None, None)
device = ctypes.c_void_p()
create_device = VKAPI(ctypes.c_int, ctypes.c_void_p, ctypes.POINTER(DevCI), ctypes.c_void_p, ctypes.POINTER(ctypes.c_void_p))(gipa(instance, b"vkCreateDevice"))
r = create_device(pds[0], ctypes.byref(dci), None, ctypes.byref(device))
print("vkCreateDevice ->", r)
if r != VK_SUCCESS:
    sys.exit(1)

gdpa_raw = gipa(instance.value if hasattr(instance, 'value') else instance, b"vkGetDeviceProcAddr")
print("gipa(vkGetDeviceProcAddr) ->", hex(gdpa_raw or 0))
get_dpa = VKAPI(ctypes.c_void_p, ctypes.c_void_p, ctypes.c_char_p)(gdpa_raw)

# find loaded intel driver modules via Toolhelp snapshot
TH32CS_SNAPMODULE = 0x8
kernel32.CreateToolhelp32Snapshot.restype = ctypes.c_void_p
kernel32.CreateToolhelp32Snapshot.argtypes = [ctypes.c_uint, ctypes.c_uint]

class MODULEENTRY32W(ctypes.Structure):
    _fields_ = [("dwSize", ctypes.c_uint), ("th32ModuleID", ctypes.c_uint), ("th32ProcessID", ctypes.c_uint),
                ("GlblcntUsage", ctypes.c_uint), ("ProccntUsage", ctypes.c_uint), ("modBaseAddr", ctypes.c_void_p),
                ("modBaseSize", ctypes.c_uint), ("hModule", ctypes.c_void_p), ("szModule", ctypes.c_wchar * 256),
                ("szExePath", ctypes.c_wchar * 260)]

snap = kernel32.CreateToolhelp32Snapshot(TH32CS_SNAPMODULE, 0)
names = []
if snap:
    me = MODULEENTRY32W()
    me.dwSize = ctypes.sizeof(me)
    ok = kernel32.Module32FirstW(snap, ctypes.byref(me))
    while ok:
        names.append((me.modBaseAddr, me.modBaseSize, me.szExePath))
        ok = kernel32.Module32NextW(snap, ctypes.byref(me))
    kernel32.CloseHandle(snap)
bases = [(b, s, p) for (b, s, p) in names if "igvk64" in p.lower()]
print("modules total:", len(names))
for b, s, p in bases:
    print("  DRIVER:", hex(b or 0), hex(s), p)

def in_driver(addr):
    return any(b <= addr < b + s for b, s, _ in bases)

names_list = []
with open(r"D:\git\arc-driver-research\data\re\ghidra_dumps\vk_names.txt", encoding="utf-8") as f:
    for line in f:
        n = line.strip()
        if n and not n.startswith("^"):
            names_list.append(n)

resolved_driver = {}
resolved_other = {}
nulls = []
for n in names_list:
    fp = get_dpa(device, ("vk" + n).encode())
    if not fp:
        nulls.append(n)
        continue
    if in_driver(fp):
        resolved_driver[n] = hex(fp)
    else:
        resolved_other[n] = (hex(fp), module_of_addr(fp))

with open(r"D:\git\arc-driver-research\data\re\dispatch_ground_truth.json", "w") as f:
    json.dump({"driver_resolved": resolved_driver, "loader_or_other": resolved_other, "unresolved": nulls}, f, indent=1)
print(f"driver-resolved: {len(resolved_driver)}, other: {len(resolved_other)}, unresolved: {len(nulls)}")
for k, (v, m) in list(resolved_other.items())[:6]:
    print("  OTHER", k, v, m)
# test attribution on a known loader address
print("attribution test loader:", module_of_addr(0x7ffd91fea790))
print("attribution test driver:", module_of_addr(0x7ffd60cf0000 + 0x1000))
for k, v in list(resolved_driver.items())[:12]:
    print(" ", k, v)

