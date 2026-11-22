#!/usr/bin/env python3
"""argscan.py: for every function, the highest incoming stack-arg dword the ORIGINAL body reads
(recursive descent with esp/ebp tracking).  Writes build/argscan.tsv: addr  nargs_scanned  nargs_declared.
Purpose: find callees whose Ghidra proto under-declares stack args (00540380 _ctrlfp class:
Ghidra said 'int f(void)', body reads [ebp+8],[ebp+0xc]) -> rebuilt callers push nothing."""
import sys, os, capstone
from capstone import x86
sys.path.insert(0, os.path.dirname(__file__))
import lomdb, difftest
md = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32); md.detail = True
def scan(f):
    lo, hi = f.addr, max(f.maxaddr + 16, f.addr + f.size)
    try: code = lomdb.read_va(lo, hi - lo)
    except Exception: return None
    F = lomdb.funcs(); eaximm = None
    seen = {}; work = [(lo, 0, None)]; mx = -1; bad = False
    while work:
        a, d, ebpd = work.pop()
        while lo <= a < hi and a not in seen:
            seen[a] = d
            ins = next(md.disasm(code[a - lo:a - lo + 16], a), None)
            if ins is None: break
            m = ins.mnemonic; ops = ins.operands
            for o in ops:
                if o.type == x86.X86_OP_MEM and o.mem.index == 0:
                    if o.mem.base == x86.X86_REG_ESP: off = o.mem.disp - d - 4
                    elif o.mem.base == x86.X86_REG_EBP and ebpd is not None: off = o.mem.disp - ebpd - 4
                    else: continue
                    if 0 <= off < 0x40 and m != 'lea': mx = max(mx, off // 4)
            if m == 'call' and ops[0].type == x86.X86_OP_IMM:
                t = ops[0].imm
                if t == 0x539630 and eaximm is not None: d += eaximm   # __chkstk: sub esp, eax
                elif t in F and F[t].cc in ('__stdcall', '__thiscall', '__fastcall') and F[t].purge < 0x10000: d -= F[t].purge
            if m == 'mov' and ops[0].type == x86.X86_OP_REG and ops[0].reg == x86.X86_REG_EAX and ops[1].type == x86.X86_OP_IMM: eaximm = ops[1].imm
            if m == 'push': d += 2 if ins.size == 2 and ops[0].type == x86.X86_OP_REG and ops[0].size == 2 else 4
            elif m == 'pop': d -= 4
            elif m == 'pushal': d += 32
            elif m == 'popal': d -= 32
            elif m in ('sub', 'add') and ops[0].type == x86.X86_OP_REG and ops[0].reg == x86.X86_REG_ESP:
                if ops[1].type == x86.X86_OP_IMM: d += ops[1].imm if m == 'sub' else -ops[1].imm
                else: bad = True; break
            elif m == 'mov' and ops[0].type == x86.X86_OP_REG and ops[0].reg == x86.X86_REG_EBP and ops[1].type == x86.X86_OP_REG and ops[1].reg == x86.X86_REG_ESP: ebpd = d
            elif m == 'mov' and ops[0].type == x86.X86_OP_REG and ops[0].reg == x86.X86_REG_EBP: ebpd = None
            elif m == 'leave': d = (ebpd if ebpd is not None else d) - 4  # pops ebp
            elif m == 'mov' and ops[0].type == x86.X86_OP_REG and ops[0].reg == x86.X86_REG_ESP:
                if ops[1].type == x86.X86_OP_REG and ops[1].reg == x86.X86_REG_EBP and ebpd is not None: d = ebpd
                else: break
            if m in ('ret', 'retf', 'int3', 'hlt') or m == 'jmp' and (ops[0].type != x86.X86_OP_IMM): break
            if m == 'jmp': a = ops[0].imm; continue
            if m.startswith('j') or m.startswith('loop'):
                if ops[0].type == x86.X86_OP_IMM: work.append((ops[0].imm, d, ebpd))
            a = ins.address + ins.size
    return mx + 1, bad

if __name__ == '__main__':
    F = lomdb.funcs(); out = []
    for f in sorted(F.values(), key=lambda f: f.addr):
        r = scan(f)
        if r is None: continue
        try: ret, params = lomdb.parse_proto(f.proto, f.name); lay = difftest.stack_layout(f.cc, params)
        except Exception: lay = None
        decl = lay[0] if lay else -1
        out.append('%08x\t%d\t%d\t%s\t%d\t%s' % (f.addr, r[0], decl, f.cc, f.purge, int(r[1])))
    open(os.path.join(lomdb.ROOT, 'build', 'argscan.tsv'), 'w').write('\n'.join(out) + '\n')
    print(len(out))
