#!/usr/bin/env python3
"""ftolcheck2.py DLL SYMS [N]
Compare orig __ftol @ 0x005394a0 vs rebuilt under many FPU control words and
inputs (24/53/64-bit precision, all 4 RC values, near-.5, negatives, large,
out-of-range, NaN/inf, 80-bit, non-empty x87 stack). Compares edx:eax, FPCW,
FPSW (incl. TOS), ST0..ST7, and callee-saved regs / ESP."""
import sys, os, struct, random, json, math
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, pefile
from unicorn import *
from unicorn.x86_const import *

dll, syms = sys.argv[1], sys.argv[2]
N = int(sys.argv[3]) if len(sys.argv) > 3 else 0  # 0 = full structured suite + some random
addr = 0x005394a0
rb = [int(l.split()[1], 16) for l in open(syms) if int(l.split()[0], 16) == addr][0]
pe = lomdb.pe(); img = pe.get_memory_mapped_image(); dpe = pefile.PE(dll); dimg = dpe.get_memory_mapped_image()
uc = Uc(UC_ARCH_X86, UC_MODE_32)
uc.mem_map(0x400000, (len(img) + 0xfff) & ~0xfff); uc.mem_write(0x400000, img)
b = dpe.OPTIONAL_HEADER.ImageBase
uc.mem_map(b, (len(dimg) + 0xfff) & ~0xfff); uc.mem_write(b, dimg)
uc.mem_map(0x0f000000, 0x10000)
VAL = 0x0f00e100
STUB = 0x0f00e000
RET = 0x0f00f000
uc.mem_write(RET, b'\xf4')

# CW: IM..PM masked (0x3f). PC in bits 8-9 (0=24, 2=53, 3=64). RC in bits 10-11 (0=near,1=down,2=up,3=chop).
PC = {'24': 0x0000, '53': 0x0200, '64': 0x0300}
RC = {'near': 0x0000, 'down': 0x0400, 'up': 0x0800, 'chop': 0x0C00}
CW_GRID = [0x003F | p | r for p in PC.values() for r in RC.values()]
# also the common startup words and a few with unmasked PE / different high bits
CW_EXTRA = [0x027F, 0x037F, 0x007F, 0x137F, 0x077F, 0x0F7F, 0x023F, 0x033F, 0x127F, 0x036F]

def pack_d(x):
    if math.isnan(x):
        return b'\x00\x00\x00\x00\x00\x00\xf8\x7f'
    if math.isinf(x):
        return b'\x00\x00\x00\x00\x00\x00\xf0\xff' if x < 0 else b'\x00\x00\x00\x00\x00\x00\xf0\x7f'
    return struct.pack('<d', x)

# 80-bit encodings: 1/3, pi, and a value with extra bits below the double mantissa
def pack_t(x):
    # store via python float as 80-bit is not native; we also have explicit bytes below
    # sign/exp/mant: use struct after ldexp isn't enough. We'll fld qword for floats
    # and use explicit 10-byte vectors for extra-precision cases.
    return pack_d(x)  # unused

EXPLICIT_TBYTE = [
    # 1/3 in 80-bit (more precision than double): sign=0 exp=0x3ffd mant=0xaaaaaaaaaaaaaaaa
    bytes.fromhex('aaaaaaaaaaaaaaaafd3f'),
    # -1/3
    bytes.fromhex('aaaaaaaaaaaaaaaafdbe'),
    # 2^63-1 as 80-bit (0x3ffe ffffffffffffffff / actually 2^63-1 is just below the overflow)
    # pi 80-bit (Intel 80-bit pi)
    bytes.fromhex('350681a02b244022fd3f') if False else bytes.fromhex('35c2a82b244042fefd3f'),
    # standard 80-bit pi: 00 C0 68 21 A2 DA 0F C9 00 40  -> wait little-endian mantissa then exp
    # Intel: 40 00 C9 0F DA A2 21 68 C0 00  as mem is mant_lo..mant_hi, exp
    bytes.fromhex('2bd7e506892e46c20040'),  # will also include a well-known encoding below
]

# Correct 80-bit pi (IEEE 8087): 0x4000 C90FDAA22168C235
EXPLICIT_TBYTE = [
    bytes.fromhex('35c16821a2da0fc90040'),  # pi
    bytes.fromhex('35c16821a2da0fc900c0'),  # -pi
    bytes.fromhex('aaaaaaaaaaaaaaaafd3f'),  # ~1/3
    bytes.fromhex('aaaaaaaaaaaaaaaafdbf'),  # ~-1/3
    bytes.fromhex('0000000000000080fe3f'),  # 0.5
    bytes.fromhex('00000000000000c0fe3f'),  # 0.75
    bytes.fromhex('00000000000000a0ff3f'),  # 1.25
    bytes.fromhex('fffffffffffffffffe3f'),  # just below 1.0? exp 0x3ffe = 0.5 * (2-2^-63)
    bytes.fromhex('0000000000000080fe40'),  # 2^63? exp 0x40fe = bias 0x3fff + 255? careful
]

FIXED = [
    0.0, -0.0, 1.0, -1.0, 2.0, -2.0,
    0.5, -0.5, 1.5, -1.5, 2.5, -2.5, 3.5, -3.5,
    0.499999999999, 0.5, 0.500000000001,
    1.499999999999, 1.5, 1.500000000001,
    2.499999999999, 2.5, 2.500000000001,
    -0.499999999999, -0.5, -0.500000000001,
    -1.5, -2.5,
    0.9, -0.9, 1.1, -1.1, 1.9, -1.9, 2.9, -2.9,
    0.1, 0.9, 99.999, -99.999,
    123.0, -456.7, math.pi, -math.e,
    2147483647.0, -2147483648.0, 2147483648.5, -2147483649.5,
    4294967295.5, 4294967296.0,
    9223372036854774784.0,  # near 2^63
    -9223372036854774784.0,
    9223372036854775808.0,  # 2^63 (out of signed 64)
    -9223372036854775808.0,
    1e20, -1e20, 1e300, -1e300,
    1e-20, -1e-20, 1e-300,
    math.nan, math.inf, -math.inf,
]

def fpu_state():
    sw = uc.reg_read(UC_X86_REG_FPSW) & 0xffff
    cw = uc.reg_read(UC_X86_REG_FPCW) & 0xffff
    top = (sw >> 11) & 7
    st = []
    for i in range(8):
        try:
            st.append(uc.reg_read(UC_X86_REG_FP0 + i))
        except Exception:
            st.append(None)
    try:
        tag = uc.reg_read(UC_X86_REG_FPTAG) & 0xffff
    except Exception:
        tag = None
    return dict(cw=cw, sw=sw, top=top, st=st, tag=tag)

def run(f, kind, payload, cw, extra_st=0):
    """kind='d' payload=float; kind='t' payload=10 bytes. extra_st = extra values fld'd under ST0."""
    sp = 0x0f008000
    # stub: fninit; optional extra fld; fld value; ret
    code = bytearray(b'\xdb\xe3')  # fninit
    slot = VAL
    for i, ev in enumerate(extra_st):
        ea = slot + 0x20 + i * 8
        uc.mem_write(ea, pack_d(ev))
        code += b'\xdd\x05' + struct.pack('<I', ea)
    if kind == 'd':
        uc.mem_write(slot, pack_d(payload))
        code += b'\xdd\x05' + struct.pack('<I', slot)
    else:
        uc.mem_write(slot, payload)
        code += b'\xdb\x2d' + struct.pack('<I', slot)  # fld tbyte
    code += b'\xc3'
    uc.mem_write(STUB, bytes(code))
    uc.mem_write(sp, struct.pack('<I', RET))
    for rg, v in ((UC_X86_REG_EAX, 0x11111111), (UC_X86_REG_EBX, 0x22222222),
                  (UC_X86_REG_ECX, 0x33333333), (UC_X86_REG_EDX, 0x44444444),
                  (UC_X86_REG_ESI, 0x55555555), (UC_X86_REG_EDI, 0x66666666),
                  (UC_X86_REG_EBP, 0x77777777)):
        uc.reg_write(rg, v)
    uc.reg_write(UC_X86_REG_ESP, sp)
    try:
        uc.emu_start(STUB, RET, count=40)
    except UcError:
        pass
    # now apply the inbound CW the game would have (fninit set 0x37F)
    uc.reg_write(UC_X86_REG_FPCW, cw)
    uc.mem_write(sp, struct.pack('<I', RET))
    uc.reg_write(UC_X86_REG_ESP, sp)
    pre = fpu_state()
    try:
        uc.emu_start(f, RET, count=5000)
    except UcError as e:
        return ('stop', str(e), uc.reg_read(UC_X86_REG_EIP), fpu_state())
    if uc.reg_read(UC_X86_REG_EIP) != RET:
        return ('stop', 'budget', uc.reg_read(UC_X86_REG_EIP), fpu_state())
    eax = uc.reg_read(UC_X86_REG_EAX) & 0xffffffff
    edx = uc.reg_read(UC_X86_REG_EDX) & 0xffffffff
    regs = tuple(uc.reg_read(r) & 0xffffffff for r in
                 (UC_X86_REG_ESP, UC_X86_REG_EBX, UC_X86_REG_ECX,
                  UC_X86_REG_ESI, UC_X86_REG_EDI, UC_X86_REG_EBP))
    post = fpu_state()
    return ('ret', eax, edx, regs, pre, post)

def describe(kind, payload):
    if kind == 'd':
        return 'd %r' % (payload,)
    return 't ' + payload.hex()

def same_fpu(a, b):
    diffs = {}
    if a['cw'] != b['cw']: diffs['cw'] = (hex(a['cw']), hex(b['cw']))
    if a['sw'] != b['sw']: diffs['sw'] = (hex(a['sw']), hex(b['sw']))
    if a['top'] != b['top']: diffs['top'] = (a['top'], b['top'])
    if a['tag'] != b['tag']: diffs['tag'] = (a['tag'], b['tag'])
    for i, (x, y) in enumerate(zip(a['st'], b['st'])):
        # treat two NaNs as equal
        if x != y and not (isinstance(x, float) and isinstance(y, float) and math.isnan(x) and math.isnan(y)):
            diffs['st%d' % i] = (x, y)
    return diffs

cases = []
# structured grid: every fixed value x every CW in CW_GRID + extras (dedup)
cws = sorted(set(CW_GRID + CW_EXTRA))
for cw in cws:
    for x in FIXED:
        cases.append(('d', x, cw, ()))
    for tb in EXPLICIT_TBYTE:
        cases.append(('t', tb, cw, ()))
# a few with extra stack values under ST0
for cw in (0x027F, 0x037F, 0x007F, 0x077F):
    for x in (0.9, 1.5, -2.5, 2147483648.5):
        cases.append(('d', x, cw, (99.0, -7.5, 3.25)))
# random extras
r = random.Random(2)
nrand = N if N > 0 else 400
for i in range(nrand):
    cw = r.choice(cws)
    k = r.randrange(5)
    if k == 0: x = float(r.randint(-10000, 10000)) + r.random()
    elif k == 1: x = r.random() * 4 - 2
    elif k == 2: x = math.ldexp((r.random()*2-1) or 0.1, r.randint(-40, 62))
    elif k == 3: x = r.choice([math.nan, math.inf, -math.inf, 0.0, -0.0, 0.5, -0.5, 1.5])
    else: x = float(r.randint(-10**12, 10**12)) + r.random()
    extra = () if r.random() < 0.7 else (r.random()*10, -r.random()*10)
    cases.append(('d', x, cw, extra))

print('cases', len(cases), 'cws', [hex(c) for c in cws])
bad = 0; nret = 0; nstop = 0
shown = 0
# classify diffs
kinds = {}
for t, (kind, payload, cw, extra) in enumerate(cases):
    a = run(addr, kind, payload, cw, extra)
    c = run(rb, kind, payload, cw, extra)
    if a[0] == 'ret': nret += 1
    else: nstop += 1
    if a[0] != c[0] or (a[0] == 'ret' and (a[1] != c[1] or a[2] != c[2] or a[3] != c[3] or same_fpu(a[5], c[5]))):
        bad += 1
        fd = same_fpu(a[5], c[5]) if a[0] == 'ret' and c[0] == 'ret' else {}
        key = tuple(fd.keys()) if fd else (a[0], c[0], 'eax' if a[0]=='ret' and c[0]=='ret' and (a[1],a[2])!=(c[1],c[2]) else 'stop')
        kinds[key] = kinds.get(key, 0) + 1
        if shown < 20:
            shown += 1
            print('DIFF', t, describe(kind, payload), 'cw', hex(cw), 'extra', extra)
            if a[0] == 'ret' and c[0] == 'ret':
                print('  orig eax:edx', hex(a[1]), hex(a[2]), 'rb', hex(c[1]), hex(c[2]))
                print('  orig post', {k: (hex(a[5][k]) if k in ('cw','sw','tag') and a[5][k] is not None else a[5][k]) for k in ('cw','sw','top','tag')})
                print('  rb   post', {k: (hex(c[5][k]) if k in ('cw','sw','tag') and c[5][k] is not None else c[5][k]) for k in ('cw','sw','top','tag')})
                if fd: print('  fpu diff', fd)
                if a[1]!=c[1] or a[2]!=c[2]:
                    print('  RESULT MISMATCH')
                if a[3]!=c[3]:
                    print('  regs orig', a[3], 'rb', c[3])
            else:
                print('  orig', a[:3], 'rb', c[:3])
verdict = 'PASS' if bad == 0 and nret * 2 >= len(cases) else 'WEAK' if bad == 0 else 'FAIL'
print('005394a0 trials %d ret %d stop %d diff %d %s' % (len(cases), nret, nstop, bad, verdict))
print('diff kinds', kinds)
if os.environ.get('LC_OUT'):
    with open(os.environ['LC_OUT'], 'a') as fo:
        fo.write(json.dumps({'addr': '005394a0', 'verdict': verdict, 'trials': len(cases),
                             'stopped': {'ret': nret, 'stop': nstop}, 'diff': bad,
                             'kinds': {str(k): v for k, v in kinds.items()},
                             'method': 'ftolcheck2'}) + '\n')
if bad:
    sys.exit(1)
