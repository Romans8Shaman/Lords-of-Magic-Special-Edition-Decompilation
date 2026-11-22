#!/usr/bin/env python3
"""ftolcheck.py DLL SYMS ADDR [N]: preload ST0 with known doubles, call orig vs rebuilt
__ftol (005394a0), compare edx:eax, fpcw, fpu_top, callee-saved regs, esp."""
import sys, os, struct, random, json, math
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *
dll, syms, addr = sys.argv[1], sys.argv[2], int(sys.argv[3], 16)
N = int(sys.argv[4]) if len(sys.argv) > 4 else 3000
rb = [int(l.split()[1], 16) for l in open(syms) if int(l.split()[0], 16) == addr][0]
pe = lomdb.pe(); img = pe.get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
uc = Uc(UC_ARCH_X86, UC_MODE_32)
uc.mem_map(0x400000, (len(img) + 0xfff) & ~0xfff); uc.mem_write(0x400000, img)
b = dpe.OPTIONAL_HEADER.ImageBase; uc.mem_map(b, (len(dimg) + 0xfff) & ~0xfff); uc.mem_write(b, dimg)
uc.mem_map(0x0f000000, 0x10000)
VAL = 0x0f00e100
STUB = 0x0f00e000
RET = 0x0f00f000
# fld qword [VAL]; ret
uc.mem_write(STUB, b'\xdd\x05' + struct.pack('<I', VAL) + b'\xc3')
uc.mem_write(RET, b'\xf4')
FIXED = [0.0, 1.0, -1.0, 2.0, -2.0, 0.5, -0.5, 0.9, -0.9, 2.9, -2.9,
         3.5, -3.5, 123.0, -456.7, 1.9, -1.9, 2147483647.0, -2147483648.0,
         2147483648.5, 9999999999.25, -9999999999.75, math.pi, -math.e]
def val_at(t, r):
    if t < len(FIXED): return FIXED[t]
    k = r.randrange(6)
    if k == 0: return float(r.randint(-10000, 10000))
    if k == 1: return r.random() * 2000 - 1000
    if k == 2: return r.random() * 2 - 1
    if k == 3: return float(r.randint(-10**12, 10**12)) + r.random()
    if k == 4: return math.ldexp((r.random()*2-1) or 0.1, r.randint(-20, 40))
    return r.choice([math.nan, math.inf, -math.inf, 0.0, -0.0])
def fpu():
    top = (uc.reg_read(UC_X86_REG_FPSW) >> 11) & 7
    try: st0 = uc.reg_read(UC_X86_REG_FP0 + top)
    except: st0 = None
    return top, uc.reg_read(UC_X86_REG_FPCW), st0
def run(f, x):
    sp = 0x0f008000
    uc.mem_write(sp, struct.pack('<I', RET))
    uc.mem_write(VAL, struct.pack('<d', x) if math.isfinite(x) else
                 (b'\x00\x00\x00\x00\x00\x00\xf8\x7f' if math.isnan(x) else
                  (b'\x00\x00\x00\x00\x00\x00\xf0\xff' if x < 0 else b'\x00\x00\x00\x00\x00\x00\xf0\x7f')))
    for rg, v in ((UC_X86_REG_EAX, 0x11111111), (UC_X86_REG_EBX, 0x22222222),
                  (UC_X86_REG_ECX, 0x33333333), (UC_X86_REG_EDX, 0x44444444),
                  (UC_X86_REG_ESI, 0x55555555), (UC_X86_REG_EDI, 0x66666666),
                  (UC_X86_REG_EBP, 0x77777777), (UC_X86_REG_FPCW, 0x27f)):
        uc.reg_write(rg, v)
    uc.reg_write(UC_X86_REG_ESP, sp)
    # fninit then fld
    try:
        uc.emu_start(0x54c000 if False else STUB, RET, count=20)
    except UcError:
        pass
    # if stub returned to RET after fld, reset ESP/RET and call f
    uc.mem_write(sp, struct.pack('<I', RET))
    uc.reg_write(UC_X86_REG_ESP, sp)
    uc.reg_write(UC_X86_REG_FPCW, 0x27f)
    try:
        uc.emu_start(f, RET, count=5000)
    except UcError as e:
        return ('stop', str(e), uc.reg_read(UC_X86_REG_EIP))
    if uc.reg_read(UC_X86_REG_EIP) != RET:
        return ('stop', 'budget', uc.reg_read(UC_X86_REG_EIP))
    eax = uc.reg_read(UC_X86_REG_EAX) & 0xffffffff
    edx = uc.reg_read(UC_X86_REG_EDX) & 0xffffffff
    regs = [uc.reg_read(r) for r in (UC_X86_REG_ESP, UC_X86_REG_EBX, UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP)]
    return ('ret', eax, edx, fpu(), regs)
r = random.Random(1); bad = 0; nret = 0; nstop = 0
for t in range(N):
    x = val_at(t, r)
    a, c = run(addr, x), run(rb, x)
    if a[0] == 'ret': nret += 1
    else: nstop += 1
    if a != c:
        bad += 1
        if bad <= 12:
            print('DIFF trial', t, 'x=', x, 'orig', a, 'rb', c)
verdict = 'PASS' if bad == 0 and nret * 2 >= N else 'WEAK' if bad == 0 else 'FAIL'
print('%08x trials %d ret %d stop %d diff %d %s' % (addr, N, nret, nstop, bad, verdict))
if os.environ.get('LC_OUT'):
    with open(os.environ['LC_OUT'], 'a') as fo:
        fo.write(json.dumps({'addr': '%08x' % addr, 'verdict': verdict,
                             'stopped': {'ret': nret, 'stop': nstop}, 'diff': bad, 'method': 'ftolcheck'}) + '\n')
