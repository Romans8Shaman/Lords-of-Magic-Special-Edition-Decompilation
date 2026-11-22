#!/usr/bin/env python3
"""memmove_check.py DLL SYMS ADDR [N] : (2026-11-12) run original ADDR and rebuilt rb_ADDR (cdecl dst,src,n -> dst, no
callees) in Unicorn on OVERLAPPING and disjoint buffers (all alignments 0-7, offsets -40..40, n 0..300); compare the
whole buffer + return value. difftest's random pointers never overlap, so its PASS does not cover memmove overlap."""
import sys, os, random, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *
dll, syms, addr = sys.argv[1], sys.argv[2], int(sys.argv[3], 16); N = int(sys.argv[4]) if len(sys.argv) > 4 else 4000
rb = [int(l.split()[1], 16) for l in open(syms) if int(l.split()[0], 16) == addr][0]
img = lomdb.pe().get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
def mk():
    uc = Uc(UC_ARCH_X86, UC_MODE_32)
    uc.mem_map(0x400000, (len(img) + 0xfff) & ~0xfff); uc.mem_write(0x400000, img)
    b = dpe.OPTIONAL_HEADER.ImageBase; uc.mem_map(b, (len(dimg) + 0xfff) & ~0xfff); uc.mem_write(b, dimg)
    uc.mem_map(0x20000000, 0x10000); uc.mem_map(0x0f000000, 0x10000); return uc
uc = mk(); r = random.Random(1); bad = 0
BUF = 0x20002800
for t in range(N):
    n = r.choice([r.randrange(0, 16), r.randrange(0, 300)]); so = r.randrange(0, 8); do = so + r.randrange(-40, 41) if t % 4 else so + r.randrange(-2000, 2001)
    init = bytes(r.getrandbits(8) for _ in range(0x3000))
    res = []
    for f in (addr, rb):
        uc.mem_write(0x20000000 + 0x1000, init)
        sp = 0x0f008000; ret = 0x0f00f000
        uc.mem_write(sp, struct.pack('<4I', ret, BUF + do, BUF + so, n))
        uc.reg_write(UC_X86_REG_ESP, sp)
        for rg in (UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP): uc.reg_write(rg, 0x55555555)
        uc.mem_write(ret, b'\xf4')
        try: uc.emu_start(f, ret, count=200000)
        except UcError as e: res.append(('err', str(e))); continue
        res.append((uc.reg_read(UC_X86_REG_EAX), bytes(uc.mem_read(0x20001000, 0x3000)), uc.reg_read(UC_X86_REG_ESP), uc.reg_read(UC_X86_REG_EBX), uc.reg_read(UC_X86_REG_ESI), uc.reg_read(UC_X86_REG_EDI), uc.reg_read(UC_X86_REG_EBP)))
    if res[0] != res[1]:
        bad += 1
        if bad < 5: print('DIFF trial', t, 'n', n, 'src', hex(BUF + so), 'dst', hex(BUF + do))
print('trials', N, 'diff', bad, 'PASS' if bad == 0 else 'FAIL')
