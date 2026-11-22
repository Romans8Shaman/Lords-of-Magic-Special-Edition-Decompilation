#!/usr/bin/env python3
"""icallargs.py : for every indirect call site (build/icalls.tsv), count the dwords the ORIGINAL code pushes right
before the call (backward walk in the same basic block, stopping at a call/branch/branch-target/prologue end) and the
number of stack args in Ghidra's decomp (ghidra_out/code/<fn>.c, /*IC:site*/ markers).
Writes build/icallargs.tsv: func site this_call pushed ghidra_stack_args status(OK/DROP/EXTRA/NOMARK)."""
import sys, os, re, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32)
R = lomdb.ROOT; F = lomdb.funcs(); img = lomdb.pe().get_memory_mapped_image()
def dis(a, f):
    return list(md.disasm(img[a-0x400000:f.maxaddr+1-0x400000], a))
def args_text(src, site):
    m = src.find('/*IC:%s*/' % site)
    if m < 0: return None
    # find the paren enclosing the marker
    d = 0; i = m
    while i > 0:
        i -= 1
        if src[i] == ')': d += 1
        elif src[i] == '(':
            if d == 0: break
            d -= 1
    d = 0; j = i
    while j < len(src):
        if src[j] == '(': d += 1
        elif src[j] == ')':
            d -= 1
            if d == 0: break
        j += 1
    j += 1
    while src[j] in ' \n': j += 1
    if src[j] != '(': return None
    d = 0; k = j; n = 0; nonempty = False
    while k < len(src):
        c = src[k]
        if c in '([': d += 1
        elif c in ')]':
            d -= 1
            if d == 0: break
        elif c == ',' and d == 1: n += 1
        elif d >= 1 and not c.isspace(): nonempty = True
        k += 1
    return n + 1 if nonempty else 0
rows = [l.rstrip('\n').split('\t') for l in open(os.path.join(R, 'build', 'icalls.tsv'))]
by = collections.defaultdict(list)
for r in rows: by[r[0]].append(r)
out = []; cnt = collections.Counter()
for fn, rs in sorted(by.items()):
    f = F[int(fn, 16)]
    ins = dis(int(fn, 16), f); idx = {i.address: k for k, i in enumerate(ins)}
    tg = set()
    for i in ins:
        if (i.mnemonic.startswith('j') or i.mnemonic == 'call') and i.op_str.startswith('0x'):
            tg.add(int(i.op_str, 16))
    # saved regs = pops right before each ret
    S = collections.Counter()
    for k, i in enumerate(ins):
        if i.mnemonic == 'ret':
            kk = k - 1; c = collections.Counter()
            while kk >= 0 and ins[kk].mnemonic in ('pop', 'add', 'mov', 'lea', 'xor', 'or'):
                if ins[kk].mnemonic == 'pop': c[ins[kk].op_str] += 1
                kk -= 1
            S |= c
    prol = set(); seen = collections.Counter()
    for k, i in enumerate(ins):
        if k and (ins[k-1].mnemonic in ('call', 'ret', 'jmp') or ins[k-1].mnemonic.startswith('j')) or (k and i.address in tg): break
        if i.mnemonic == 'push':
            if seen[i.op_str] < S[i.op_str]: prol.add(k); seen[i.op_str] += 1
            elif k <= 3 and i.op_str in ('-1', '0xffffffff'): prol.add(k)
            elif k - 1 in prol and k <= 4 and i.op_str.startswith('0x'): prol.add(k)
            elif i.op_str == 'eax' and k and 'fs:[0]' in ins[k-1].op_str: prol.add(k)
    p = os.path.join(R, 'ghidra_out', 'code', fn + '.c'); src = open(p).read() if os.path.exists(p) else ''
    for r in rs:
        site = int(r[1], 16); k = idx.get(site)
        if k is None: continue
        n = 0; kk = k - 1
        while kk >= 0:
            i = ins[kk]
            if kk in prol: kk -= 1; continue
            if i.mnemonic in ('call', 'ret', 'jmp') or i.mnemonic.startswith('j') or i.mnemonic.startswith('rep') and False: break
            if i.mnemonic == 'push': n += 1
            elif i.mnemonic == 'pop': n -= 1
            elif i.mnemonic in ('sub', 'add') and i.op_str.startswith('esp,') and kk not in range(0, 12): break
            if i.address in tg: break
            kk -= 1
        g = args_text(src, r[1])
        this = r[2] == '1'
        if g is None: st = 'NOMARK'; gs = -1
        else:
            gs = g - (1 if this else 0)
            st = 'OK' if gs == n else ('DROP' if gs < n else 'EXTRA')
        if r[3] != '0': st += '_CDECL'
        cnt[st] += 1
        out.append('\t'.join([fn, r[1], r[2], str(n), str(gs), st]))
open(os.path.join(R, 'build', 'icallargs.tsv'), 'w').write('\n'.join(out) + '\n')
print(dict(cnt))
