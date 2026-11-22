#!/usr/bin/env python3
"""icalls.py : classify every INDIRECT call site in original lomse.exe (call [reg+off] / call reg / call [mem], not IAT).
v2: value-identity tracking. A site is a C++ virtual (__thiscall) call when the vtable register R in
`call [R+off]` was loaded from [X] (offset 0) and ECX holds the same value as X at the call
(MSVC: mov eax,[ecx]; call [eax+N]  /  mov edx,[G]; mov ecx,G; call [edx+N]).
Linear forward walk per function; register values reset at jump targets and after calls (eax/ecx/edx).
caller_cleanup = N of `add esp,N` right after the call (0 = callee pops / no args).
Writes build/icalls.tsv: func site this_call caller_cleanup 0 text"""
import sys, os, collections, itertools
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone import x86_const as X
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
F = lomdb.funcs(); pe = lomdb.pe(); img = pe.get_memory_mapped_image()
iat_lo, iat_hi = 0x54d000, 0x54e000
R32 = {X.X86_REG_EAX: 'eax', X.X86_REG_EBX: 'ebx', X.X86_REG_ECX: 'ecx', X.X86_REG_EDX: 'edx',
       X.X86_REG_ESI: 'esi', X.X86_REG_EDI: 'edi', X.X86_REG_EBP: 'ebp'}
SUB = {X.X86_REG_AX: 'eax', X.X86_REG_AL: 'eax', X.X86_REG_AH: 'eax', X.X86_REG_CX: 'ecx', X.X86_REG_CL: 'ecx', X.X86_REG_CH: 'ecx',
       X.X86_REG_DX: 'edx', X.X86_REG_DL: 'edx', X.X86_REG_DH: 'edx', X.X86_REG_BX: 'ebx', X.X86_REG_BL: 'ebx', X.X86_REG_BH: 'ebx',
       X.X86_REG_SI: 'esi', X.X86_REG_DI: 'edi', X.X86_REG_BP: 'ebp'}
uid = itertools.count(1)
def fresh(): return ('v', next(uid))
def addr(base, disp):
    if disp == 0: return base
    if base[0] == 'a': return addr(base[1], base[2] + disp)
    return ('a', base, disp)
out = []; cnt = collections.Counter()
for fa in sorted(F):
    f = F[fa]
    if f.size <= 0: continue
    import gen as _gen   # v5: also the orphan chunk of 'mov ecx,imm; jmp chunk' thunk fns (op_resetcombat class)
    ins = [i for lo, hi in _gen.chunk_ranges(f) for i in md.disasm(img[lo - 0x400000: hi + 1 - 0x400000], lo)]
    targets = set()
    for i in ins:
        if i.mnemonic.startswith('j') and i.operands and i.operands[0].type == X.X86_OP_IMM: targets.add(i.operands[0].imm & 0xffffffff)
    val = {r: ('entry', r) for r in R32.values()}; load = {}
    for k, i in enumerate(ins):
        if i.address in targets and k:
            val = {r: fresh() for r in R32.values()}; load = {}
        m = i.mnemonic; ops = i.operands
        if m == 'call':
            op = ops[0]
            ind = op.type != X.X86_OP_IMM and not (op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.index == 0 and iat_lo <= (op.mem.disp & 0xffffffff) < iat_hi)
            if ind:
                this = 0
                if op.type == X.X86_OP_MEM and op.mem.base in R32 and op.mem.index == 0:
                    vt = val[R32[op.mem.base]]
                    if vt in load and load[vt] == val['ecx']: this = 1
                    # v3: member-function-pointer call `mov ecx,esi; call [esi+0x220]` (ECX = the object holding the pointer)
                    elif vt == val['ecx'] and op.mem.base != X.X86_REG_ECX: this = 2  # not COM `mov ecx,[obj]; call [ecx+N]`
                # v6: global member-fn-pointer call `mov ecx,0x5876d0; call [0x5878f0]` (0047af50): ECX = constant object
                if this == 0 and op.type == X.X86_OP_MEM and op.mem.base == 0 and op.mem.index == 0 and val['ecx'][0] == 'c' and 0x54d000 <= val['ecx'][1] < 0x800000: this = 3
                nxt = ins[k + 1] if k + 1 < len(ins) else None
                cl = 0
                # v4: MSVC may schedule esp-neutral instrs (mov esi,eax; test; lea ...) between the call and `add esp,N`
                for j in range(k + 1, min(k + 6, len(ins))):
                    nx = ins[j]
                    if j > k + 1 and nx.address in targets: break
                    if nx.mnemonic == 'add' and nx.op_str.replace(' ', '').startswith('esp,'):
                        try: cl = int(nx.op_str.split(',')[1], 0)
                        except ValueError: cl = 0
                        break
                    if nx.mnemonic.startswith(('j', 'call', 'ret', 'push', 'pop', 'leave', 'enter', 'int', 'sub', 'xchg', 'loop')) or 'esp' in nx.op_str or 'sp' == nx.op_str.split(',')[0].strip(): break
                cnt[(this, 'callerpop' if cl else 'calleepop')] += 1
                out.append('%08x\t%08x\t%d\t%d\t%x\t%s %s' % (fa, i.address, this, cl, val['ecx'][1] if this == 3 else 0, m, i.op_str))
            for r in ('eax', 'ecx', 'edx'): val[r] = fresh()
            continue
        try: rd, wr = i.regs_access()
        except Exception: rd, wr = (), ()
        if m == 'mov' and len(ops) == 2 and ops[0].type == X.X86_OP_REG and ops[0].reg in R32:
            dst = R32[ops[0].reg]; s = ops[1]
            if s.type == X.X86_OP_REG and s.reg in R32: val[dst] = val[R32[s.reg]]; continue
            if s.type == X.X86_OP_IMM: val[dst] = ('c', s.imm & 0xffffffff); continue
            if s.type == X.X86_OP_MEM and s.mem.index == 0 and s.mem.base in R32:
                v = fresh(); load[v] = addr(val[R32[s.mem.base]], s.mem.disp); val[dst] = v; continue
            if s.type == X.X86_OP_MEM and s.mem.index == 0 and s.mem.base == 0:
                v = fresh(); load[v] = ('c', s.mem.disp & 0xffffffff); val[dst] = v; continue
        if m == 'lea' and len(ops) == 2 and ops[0].reg in R32 and ops[1].mem.base == 0 and ops[1].mem.index == 0:
            val[R32[ops[0].reg]] = ('c', ops[1].mem.disp & 0xffffffff); continue
        if m == 'lea' and len(ops) == 2 and ops[0].reg in R32 and ops[1].mem.base in R32 and ops[1].mem.index == 0:
            val[R32[ops[0].reg]] = addr(val[R32[ops[1].mem.base]], ops[1].mem.disp); continue
        for w in wr:
            r = R32.get(w) or SUB.get(w)
            if r: val[r] = fresh()
open(os.path.join(lomdb.ROOT, 'build', 'icalls.tsv'), 'w').write('\n'.join(out) + '\n')
print(len(out), dict(cnt))
