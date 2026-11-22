#!/usr/bin/env python3
"""gen_asmfn.py ADDR... : fallback for functions with no behaviour-verified C yet: src/asmfn/<addr>.c = naked function
with the ORIGINAL instruction sequence (GNU asm, AT&T via capstone). Internal branches -> local labels; external
direct jmp/call -> through an absolute .data slot (call *slot: clobbers nothing); external jcc -> jcc to a local
'jmp *slot' stub; dword switch tables (jmp [r*4+T], T outside the body) -> copied as .long <local label>.
Absolute data references stay absolute (lomse.exe is at its fixed base in-process).
Verified by tools/check_asmfn.py. Prints ADDR OK|REJECT reason."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OPT_SYNTAX_ATT
R = lomdb.ROOT
mi = Cs(CS_ARCH_X86, CS_MODE_32)                       # intel, for analysis
ma = Cs(CS_ARCH_X86, CS_MODE_32); ma.syntax = CS_OPT_SYNTAX_ATT
TEXT_LO, TEXT_HI = 0x401000, 0x54c600
def gen(a, f, F):
    n = f.maxaddr - a + 1
    if n != f.size:
        # v2: extent [a, maxaddr] has gap bytes (padding / unreached code) but no other function starts inside:
        # emit the whole extent (switch tables in the body are still rejected below as tableInBody / selfRef)
        if any(a < x <= f.maxaddr for x in F) or n > 4 * f.size: return 'REJECT noncontiguous'
    code = lomdb.read_va(a, n)
    ii = list(mi.disasm(code, a)); ia = list(ma.disasm(code, a))
    if sum(i.size for i in ii) != n or len(ii) != len(ia): return 'REJECT disasmSize'
    starts = {i.address for i in ii}; inbody = lambda v: a <= v <= f.maxaddr
    labels = set(); slots = []; stubs = []; tables = {}
    nxt = min([x for x in F if x > a] or [a + n + 0x10000])
    for i in ii:
        m = re.search(r'\[(\w+)\*4 \+ (0x[0-9a-f]+)\]', i.op_str)
        if m and i.mnemonic == 'jmp':
            T = int(m.group(2), 16)
            if inbody(T): return 'REJECT tableInBody'
            ent = []
            nxtT = min([x for x in F if x > T] or [T + 0x1000])   # v3: table may sit after the next fn (004d4b10)
            while T + 4 * len(ent) < nxtT:
                v = int.from_bytes(lomdb.read_va(T + 4 * len(ent), 4), 'little')
                if not inbody(v): break
                if v not in starts: return 'REJECT tableTarget'
                ent.append(v)
            if not ent: return 'REJECT emptyTable'
            tables[T] = ent; labels.update(ent)
    lines = []
    for i, t in zip(ii, ia):
        lines.append(('.L%08x:' % i.address))
        mn, op = t.mnemonic, t.op_str
        isbr = i.mnemonic in ('jmp', 'call') or i.mnemonic.startswith('j') or i.mnemonic.startswith('loop') or i.mnemonic == 'jecxz'
        if isbr and re.fullmatch(r'0x[0-9a-f]+', i.op_str):
            tg = int(i.op_str, 16)
            if inbody(tg) and not (i.mnemonic == 'call' and tg == a):   # self-recursion goes through the hook
                if tg not in starts: return 'REJECT branchMidInsn'
                labels.add(tg); lines.append('%s .L%08x' % ({'jmpl': 'jmp', 'calll': 'call'}.get(mn, mn), tg)); continue
            if i.mnemonic in ('jmp', 'call'):
                slots.append(tg); lines.append('%s *_lom_af_%08x_%d' % (i.mnemonic, a, len(slots) - 1)); continue
            if i.mnemonic.startswith('loop') or i.mnemonic == 'jecxz': return 'REJECT extLoop'
            slots.append(tg); stubs.append((len(stubs), len(slots) - 1))
            lines.append('%s .Lx%08x_%d' % (mn, a, len(stubs) - 1)); continue
        m = re.search(r'\[(\w+)\*4 \+ (0x[0-9a-f]+)\]', i.op_str)
        if m and int(m.group(2), 16) in tables:
            T = int(m.group(2), 16)
            op2 = op.replace('0x%x(' % T, '.Lt%08x(' % T)
            if op2 == op: return 'REJECT tableOperandForm'
            lines.append('%s %s' % (mn, op2)); continue
        # v4 (GA_SELFIMM=1): an immediate that is an instruction start of this body (resume/handler address stored in an
        # SEH frame or passed to RtlUnwind, e.g. 005399c0 `mov [ebp-4], 0x5399ec`) -> the local label's address
        if os.environ.get('GA_SELFIMM') == '1':
            m2 = re.search(r'\$0x([0-9a-f]+)', op)
            if m2 and inbody(int(m2.group(1), 16)) and int(m2.group(1), 16) in starts:
                tg = int(m2.group(1), 16); labels.add(tg)
                op = op.replace(m2.group(0), '$.L%08x' % tg)
                if not any(inbody(int(v, 16)) for v in re.findall(r'0x[0-9a-f]+', op)):
                    lines.append('%s %s' % (mn, op)); continue
        # any other reference into this body (or code elsewhere used as data) would break: reject
        for v in re.findall(r'0x[0-9a-f]+', i.op_str):
            v = int(v, 16)
            if inbody(v): return 'REJECT selfRef'
        if isbr and not op.startswith('*'): return 'REJECT branchForm:%s %s' % (mn, op)
        lines.append('%s %s' % ({'jmpl': 'jmp', 'calll': 'call'}.get(mn, mn), op))
    body = []
    for l in lines:
        if l.endswith(':'):
            if int(l[2:10], 16) in labels: body.append(l)
        else: body.append('  ' + l)
    s = ['/* %s @ 0x%08x (%d bytes): ASM FALLBACK (no behaviour-verified C yet).' % (f.name, a, n),
         ' * Same instruction sequence as lomse.exe; branch targets via local labels / absolute slots. tools/gen_asmfn.py */',
         '#include "lom.h"', '#define LOM_SELF_%08x 1' % a,
         '__attribute__((naked)) void rb_%08x(void)' % a, '{', '  __asm__(']
    s += ['    "%s\\n"' % l for l in body]
    for k, sl in stubs: s.append('    ".Lx%08x_%d: jmp *_lom_af_%08x_%d\\n"' % (a, k, a, sl))
    s += ['  );', '}']
    dat = ['  "_lom_af_%08x_%d: .long 0x%08x\\n"' % (a, k, t) for k, t in enumerate(slots)]
    rod = []
    for T, ent in tables.items():
        rod.append('  ".balign 4\\n.Lt%08x:\\n"' % T); rod += ['  ".long .L%08x\\n"' % v for v in ent]
    # labels are local to this asm block's section: tables must live in .text with them (same assembler unit)
    if dat: s += ['__asm__(".data\\n"'] + dat + ['  ".text\\n");']
    if rod:
        # put tables right after the function in the same __asm__ by appending to the naked body instead
        i = s.index('  );')
        s[i:i] = ['    ".balign 4\\n"'] + [r.replace('  "', '    "', 1) for r in rod if not r.startswith('  ".balign 4\\nLt') ] if False else [r.replace('  "', '    "', 1) for r in rod]
    open(os.path.join(R, 'src', 'asmfn', '%08x.c' % a), 'w').write('\n'.join(s) + '\n')
    return 'OK'
if __name__ == '__main__':
    F = lomdb.funcs()
    for x in sys.argv[1:]:
        a = int(x, 16)
        print('%08x %s' % (a, gen(a, F[a], F)))
