#!/usr/bin/env python3
"""leafcheck.py DLL SYMS ADDR SPEC.py [N] : (2026-11-13) run ORIGINAL ADDR and rebuilt rb_ADDR (a LEAF fn: no calls
out) in Unicorn on inputs built by SPEC.gen(r, t) -> dict(stack=[dwords], ecx=, edx=, mem=[(addr, bytes)]).
Scratch memory 0x20000000..0x20400000 (zero-filled + spec writes). Compares eax (and edx if SPEC.EDX), esp after
ret, ebx/esi/edi/ebp, the whole scratch area and the image's writable sections. A fault/budget in BOTH runs at the
same place counts as 'same-stop'; anything else differing is a DIFF."""
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
SCR = 0x20000000; SCRN = 0x400000
uc.mem_map(SCR, SCRN); uc.mem_map(0x0f000000, 0x10000)
BUDGET = getattr(S, 'BUDGET', 5000000)
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
    except UcError as e: return ('stop', str(e))
    if uc.reg_read(UC_X86_REG_EIP) != ret: return ('stop', 'budget')
    regs = [uc.reg_read(r) for r in (UC_X86_REG_ESP, UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP)]
    eax = uc.reg_read(UC_X86_REG_EAX)
    if getattr(S, 'RETMASK', None) is not None: eax &= S.RETMASK
    if getattr(S, 'VOID', False): eax = 0
    edx = uc.reg_read(UC_X86_REG_EDX) if getattr(S, 'EDX', False) else 0
    mem = bytes(uc.mem_read(SCR, SCRN)) + b''.join(bytes(uc.mem_read(a, n)) for a, n in wsec)
    return ('ret', eax, edx, regs, mem)
r = random.Random(getattr(S, 'SEED', 1)); bad = 0; nret = 0; nstop = 0
for t in range(N):
    inp = S.gen(r, t)
    a, c = run(addr, inp), run(rb, inp)
    if a[0] == 'ret': nret += 1
    else: nstop += 1
    if a != c:
        bad += 1
        if bad < 6:
            why = a[:1] + c[:1] if a[0] != c[0] or a[0] == 'stop' else ('eax %x/%x' % (a[1], c[1]) if a[1] != c[1] else 'edx' if a[2] != c[2] else 'regs %s/%s' % (a[3], c[3]) if a[3] != c[3] else 'mem@%x' % (SCR + next(i for i in range(len(a[4])) if a[4][i] != c[4][i])))
            print('DIFF trial', t, why, a[1] if a[0] == 'stop' else '', c[1] if c[0] == 'stop' else '')
print('%08x trials %d ret %d stop %d diff %d %s' % (addr, N, nret, nstop, bad, 'PASS' if bad == 0 and nret * 2 >= N else 'WEAK' if bad == 0 else 'FAIL'))
if os.environ.get('LC_OUT'):
    import json
    with open(os.environ['LC_OUT'], 'a') as fo:
        fo.write(json.dumps({'addr': '%08x' % addr, 'verdict': 'PASS' if bad == 0 and nret * 2 >= N else 'WEAK' if bad == 0 else 'FAIL',
                             'stopped': {'ret': nret, 'stop': nstop}, 'diff': bad, 'tool': 'leafcheck', 'spec': spec}) + '\n')
