#!/usr/bin/env python3
"""retuse.py : for every function in lomse.exe, does any direct caller read EAX/AX/AL (or EDX) right after the call
before overwriting it?  Writes build/retuse.tsv: addr  eax_used_sites  edx_used_sites  total_sites.
Used to catch functions Ghidra typed `void` (or narrow) that really return a value."""
import sys, os, struct, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone import x86_const as X
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
EAXF = {X.X86_REG_EAX, X.X86_REG_AX, X.X86_REG_AL, X.X86_REG_AH}
EDXF = {X.X86_REG_EDX, X.X86_REG_DX, X.X86_REG_DL, X.X86_REG_DH}
F = lomdb.funcs()
pe = lomdb.pe(); base = pe.OPTIONAL_HEADER.ImageBase
text = [s for s in pe.sections if s.Characteristics & 0x20000000][0]
tva = base + text.VirtualAddress; tdata = text.get_data()
def uses_after(addr, regs_family, full, depth=0):
    off = addr - tva
    if off < 0 or off >= len(tdata) or depth > 2: return False
    for k, ins in enumerate(md.disasm(tdata[off:off + 64], addr)):
        if k >= 10: break
        if ins.mnemonic == 'jmp' and ins.operands and ins.operands[0].type == X.X86_OP_IMM:
            # MSVC `p = new T(...)`: call ctor; jmp L; ...; L: test eax, eax  -> follow the jump
            return uses_after(ins.operands[0].imm, regs_family, full, depth + 1)
        rd, wr = ins.regs_access()
        if ins.mnemonic == 'xor' and len(ins.operands) == 2 and ins.op_str.split(',')[0].strip() == ins.op_str.split(',')[1].strip():
            rd = ()
        if any(r in regs_family for r in rd): return True
        if full in wr: return False
        if ins.mnemonic.startswith(('j', 'ret', 'call')): return False
    return False
eax = collections.Counter(); edx = collections.Counter(); tot = collections.Counter()
for a, f in F.items():
    off = a - tva
    if off < 0 or off >= len(tdata): continue
    for ins in md.disasm(tdata[off:off + f.size], a):
        if ins.mnemonic == 'call' and ins.size == 5 and ins.bytes[0] == 0xe8:
            t = (ins.address + 5 + struct.unpack('<i', bytes(ins.bytes[1:5]))[0]) & 0xffffffff
            tot[t] += 1
            nxt = ins.address + 5
            if uses_after(nxt, EAXF, X.X86_REG_EAX): eax[t] += 1
            if uses_after(nxt, EDXF, X.X86_REG_EDX): edx[t] += 1
with open(os.path.join(lomdb.ROOT, 'build', 'retuse.tsv'), 'w') as fo:
    for t in sorted(tot):
        fo.write('%08x\t%d\t%d\t%d\n' % (t, eax[t], edx[t], tot[t]))
print('callees', len(tot), 'eax-used', len(eax), 'edx-used', len(edx))
