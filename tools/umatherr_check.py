#!/usr/bin/env python3
"""umatherr_check.py DLL SYMS : (2026-11-13) 00540050 (_umatherr) orig vs rebuilt with fake callees: name lookup
00540130 -> 0 or a name, _control87 -> ret, _matherr 004f5c70 -> records the 32-byte struct it gets, rewrites retval
and returns 0/1, 00540100 -> records its arg. Compares the struct, callee args, st0 bits (fstp to memory as raw 10 bytes),
esp and callee-saved regs."""
import sys, struct, random
sys.path.insert(0, 'tools')
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *
dll, syf = sys.argv[1], sys.argv[2]
img = lomdb.pe().get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
rb = {int(a,16):int(b,16) for a,b in (l.split() for l in open(syf))}[0x540050]
uc = Uc(UC_ARCH_X86, UC_MODE_32)
uc.mem_map(0x400000, (len(img)+0xfff)&~0xfff); uc.mem_write(0x400000, img)
uc.mem_map(0x10000000, (len(dimg)+0xfff)&~0xfff); uc.mem_write(0x10000000, dimg)
uc.mem_map(0x0f000000, 0x10000); uc.mem_map(0x30000000, 0x1000)
for a in (0x540130, 0x540380, 0x4f5c70, 0x540100): uc.mem_write(a, b'\xc3')
# landing pad: fstp tbyte [0x30000000]; hlt
uc.mem_write(0x30000100, b'\xdb\x3d\x00\x00\x00\x30\xf4')
st = {}
def hk(uc, addr, size, _):
    esp = uc.reg_read(UC_X86_REG_ESP); a1 = struct.unpack('<I', uc.mem_read(esp + 4, 4))[0]
    if addr == 0x540130: st['log'].append(('name', a1)); uc.reg_write(UC_X86_REG_EAX, st['name'])
    elif addr == 0x540380: st['log'].append(('cw', a1, struct.unpack('<I', uc.mem_read(esp + 8, 4))[0]))
    elif addr == 0x4f5c70:
        st['log'].append(('mat', bytes(uc.mem_read(a1, 32))))
        if st['mod']: uc.mem_write(a1 + 24, st['newret'])
        uc.reg_write(UC_X86_REG_EAX, st['mret'])
    elif addr == 0x540100: st['log'].append(('errno', a1))
for a in (0x540130, 0x540380, 0x4f5c70, 0x540100): uc.hook_add(UC_HOOK_CODE, hk, None, a, a)
r = random.Random(11); bad = 0
def dbl(r): return r.choice([struct.pack('<d', r.uniform(-1e6, 1e6)), bytes(r.getrandbits(8) for _ in range(8)), struct.pack('<Q', 0x7ff0000000000001), struct.pack('<Q', 0x7ff8000000000000)])
for t in range(3000):
    st.update(name=r.choice([0, 0x55a000 + r.randrange(0, 100)]), mod=r.random() < 0.5, newret=dbl(r), mret=r.choice([0, 1]))
    args = struct.pack('<II', r.randrange(0, 8), r.randrange(0, 40)) + dbl(r) + dbl(r) + dbl(r) + struct.pack('<I', r.choice([0x27f, 0x37f, r.getrandbits(16)]))
    res = []
    for f in (0x540050, rb):
        st['log'] = []
        sp = 0x0f008000; uc.mem_write(sp, struct.pack('<I', 0x30000100) + args)
        uc.reg_write(UC_X86_REG_ESP, sp); uc.reg_write(UC_X86_REG_FPCW, 0x27f)
        for rg in (UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP): uc.reg_write(rg, 0x77777777)
        uc.emu_start(f, 0x30000106, count=5000)
        res.append((list(st['log']), bytes(uc.mem_read(0x30000000, 10)), uc.reg_read(UC_X86_REG_ESP), [uc.reg_read(x) for x in (UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP)]))
    if res[0] != res[1]:
        bad += 1
        if bad < 4: print('DIFF', t, res)
print('trials 3000 diff', bad)
