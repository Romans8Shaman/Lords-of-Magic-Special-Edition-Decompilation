import sys, struct, random
sys.path.insert(0, 'tools')
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *
dll = sys.argv[1]; syf = sys.argv[2]
img = lomdb.pe().get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
syms = {int(a,16):int(b,16) for a,b in (l.split() for l in open(syf))}
uc = Uc(UC_ARCH_X86, UC_MODE_32)
uc.mem_map(0x400000, (len(img)+0xfff)&~0xfff); uc.mem_write(0x400000, img)
uc.mem_map(0x10000000, (len(dimg)+0xfff)&~0xfff); uc.mem_write(0x10000000, dimg)
uc.mem_map(0x20000000, 0x10000); uc.mem_map(0x0f000000, 0x10000)
uc.mem_write(0x53f680, b'\xc3')  # callee -> plain ret (we patch eax/out in the hook)
uc.mem_write(0x541d40, b'\xc3')
st = {}
def hk(uc, addr, size, _):
    esp = uc.reg_read(UC_X86_REG_ESP)
    if addr == 0x53f680:
        a = struct.unpack('<9I', uc.mem_read(esp, 36)); uc.mem_write(a[5], st['out']); uc.reg_write(UC_X86_REG_EAX, st['t'])
    elif addr == 0x541d40: uc.reg_write(UC_X86_REG_EAX, st['is'])
uc.hook_add(UC_HOOK_CODE, hk, None, 0x53f680, 0x53f680); uc.hook_add(UC_HOOK_CODE, hk, None, 0x541d40, 0x541d40)
r = random.Random(5); bad = 0
for t in range(3000):
    tab = bytes(r.getrandbits(8) for _ in range(0x400)); c = r.choice([r.randrange(0, 0x100), r.randrange(0, 0x10000), r.getrandbits(32)])
    st.update(out=bytes(r.getrandbits(8) for _ in range(4)), t=r.choice([0, 1, 2]), **{'is': r.choice([0, 0, 1, 4])})
    lc = r.choice([0, 1]); mb = r.choice([1, 2])
    res = []
    for f in (0x543b00, 0x546f40):
      for g in (f, syms[f]):
        uc.mem_write(0x20000000, tab); uc.mem_write(0x5d5310, struct.pack('<I', lc)); uc.mem_write(0x575094, struct.pack('<I', mb)); uc.mem_write(0x574e88, struct.pack('<I', 0x20000200))
        sp = 0x0f008000; uc.mem_write(sp, struct.pack('<II', 0x0f00f000, c)); uc.mem_write(0x0f00f000, b'\xf4'); uc.reg_write(UC_X86_REG_ESP, sp)
        for rg in (UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP): uc.reg_write(rg, 0x77777777)
        try: uc.emu_start(g, 0x0f00f000, count=10000)
        except UcError as e: res.append(('err', str(e))); continue
        res.append((uc.reg_read(UC_X86_REG_EIP), uc.reg_read(UC_X86_REG_EAX), uc.reg_read(UC_X86_REG_ESP), uc.reg_read(UC_X86_REG_EBX), uc.reg_read(UC_X86_REG_ESI), uc.reg_read(UC_X86_REG_EDI), uc.reg_read(UC_X86_REG_EBP)))
    if res[0] != res[1] or res[2] != res[3]:
        bad += 1
        if bad < 4: print('DIFF c=%x' % c, st, lc, mb, res)
print('trials 3000 diff', bad)
