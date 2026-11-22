#!/usr/bin/env python3
"""thunkcheck.py DLL SYMS ADDR SPEC.py [N] : (2026-11-13) test a tiny tail-jmp / vcall thunk.
SPEC.gen(r,t) -> dict(stack=, ecx=, edx=, mem=[(addr,bytes)], icall=TARGET).
Maps TARGET as `mov eax, ecx; ret` (returns the this-pointer that the tail-jmp left in ECX).
Compares eax, esp after ret, ebx/esi/edi/ebp, and scratch + writable image bytes.
A fault/budget at the same place in BOTH runs is 'same-stop'; anything else differing is a DIFF.
Use this when the original `jmp [vtable+slot]` has no CALL site for difftest.try_icall."""
import sys, os, random, struct, importlib.util
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *
dll, syms, addr, spec = sys.argv[1], sys.argv[2], int(sys.argv[3], 16), sys.argv[4]
N = int(sys.argv[5]) if len(sys.argv) > 5 else 3000
s = importlib.util.spec_from_file_location('spec', spec); S = importlib.util.module_from_spec(s); s.loader.exec_module(S)
rb = [int(l.split()[1], 16) for l in open(syms) if int(l.split()[0], 16) == addr][0]
pe = lomdb.pe(); img = pe.get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
wsec = [(0x400000 + x.VirtualAddress, max(x.Misc_VirtualSize, x.SizeOfRawData)) for x in pe.sections if x.Characteristics & 0x80000000]
uc = Uc(UC_ARCH_X86, UC_MODE_32)
uc.mem_map(0x400000, (len(img) + 0xfff) & ~0xfff); uc.mem_write(0x400000, img)
b = dpe.OPTIONAL_HEADER.ImageBase; uc.mem_map(b, (len(dimg) + 0xfff) & ~0xfff); uc.mem_write(b, dimg)
SCR = 0x20000000; SCRN = getattr(S, 'SCRN', 0x400000)
uc.mem_map(SCR, SCRN); uc.mem_map(0x0f000000, 0x10000)
# stub page: default 0x0b000000. Place `mov eax, ecx; ret` at every 4-byte slot
# so jmp/call to 0x0B00001C / 3C / 4C / 58 (etc.) returns the this-pointer in eax.
STUB = 0x0b000000
uc.mem_map(STUB, 0x10000, UC_PROT_READ | UC_PROT_EXEC)
stub = b'\x8b\xc1\xc3\xcc'  # mov eax,ecx; ret; int3  (4 bytes, aligned)
uc.mem_write(STUB, stub * (0x10000 // 4))
BUDGET = getattr(S, 'BUDGET', 50000)
def run(f, inp):
    uc.mem_write(SCR, b'\0' * SCRN)
    for a, n in wsec: uc.mem_write(a, img[a - 0x400000:a - 0x400000 + n])
    for a, d in inp.get('mem', []): uc.mem_write(a, d)
    sp = 0x0f008000; ret = 0x0f00f000
    st = inp.get('stack', [])
    uc.mem_write(sp, struct.pack('<%dI' % (1 + len(st)), ret, *st))
    uc.mem_write(ret, b'\xf4')
    for rg in (UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP): uc.reg_write(rg, 0x55555555)
    uc.reg_write(UC_X86_REG_ECX, inp.get('ecx', 0x55555555)); uc.reg_write(UC_X86_REG_EDX, inp.get('edx', 0x55555555))
    uc.reg_write(UC_X86_REG_ESP, sp)
    try: uc.emu_start(f, ret, count=BUDGET)
    except UcError as e: return ('stop', str(e), uc.reg_read(UC_X86_REG_EIP), uc.reg_read(UC_X86_REG_ECX), uc.reg_read(UC_X86_REG_EAX), uc.reg_read(UC_X86_REG_ESP))
    if uc.reg_read(UC_X86_REG_EIP) != ret: return ('stop', 'budget', uc.reg_read(UC_X86_REG_EIP), uc.reg_read(UC_X86_REG_ECX), uc.reg_read(UC_X86_REG_EAX), uc.reg_read(UC_X86_REG_ESP))
    regs = [uc.reg_read(r) for r in (UC_X86_REG_ESP, UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP)]
    eax = uc.reg_read(UC_X86_REG_EAX)
    mem = bytes(uc.mem_read(SCR, min(SCRN, 0x400000))) + b''.join(bytes(uc.mem_read(a, n)) for a, n in wsec)
    return ('ret', eax, 0, regs, mem)
r = random.Random(getattr(S, 'SEED', 1)); bad = 0; nret = 0; nstop = 0
for t in range(N):
    inp = S.gen(r, t)
    a, c = run(addr, inp), run(rb, inp)
    if a[0] == 'ret': nret += 1
    else: nstop += 1
    if a != c:
        bad += 1
        if bad < 8:
            print('DIFF trial', t, a[:4], c[:4])
print('%08x trials %d ret %d stop %d diff %d %s' % (addr, N, nret, nstop, bad, 'PASS' if bad == 0 and nret * 2 >= N else 'WEAK' if bad == 0 else 'FAIL'))
if os.environ.get('LC_OUT'):
    import json
    with open(os.environ['LC_OUT'], 'a') as fo:
        fo.write(json.dumps({'addr': '%08x' % addr, 'verdict': 'PASS' if bad == 0 and nret * 2 >= N else 'WEAK' if bad == 0 else 'FAIL',
                             'stopped': {'ret': nret, 'stop': nstop}, 'diff': bad, 'method': 'thunkcheck'}) + '\n')
