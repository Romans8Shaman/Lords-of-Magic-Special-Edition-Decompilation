#!/usr/bin/env python3
"""gen_asmfn_thunk.py ADDR... : asm fallback for 'mov ecx, imm32; jmp X' entry thunks whose X is an orphan chunk (not a
function start; op_resetcombat / op_lomlighttables class, see gen.chunk_ranges). The chunk X .. next fn start (minus
trailing nop/int3 padding) is emitted by gen_asmfn.gen() as if it were a function at X, verified with check_asmfn.check()
against the original chunk bytes, then renamed to rb_ADDR with a leading 'movl $imm32, %ecx' (the jmp becomes the
fall-through). Writes src/asmfn/ADDR.c; prints ADDR OK|REJECT|FAIL."""
import sys, os, re, struct, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, gen_asmfn, check_asmfn
R = lomdb.ROOT
class FF:
    def __init__(s, addr, maxaddr, name): s.addr = addr; s.maxaddr = maxaddr; s.size = maxaddr - addr + 1; s.name = name
def one(a, F):
    f = F[a]; b = lomdb.read_va(a, 10)
    if f.maxaddr - a + 1 != 10 or b[0] != 0xb9 or b[5] != 0xe9: return 'REJECT notThunk'
    imm = struct.unpack('<I', b[1:5])[0]; x = (a + 10 + struct.unpack('<i', b[6:10])[0]) & 0xffffffff
    if x in F: return 'REJECT targetIsFunction'
    nxt = min(v for v in F if v > x); e = nxt - 1
    while lomdb.read_va(e, 1) in (b'\x90', b'\xcc'): e -= 1
    fx = FF(x, e, 'chunk_%08x' % x)
    F2 = dict(F); F2[x] = fx
    r = gen_asmfn.gen(x, fx, F2)
    if r != 'OK': return r
    src = os.path.join(R, 'src', 'asmfn', '%08x.c' % x)
    obj = os.path.join(R, 'build', 'obj', 'asmfn', '%08x.o' % x)
    import cc
    subprocess.run([cc.CC] + cc.CFLAGS + ['-c', src, '-o', obj], check=True)
    v, why = check_asmfn.check(x, fx)
    t = open(src).read(); os.remove(src); os.remove(obj)
    if v != 'PASS': return 'FAIL chunk %s' % why
    t = t.replace('rb_%08x' % x, 'rb_%08x' % a).replace('LOM_SELF_%08x' % x, 'LOM_SELF_%08x' % a)
    t = t.replace('_lom_af_%08x_' % x, '_lom_af_%08x_' % a).replace('.Lx%08x_' % x, '.Lx%08x_' % a)
    t = t.replace('  __asm__(\n', '  __asm__(\n    "  movl $0x%x, %%ecx\\n"\n' % imm, 1)
    t = t.replace('ASM FALLBACK', 'ASM FALLBACK of entry thunk mov ecx,0x%x; jmp chunk 0x%08x (chunk verified asm-eq)' % (imm, x), 1)
    open(os.path.join(R, 'src', 'asmfn', '%08x.c' % a), 'w').write(t)
    return 'OK chunk %08x..%08x ecx=0x%x' % (x, e, imm)
if __name__ == '__main__':
    F = lomdb.funcs()
    for s in sys.argv[1:]: print(s, one(int(s, 16), F))
