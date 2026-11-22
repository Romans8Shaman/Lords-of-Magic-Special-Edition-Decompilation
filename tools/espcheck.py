#!/usr/bin/env python3
"""espcheck.py [ADDRS...] : independent esp-depth tracker over the ORIGINAL code of each function, vs the Ghidra
decompiled stack-variable names (local_XX / xStack_XX = Stack[-0xXX]) in ghidra_out/code.
Catches the 'Ghidra stack depth wrong after a callee-pop icall' class (00474f30 palette blue bug: GetSurfaceDesc
masks read 8 bytes off). Writes build/espcheck.tsv: func status nbad badvars(ghidra) realoffs-near"""
import sys, os, re, collections
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone import x86_const as X
md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
ROOT = lomdb.ROOT
F = lomdb.funcs(); IAT = lomdb.iat(); EXT = lomdb.externals()
img = lomdb.pe().get_memory_mapped_image(); B = 0x400000
ic = {}
for l in open(os.path.join(ROOT, 'build', 'icalls.tsv')):
    p = l.rstrip('\n').split('\t'); ic[int(p[1], 16)] = int(p[3])
ia = {}
for l in open(os.path.join(ROOT, 'build', 'icallargs.tsv')):
    p = l.rstrip('\n').split('\t'); ia[int(p[1], 16)] = int(p[3])
CHK = {a for a, f in F.items() if 'chkstk' in f.name.lower() or 'alloca_probe' in f.name.lower()}
RETP = {}
def ret_purge(t):
    """callee purge from its own ret instructions (None if no ret found)"""
    if t in RETP: return RETP[t]
    f = F.get(t); r = None
    if f is not None and not f.thunk:
        seen = set()
        for i in md.disasm(bytes(img[t - B:f.maxaddr + 1 - B]), t):
            if i.mnemonic == 'ret':
                seen.add(i.operands[0].imm if i.operands else 0)
        if len(seen) == 1: r = seen.pop()
    RETP[t] = r; return r
IMPP = {}
for _l in open(os.path.join(lomdb.GO, 'import_purges.tsv')):
    _p = _l.rstrip('\n').split('\t')
    if len(_p) >= 4 and _p[3].strip().lstrip('-').isdigit(): IMPP[(_p[0].upper(), _p[1])] = int(_p[3])
def imp_purge(slot):
    if slot not in IAT: return None
    dll, nm = IAT[slot]
    e = EXT.get((dll, nm))
    if e and e['purge'] < 0x10000: return e['purge']
    k = nm[8:] if nm.startswith('Ordinal_') else nm
    return IMPP.get((dll, k))
def purge_of(t, depth=0):
    r = ret_purge(t)
    if r is not None: return r
    f = F.get(t)
    if f is not None and depth < 4:
        # tail-jump wrapper / import thunk: follow the final jmp
        last = None
        for i in md.disasm(bytes(img[t - B:f.maxaddr + 1 - B]), t): last = i
        if last is not None and last.mnemonic == 'jmp':
            o = last.operands[0]
            if o.type == X.X86_OP_IMM: return purge_of(o.imm, depth + 1)
            if o.type == X.X86_OP_MEM and o.mem.base == 0 and o.mem.index == 0: return imp_purge(o.mem.disp)
    f = F.get(t)
    if f is None: return None
    if f.thunk and f.thunk_target:
        try:
            tt = int(f.thunk_target, 16)
            if tt in F: return F[tt].purge
        except ValueError:
            for k, v in EXT.items():
                if v['name'] == f.thunk_target.split('::')[-1]: return v['purge']
    return f.purge
def ext_purge(slot):
    if slot not in IAT: return None
    dll, nm = IAT[slot]
    e = EXT.get((dll, nm))
    return e['purge'] if e else None
def track(fa):
    f = F[fa]; lo, hi = fa, f.maxaddr + 1
    code = bytes(img[lo - B:hi - B]); ins = {i.address: i for i in md.disasm(code, lo)}
    st = {fa: (0, None, None)}; work = [fa]; acc = []; issues = []
    seen = set()
    while work:
        a = work.pop()
        if a in seen: continue
        seen.add(a); esp, ebp, eax = st[a]
        while True:
            i = ins.get(a)
            if i is None: issues.append('nodecode@%x' % a); break
            ops = i.operands; m = i.mnemonic
            for o in ops:
                if o.type == X.X86_OP_MEM:
                    if o.mem.base == X.X86_REG_ESP:
                        acc.append((a, esp + o.mem.disp, o.size, m))
                    elif o.mem.base == X.X86_REG_EBP and ebp is not None:
                        acc.append((a, ebp + o.mem.disp, o.size, m))
            nxt = a + i.size; succ = [nxt]; stop = False
            if m == 'push': esp -= ops[0].size if ops[0].type != X.X86_OP_IMM else 4; acc.append((a, esp, 4, 'push'))
            elif m == 'pop': acc.append((a, esp, 4, 'pop')); esp += ops[0].size
            elif m in ('pushal', 'pushad'): esp -= 32
            elif m in ('popal', 'popad'): esp += 32
            elif m in ('pushfd', 'pushf'): esp -= 4
            elif m in ('popfd', 'popf'): esp += 4
            elif m in ('sub', 'add') and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_ESP:
                if ops[1].type == X.X86_OP_IMM: esp += ops[1].imm if m == 'add' else -ops[1].imm
                else: issues.append('espreg@%x' % a)
            elif m == 'lea' and ops[0].reg == X.X86_REG_ESP:
                if ops[1].mem.base == X.X86_REG_ESP: esp += ops[1].mem.disp
                elif ops[1].mem.base == X.X86_REG_EBP and ebp is not None: esp = ebp + ops[1].mem.disp
            elif m == 'mov' and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_EBP and ops[1].type == X.X86_OP_REG and ops[1].reg == X.X86_REG_ESP: ebp = esp
            elif m == 'mov' and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_ESP and ops[1].type == X.X86_OP_REG and ops[1].reg == X.X86_REG_EBP:
                if ebp is not None: esp = ebp
            elif m == 'mov' and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_EAX:
                eax = ops[1].imm if ops[1].type == X.X86_OP_IMM else None
            elif m == 'leave':
                if ebp is not None: esp = ebp + 4
                ebp = None
            elif m == 'call':
                o = ops[0]; p = None
                if o.type == X.X86_OP_IMM:
                    t = o.imm
                    if t in CHK:
                        if eax is None: issues.append('chk@%x' % a); stop = True
                        else: esp -= eax
                        p = 0
                    else:
                        p = purge_of(t)
                        if p is None: issues.append('callunk@%x' % a); stop = True
                elif o.type == X.X86_OP_MEM and o.mem.base == 0 and o.mem.index == 0 and o.mem.disp in IAT:
                    p = imp_purge(o.mem.disp)
                    if p is None: issues.append('impunk@%x' % a); stop = True
                else:
                    if a in ic and a in ia: p = 4 * ia[a] if ic[a] == 0 else 0
                    else: issues.append('icunk@%x' % a); stop = True
                if p and p > 0x10000: issues.append('noret@%x' % a); stop = True
                elif p and p > 0: esp += p
                eax = None
            elif m in ('ret', 'retf', 'iretd', 'hlt', 'int3'): stop = True
            elif m == 'jmp':
                if ops[0].type == X.X86_OP_IMM and lo <= ops[0].imm < hi: succ = [ops[0].imm]
                elif ops[0].type == X.X86_OP_MEM and ops[0].mem.base == 0 and ops[0].mem.scale == 4 and ops[0].mem.disp > B:
                    tb = ops[0].mem.disp; tg = []
                    for k in range(512):
                        v = int.from_bytes(img[tb - B + 4 * k:tb - B + 4 * k + 4], 'little')
                        if not (lo <= v < hi): break
                        tg.append(v)
                    for v in tg:
                        if v not in st: st[v] = (esp, ebp, None); work.append(v)
                    stop = True
                else: stop = True
            elif m.startswith('j') or m.startswith('loop'):
                if ops[0].type == X.X86_OP_IMM and lo <= ops[0].imm < hi: succ.append(ops[0].imm)
            if m != 'call' and ops and ops[0].type == X.X86_OP_REG and ops[0].reg == X.X86_REG_EAX and m not in ('mov', 'push', 'cmp', 'test'): eax = None
            if stop: break
            for s in succ[1:] if len(succ) > 1 else []:
                if s not in st: st[s] = (esp, ebp, eax); work.append(s)
                elif st[s][0] != esp: issues.append('join@%x %d/%d' % (s, st[s][0], esp))
            a = succ[0]
            if a >= hi: break
            if a in seen:
                if st[a][0] != esp: issues.append('join@%x %d/%d' % (a, st[a][0], esp))
                break
            if a in st and st[a][0] != esp: issues.append('join@%x %d/%d' % (a, st[a][0], esp))
            st.setdefault(a, (esp, ebp, eax)); seen.add(a); eax = st[a][2] if st[a][2] == eax else None
    return acc, issues
VR = re.compile(r'\b[a-zA-Z]*(?:local|Stack)_([0-9a-f]+)\b')
def gvars(fa):
    t = lomdb.code_text(fa)
    if not t: return set()
    return {-int(h, 16) for h in VR.findall(t)}
def check(fa):
    acc, issues = track(fa)
    cov = set()
    for a, off, sz, m in acc:
        for k in range(max(sz, 1)): cov.add(off + k)
    bad = sorted(o for o in gvars(fa) if o not in cov and o < 0)
    return bad, issues, acc
if __name__ == '__main__':
    addrs = [int(x, 16) for x in sys.argv[1:]] if len(sys.argv) > 1 else sorted(F)
    out = open(os.path.join(ROOT, 'build', 'espcheck.tsv'), 'w')
    c = collections.Counter()
    for fa in addrs:
        if fa not in F or F[fa].thunk: continue
        try: bad, issues, acc = check(fa)
        except Exception as e: c['ERR'] += 1; out.write('%08x\tERR\t0\t%s\t\n' % (fa, e)); continue
        s = 'BAD' if bad else 'OK'
        if issues and bad: s = 'BAD?'
        if not bad and any(x.startswith(('noret','callunk','icunk','impunk','chk')) for x in issues): s = 'INCOMPLETE'
        c[s] += 1
        out.write('%08x\t%s\t%d\t%s\t%s\n' % (fa, s, len(bad), ' '.join('-0x%x' % -o for o in bad), ' '.join(issues[:4])))
    print(dict(c))
