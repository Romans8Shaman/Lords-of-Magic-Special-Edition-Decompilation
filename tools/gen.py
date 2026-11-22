#!/usr/bin/env python3
"""gen.py ADDR... : turn Ghidra decomp of lomse.exe functions into compilable C in src/fn/ADDR.c.
Exit status per function is printed as: ADDR OK|REJECT reason.
Callees and globals are bound to their fixed addresses in the original image."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb, bitcast
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
from capstone.x86 import X86_OP_MEM

REJECT_PATTERNS = [r'\bin_[A-Z]', r'\bunaff_', r'\bextraout_', r'halt_baddata', r'\bswi\(',
                   r'WARNING: (?!Globals starting|Removing unreachable|Subroutine does not return|Function: __ftol replaced with injection: ftol_pop|Function: __alloca_probe replaced with injection: alloca_probe)', r'(?<!Function: )__alloca_probe(?! replaced with injection)', r'\bin_stack_[0-9a-f]{8}\b', r'\bout\(', r'\bin\(',
                   r'Unwind@', r'\bCONCAT\d\d\b.*\bin_', r'\bLOCK\(\)', r'\bUNLOCK\(\)',
                   r'\bcpuid', r'\brdtsc', r'\bSUB\d\d\d']
CC_OK = {'__cdecl', '__stdcall', '__thiscall', '__fastcall'}
CC_MAP = {'__cdecl': '__cdecl', '__stdcall': '__stdcall', '__thiscall': '__thiscall', '__fastcall': '__fastcall'}
IDENT = re.compile(r'\b[A-Za-z_][A-Za-z0-9_]*\b')
GLOB = re.compile(r'^_?(?:DAT|PTR|s|u|BYTE|WORD|DWORD|ram|flt|dbl|pu|pp|pi|pc|pb|pf|pd|ps|ppu|ppc|switchdataD|ptr|PTR_LAB|PTR_FUN|PTR_DAT|PTR_PTR|PTR_s|PTR_u|LAB|caseD)?.*_([0-9a-f]{8})$')

def strip_seh(body):
    """Remove MSVC C++ EH frame bookkeeping (fs:[0] ExceptionList link, handler ptr, EH state var).
    Behaviour is identical unless a C++ exception unwinds through the function (the game doesn't throw).
    Frame is always [ebp-4]=state, [ebp-8]=handler, [ebp-0xc]=saved link -> Ghidra names *_4 / *_8 / *_c.
    The state may be written whole or partially (state._0_1_ = 2; state = (uint)state._1_3_ << 8;)."""
    m = re.search(r'^\s*(\w+) = &LAB_[0-9a-f]{8};\s*\n\s*(\w+) = ExceptionList;\s*$', body, re.M)
    if not m: return None
    handler, saved = m.groups()
    if not handler.endswith('_8') or not saved.endswith('_c'): return None
    cands = set(re.findall(r'\b(\w*(?:local|Stack)_4)\b', body))
    if len(cands) > 1: return None
    state = cands.pop() if cands else None
    names = [handler, saved] + ([state] if state else [])
    out = []
    for line in body.split('\n'):
        st = line.strip()
        if re.match(r'^(%s)(\._\d+_\d+_)? = .*;$' % '|'.join(names), st) or re.match(r'^ExceptionList = .*;$', st): continue
        out.append(line)
    b = '\n'.join(out)
    # the same bookkeeping inside comma expressions: if ((x != 0) && (ExceptionList = &local_c, cond)) -> (cond)
    b = re.sub(r'\b(?:ExceptionList|%s)(?:\._\d+_\d+_)? = [^,;()]+, ' % '|'.join(names), '', b)
    decl = lambda n: re.compile(r'^\s*[A-Za-z_][\w\s\*]*?\**\b%s\s*;\s*$' % n, re.M)
    for n in names: b = decl(n).sub('', b)
    if re.search(r'\b(ExceptionList|%s)\b' % '|'.join(names), b): return None
    return b

def chunk_ranges(f):
    """v23a: [(lo, hi)] of the ORIGINAL code of f: its [addr, maxaddr] plus, for 'mov ecx, imm32; jmp X' thunk
    entries whose X is not a function start (op_resetcombat class), the orphan chunk X .. next fn start - 1."""
    r = [(f.addr, f.maxaddr)]
    b = lomdb.read_va(f.addr, 10)
    if b[0] == 0xb9 and b[5] == 0xe9:
        import struct as _s
        x = f.addr + 10 + _s.unpack('<i', b[6:10])[0]
        F = lomdb.funcs()
        if x not in F:
            nxt = min(a for a in F if a > x)
            r.append((x, nxt - 1))
    return r

def _code(f):
    for lo, hi in chunk_ranges(f): yield lomdb.read_va(lo, hi - lo + 1), lo

def fix_bytederef_calls(t):
    """v23b: icall through a global typed as a data pointer (`#define DAT_x (*(undefined * *)0x..)`): Ghidra writes
    `(*DAT_x)` as the callee, which in C reads the BYTE at the pointer and calls that value (00543140, 0047af50,
    005436c0). The original calls the pointer value itself."""
    for n in re.findall(r'#define (\w+) \(\*\((?:undefined|undefined1|byte|uchar|char) \* \*\)0x[0-9a-f]+\)', t):
        t = t.replace('(*%s))(' % n, '(%s))(' % n)
    return t

_SJ = {'jl', 'jle', 'jg', 'jge'}; _UJ = {'jb', 'jbe', 'ja', 'jae'}
def fix_undef4_signed_cmp(f, t):
    """v23e: Ghidra prints a SIGNED compare of an undefined4 global with no cast (`if (0 < DAT_005a7b50)`); with
    undefined4 = uint, C compares unsigned (clang turns `0 < x` into `x != 0`; 004dc010). Cast to (int) when every
    conditional jump after a load/cmp of that global in the ORIGINAL code is signed."""
    u = re.findall(r'#define (DAT_([0-9a-f]{8})) \(\*\(undefined4 \*\)0x[0-9a-f]+\)', t)
    if not u: return t
    k = t.find('#define LOM_SELF_')
    if k < 0: return t
    head, body = t[:k], t[k:]
    md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
    ins = [i for data, lo in _code(f) for i in md.disasm(data, lo)]
    for n, a in u:
        rel = r'(?<![<>])(<=|>=|<|>)(?![<>=])'
        pat1 = re.compile(r'\b%s\s*%s' % (n, rel)); pat2 = re.compile(r'%s\s*%s\b' % (rel, n))
        if not (pat1.search(body) or pat2.search(body)): continue
        A = int(a, 16); kinds = set()
        for j, i in enumerate(ins):
            if not any(o.type == X86_OP_MEM and o.mem.base == 0 and o.mem.index == 0 and o.mem.disp & 0xffffffff == A for o in i.operands): continue
            for x in ins[j + 1:j + 9]:
                if x.mnemonic in _SJ: kinds.add('s'); break
                if x.mnemonic in _UJ: kinds.add('u'); break
                if x.mnemonic in ('jmp', 'call', 'ret'): break
        if kinds != {'s'}: continue
        body = pat1.sub(lambda m: '(int)%s %s' % (n, m.group(1)), body)
        body = pat2.sub(lambda m: '%s (int)%s' % (m.group(1), n), body)
    return head + body

_DENORM = re.compile(r'(\b[A-Za-z_]\w*(?:\[[^\]]*\])?)\s*(==|!=)\s*(\d\.\d+e-4[0-5])\b')
def fix_denormal_int_cmp(t):
    """v23f: Ghidra types an int compare of a float-typed local as a float compare against a denormal printed with
    6 digits (`fVar3 == 2.8026e-45` = int 2); the literal is not the exact denormal, so C is always false
    (0044d910, 0044da40, 004c4510, 0050e8c0, 00525220). Compare the bits instead."""
    def r(m):
        v = float(m.group(3)); n = round(v / 1.401298464324817e-45)
        if n < 1 or n > 0x7fffff or abs(n * 1.401298464324817e-45 - v) > v * 1e-4: return m.group(0)
        return '__BC(int, %s) %s %d' % (m.group(1), m.group(2), n)
    return _DENORM.sub(r, t)

def iat_refs(f):
    md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
    refs = set(); iat = lomdb.iat()
    for ins in (i for data, lo in _code(f) for i in md.disasm(data, lo)):
        for op in ins.operands:
            if op.type == X86_OP_MEM and op.mem.base == 0 and op.mem.index == 0 and op.mem.disp & 0xffffffff in iat:
                refs.add(op.mem.disp & 0xffffffff)
    return refs

def has_x87(f):
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    return any(i.mnemonic.startswith('f') for data, lo in _code(f) for i in md.disasm(data, lo))

def abs_access(f):
    """absolute memory operands in the ORIGINAL code: addr -> set of (size, fpu)"""
    md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True
    acc = {}
    for ins in (i for data, lo in _code(f) for i in md.disasm(data, lo)):
        for op in ins.operands:
            if op.type == X86_OP_MEM and op.mem.base == 0 and op.mem.index == 0:
                acc.setdefault(op.mem.disp & 0xffffffff, set()).add((op.size, ins.mnemonic.startswith('f')))
    return acc

OVERLAP_T = {(1, False): 'undefined1', (2, False): 'undefined2', (4, False): 'undefined4', (8, False): 'undefined8',
             (4, True): 'float', (8, True): 'double', (2, True): 'undefined2', (10, True): 'float10'}

def fp_type(ret, cc, params):
    if ret in ('undefined',): ret = 'undefined4'
    ps = [lomdb.param_type(p) for p in params]
    return '%s (%s *)(%s)' % (ret, cc, ', '.join(ps) if ps else 'void')

def thunk_extern(f):
    if f.thunk and f.thunk_target.startswith('EXTERNAL:'):
        nm = f.thunk_target.split(':', 2)[2]
        libs = [k for k in lomdb.externals() if k[1] == nm]
        slots = [a for a, v in lomdb.iat().items() if v[1] == nm]
        # resolve the IAT slot the thunk jumps through
        d = lomdb.read_va(f.addr, 6)
        if d[:2] == b'\xff\x25':
            slot = int.from_bytes(d[2:6], 'little')
            if slot in lomdb.iat(): return lomdb.iat()[slot]
    return None

FCASE = re.compile(r'^(\s*case )(-?[0-9]+\.[0-9]*(?:e-?[0-9]+)?|-?[0-9]+e-?[0-9]+):\s*$')
_VAC = None
def VARARGS_CALLEES():
    global _VAC
    if _VAC is None:
        _VAC = [l.split()[0].lower() for l in open(os.path.join(lomdb.ROOT, 'build', 'varargs_callees.tsv')) if l.strip() and not l.startswith('#')]
    return _VAC
def float_switch(body):
    """Ghidra types a stack slot float but uses it as a switch index (case 1.4013e-45: = bit pattern 1): switch on the
    bits. Only when every case label of that switch is a float literal that is 0 or a denormal (exact int pattern)."""
    L = body.split('\n')
    for i, ln in enumerate(L):
        m = re.match(r'^(\s*)switch\((.*)\) \{\s*$', ln)
        if not m: continue
        d = 0; cases = []
        for j in range(i, len(L)):
            if d == 1:
                c = FCASE.match(L[j])
                if c: cases.append(j)
                elif re.match(r'^\s*case ', L[j]): cases = None; break
            d += L[j].count('{') - L[j].count('}')
            if d <= 0 and j > i: break
        if not cases: continue
        vals = []
        for j in cases:
            v = float(FCASE.match(L[j]).group(2)); k = round(abs(v) / 1.401298464324817e-45)
            if abs(v) >= 1.1754943e-38 or abs(k * 1.401298464324817e-45 - abs(v)) > 0.01 * 1.4e-45 * max(k, 1): vals = None; break
            vals.append(k if v >= 0 else (k | 0x80000000))
        if vals is None: continue
        L[i] = '%sswitch(__BC(int, %s)) {' % (m.group(1), m.group(2))
        for j, k in zip(cases, vals):
            L[j] = '%s%d: /* float bits */' % (FCASE.match(L[j]).group(1), k)
    return '\n'.join(L)

def callee_macro(f):
    te = thunk_extern(f)
    if te:
        dll, nm = te; e = lomdb.externals().get((dll, nm))
        if e and e['cc'] in CC_OK:
            ret, params = lomdb.parse_proto(e['proto'], nm)
            return '#define %s ((%s)0x%08x) /* thunk -> %s!%s */' % (f.name, fp_type(ret, e['cc'], params), f.addr, dll, nm)
        return '#define %s ((undefined4 (__stdcall *)())0x%08x) /* thunk -> %s!%s (WINAPI, unprototyped) */' % (f.name, f.addr, dll, nm)
    if f.cc not in CC_OK: return None
    ret, params = lomdb.parse_proto(f.proto, f.name)
    if f.cc == '__cdecl' and '%08x' % f.addr in VARARGS_CALLEES() and len(params) > 2 and params[-1].strip() == '...':
        # v19: Ghidra may add bogus fixed params to a varargs callee (0053a090(buf, fmt, uint param_3, ...) while
        # callers push 2). cdecl + 4-byte int/pointer params: passing them through '...' is ABI-identical.
        fx = params[1:-1]
        if all(lomdb.type_stack_size(lomdb.param_type(q)) == 4 and not re.search(r'\b(float|double)\b', q) for q in fx):
            params = params[:1] + ['...']
    if f.cc in ('__stdcall', '__thiscall', '__fastcall') and f.purge < 0x10000:
        # callee pops more stack than its Ghidra prototype declares (Ghidra dropped unused trailing params, and
        # call sites omit them): call with the declared args plus 0 for each missing dword so ESP stays balanced.
        ps = [p for p in params if p.strip() != 'void']
        pts = [lomdb.param_type(p) for p in ps]
        k = 1 if f.cc == '__thiscall' else 2 if f.cc == '__fastcall' else 0
        if f.cc == '__fastcall' and len(pts) < 2: k = len(pts)
        have = sum(lomdb.type_stack_size(p) for p in pts[k:])
        if f.purge > have and (f.purge - have) % 4 == 0 and '...' not in pts and (f.cc != '__fastcall' or len(pts) >= 2):
            nx = (f.purge - have) // 4
            full = params + ['undefined4 unused_pad_%d' % i for i in range(nx)] if ps else ['undefined4 unused_pad_%d' % i for i in range(nx)]
            return '#define %s(...) ((%s)0x%08x)(__VA_ARGS__%s) /* +%d unused stack dword(s): ret %d */' % (
                f.name, fp_type(ret, f.cc, full), f.addr, ', 0' * nx, nx, f.purge)
    return '#define %s ((%s)0x%08x)' % (f.name, fp_type(ret, f.cc, params), f.addr)

def extern_macro(slot, dll, nm):
    e = lomdb.externals().get((dll, nm))
    if e and e['cc'] in CC_OK:
        ret, params = lomdb.parse_proto(e['proto'], nm)
        t = fp_type(ret, e['cc'], params)
    else:  # unprototyped import (Storm/Smacker/DDraw/DPlay ordinals): all WINAPI (stdcall)
        t = 'undefined4 (__stdcall *)()'
    return '#define %s (*(__typeof__(%s) *)0x%08x) /* %s!%s via IAT */' % (nm, t, slot, dll, nm)

def t_ptr(t):
    return t  # IAT slot holds a pointer of function-pointer type t; macro derefs (*(t*)slot)

def global_decl(name, addr, gtype, glen):
    if gtype == 'string' or gtype.startswith('char['):
        return '#define %s (*(char (*)[])0x%08x)' % (name, addr)
    m = re.match(r'^(.*)\[(\d+)\]$', gtype)
    if m:
        return '#define %s (*(%s (*)[%s])0x%08x)' % (name, m.group(1), m.group(2), addr)
    if gtype in ('?', 'pointer'): gtype = 'undefined4' if gtype == '?' else 'void *'
    return '#define %s (*(%s *)0x%08x)' % (name, gtype, addr)

STACKVAR = re.compile(r'^(?P<ind>\s+)(?P<t>[^;=(){}]*?[\s*])(?P<n>local_[0-9a-f]+|[a-z]{1,4}Stack_[0-9a-f]+)\s*(?P<a>(?:\[\w+\]\s*)*);\s*$')
REGVARS = {}
_SR = None
def stackrefs():
    """ghidra_out/stackrefs.tsv (ghidra_scripts/ExportStackRefs.java): func -> [(offset, type, size)] or None if depth unknown"""
    global _SR
    if _SR is None:
        _SR = {}
        p = os.path.join(lomdb.GO, 'stackrefs.tsv')
        if os.path.exists(p):
            for l in open(p):
                q = l.rstrip('\n').split('\t')
                if len(q) < 6: continue
                fa = int(q[0], 16)
                if q[1] == '#unknown': _SR[fa] = None; continue
                if fa in _SR and _SR[fa] is None: continue
                t = q[5].lower()
                sz = 1 if 'byte ptr' in t else 2 if 'word ptr' in t and 'dword' not in t and 'qword' not in t else \
                     8 if 'qword ptr' in t else 10 if 'tword ptr' in t else 4
                _SR.setdefault(fa, []).append((int(q[2]), q[3], sz))
    return _SR
SCALAR_SZ = {'char': 1, 'uchar': 1, 'byte': 1, 'undefined': 1, 'undefined1': 1, 'bool': 1, 'short': 2, 'ushort': 2,
             'undefined2': 2, 'word': 2, 'int': 4, 'uint': 4, 'undefined4': 4, 'dword': 4, 'float': 4, 'long': 4, 'ulong': 4,
             'longlong': 8, 'ulonglong': 8, 'undefined8': 8, 'double': 8, 'qword': 8}
_SRIA = None
def stackrefs_ia():
    """func -> [(insn_addr, offset, type)] from stackrefs.tsv (v22f)"""
    global _SRIA
    if _SRIA is None:
        _SRIA = {}
        p = os.path.join(lomdb.GO, 'stackrefs.tsv')
        if os.path.exists(p):
            for l in open(p):
                q = l.rstrip('\n').split('\t')
                if len(q) < 6 or q[1].startswith('#'): continue
                _SRIA.setdefault(int(q[0], 16), []).append((int(q[1], 16), int(q[2]), q[3]))
    return _SRIA
def regvar_locals(addr, decl, body):
    """Stack-named locals that are really REGISTER values (Ghidra merged them with an uninitialised stack read):
    the decomp assigns them but the original never writes / pushes to / takes the address of their slot.
    Kept in _fr they can be clobbered through an escaped neighbour (0049b880: ctor on &auStack_c overwrote iStack_8)."""
    refs = stackrefs().get(addr, ())
    if refs is None or addr not in stackrefs(): return set()
    res = set()
    for _, m in decl:
        n = m.group('n'); t = m.group('t').strip(); a = m.group('a').strip()
        if a: continue
        sz = 4 if t.endswith('*') else SCALAR_SZ.get(t)
        if not sz: continue
        lo = -int(n.split('_')[-1], 16); hi = lo + sz
        if re.search(r'&\s*%s\b' % n, body): continue
        if not re.search(r'(?<![\w.>])%s\s*(=(?!=)|\+=|-=|\|=|&=|\^=|\*=|<<=|>>=|\+\+|--)' % n, body): continue
        if any((ty in ('W', 'RW', 'A', '?')) and o < hi and o + rs > lo for o, ty, rs in refs): continue
        # v22f: slot READ by an instruction after the address of a neighbour below it was taken (lea) -> written via
        # that pointer by a callee (00546720: __multtenpow12(&man) then reads man+10 = local_22) -> real memory var
        ia = stackrefs_ia().get(addr, [])
        la = [i for i, o, ty in ia if ty == 'A' and lo - 16 <= o < lo]
        if la and any(ty == 'R' and o < hi and o + 4 > lo and i > min(la) for i, o, ty in ia): continue
        res.add(n)
    return res

def frame_locals(body, addr=None):
    """Place Ghidra stack locals at their real frame offsets inside one byte array, so
    the original layout/aliasing is kept (Ghidra often under-sizes arrays that the
    code then fills as one struct, e.g. local_5c[4] copied with 0x13 dwords)."""
    i = body.index('{')
    lines = body[i+1:].split('\n')
    decl = []
    for k, ln in enumerate(lines):
        if not ln.strip(): 
            if decl or k > 0: break
            continue
        m = STACKVAR.match(ln)
        if m: decl.append((k, m))
        elif re.match(r'^\s+[^;]*;\s*$', ln): continue
        else: break
    if not decl: return body
    rv = regvar_locals(addr, decl, body) if addr is not None else set()
    if rv:
        REGVARS[addr] = sorted(rv)
        decl = [(k, m) for k, m in decl if m.group('n') not in rv]
        if not decl: return body[:i+1] + '\n'.join(lines)
    offs = [int(m.group('n').split('_')[-1], 16) for _, m in decl]
    mx = (max(offs) + 7) & ~7
    # v21: frame addresses taken via ESP (register0x00000010 + -K) may lie below the deepest named local
    ks = [int(k, 0) for k in re.findall(r'register0x00000010[^;,]*?\+ -(0x[0-9a-f]+|\d+)', body)]
    if ks: mx = max(mx, (max(ks) + 7) & ~7)
    out = []
    for (k, m), off in zip(decl, offs):
        n = m.group('n'); t = m.group('t').strip(); a = m.group('a').replace(' ', '')
        lines[k] = '%stypedef %s _t_%s%s;' % (m.group('ind'), t, n, a)
        out.append(n)
    first = decl[0][0]
    lines[first] = '  uchar _fr[0x%x] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */\n' % (mx + 8) + lines[first]
    last = max(k for k, _ in decl)
    lines[last] = lines[last] + '\n' + '\n'.join('#define %s (*(_t_%s *)(_fr + 0x%x))' % (n, n, mx - off) for n, off in zip(out, offs))
    tail = '\n'.join(lines)
    # v21: Ghidra `register0x00000010` = ESP at entry; `(int)register0x00000010 [+ i*N] + -0xK` = &frame[-K] -> _fr + mx - K
    # v21: Ghidra `_local_24` = 4-byte view of the slot at local_24 (wider access than its declared type)
    wide = sorted(set(re.findall(r'(?<![\w])_(local_[0-9a-f]+)\b', tail)) - set('_' + n for n in out))
    wide = [w for w in wide if w in out and not re.search(r'\b_%s\b' % w, body[:i])]
    if wide:
        lines_last = '\n'.join('#define _%s (*(undefined4 *)(_fr + 0x%x))' % (w, mx - int(w.split('_')[-1], 16)) for w in wide)
        tail = tail.replace('#define %s (*(_t_%s' % (out[-1], out[-1]), lines_last + '\n#define %s (*(_t_%s' % (out[-1], out[-1]), 1)
        out = out + ['_' + w for w in wide]
    if 'register0x00000010' in tail:
        tail = re.sub(r'\(\w+\s*\**\)register0x00000010\b|\bregister0x00000010\b', '((int)(_fr + 0x%x))' % mx, tail)
    # undefine at end of function
    j = tail.rindex('}')
    tail = tail[:j] + ''.join('#undef %s\n' % n for n in out) + tail[j:]
    return body[:i+1] + tail

_IC = None
_ICX = {}
def icall_info():
    """build/icalls.tsv (tools/icalls.py): site -> (thiscall?, caller_cleanup bytes)"""
    global _IC
    if _IC is None:
        _IC = {}
        p = os.path.join(lomdb.ROOT, 'build', 'icalls.tsv')
        if os.path.exists(p):
            for l in open(p):
                q = l.split('\t')
                if len(q) >= 4: _IC[int(q[1], 16)] = (int(q[2]), int(q[3]))  # v20: 2 = member fn ptr
                if len(q) >= 5 and int(q[2]) == 3: _ICX[int(q[1], 16)] = int(q[4], 16)  # v23d: constant ECX
    return _IC

def _match(s, i, op='(', cl=')'):
    d = 0
    for j in range(i, len(s)):
        if s[j] == op: d += 1
        elif s[j] == cl:
            d -= 1
            if d == 0: return j
    return -1

def _split_args(a):
    out, d, cur = [], 0, ''
    for ch in a:
        if ch in '([': d += 1
        elif ch in ')]': d -= 1
        if ch == ',' and d == 0: out.append(cur); cur = ''
        else: cur += ch
    if cur.strip(): out.append(cur)
    return out

_SITE_F = None
def _site_pushes(site):
    """v23i: number of `push` directly before the call at SITE in the original (same rule as icall_thisscan)."""
    global _SITE_F
    import bisect
    from capstone import Cs, CS_ARCH_X86, CS_MODE_32
    if _SITE_F is None:
        F = lomdb.funcs(); _SITE_F = (sorted(F), F)
    st, F = _SITE_F
    i = bisect.bisect_right(st, site) - 1
    if i < 0: return -1
    f = F[st[i]]
    if not (f.addr <= site <= f.maxaddr): return -1
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    ins = list(md.disasm(lomdb.read_va(f.addr, f.maxaddr - f.addr + 1), f.addr))
    bt = set()
    for x in ins:
        if x.mnemonic.startswith('j'):
            try: bt.add(int(x.op_str, 16))
            except ValueError: pass
    idx = {x.address: k for k, x in enumerate(ins)}
    if site not in idx: return -1
    # v23j: register pushes whose register is popped right after the (callee-pop) call are saves, not args
    # (0044ab50: push edi; lea edi,..; push edi; push esi; push eax; call [edx+0x2c]; pop edi; pop esi)
    pops = set(); q = idx[site] + 1
    while q < len(ins) and ins[q].mnemonic == 'pop': pops.add(ins[q].op_str); q += 1
    p = 0; j = idx[site] - 1; saved = set()
    while j >= 0:
        x = ins[j]; mn = x.mnemonic
        if mn == 'push':
            p += 1
            if x.op_str in pops: saved.add(x.op_str)
        elif mn in ('call', 'ret', 'jmp') or mn.startswith('j') or mn == 'pop' or ('esp' in x.op_str.split(',')[0] and mn in ('add', 'sub', 'lea', 'mov')): break
        if x.address in bt: break
        j -= 1
    # a pushed register counts as a save only if it was pushed BEFORE the args (the earliest pushes)
    # and only if the register is overwritten between its push and the call (0043bb10 `push edi; call [eax+0x34];
    # pop edi` pushes edi as the ARG and pops the prologue save)
    k = 0; j2 = j + 1; n_save = 0; win = ins[j2:idx[site]]
    for q2, x in enumerate(win):
        if x.mnemonic != 'push': continue
        r = x.op_str
        if r in saved and k == n_save and any(y.mnemonic not in ('push', 'cmp', 'test') and y.op_str.split(',')[0].strip() == r for y in win[q2 + 1:]):
            n_save += 1; saved.discard(r)
        k += 1
    return p - n_save
def _vcall_obj(callee):
    """v23i: object whose vtable a Ghidra virtual-call expression reads, or None."""
    m = re.fullmatch(r'\(\*\*\(code \*\*\)\(\*(?:\(int \*\))?(.+) \+ (?:0x[0-9a-f]+|\d+)\)\)', callee)
    if m: return m.group(1)
    m = re.fullmatch(r'\(\*\(code \*\)\*\*\((?:\w+) \*\*\)(.+)\)', callee)      # fn = [[OBJ]]
    if m: return m.group(1)
    m = re.fullmatch(r'\(\*\*\(code \*\*\)\*\*\((\w+) \*\*\)(.+)\)', callee)   # fn = [[[X]]], OBJ = [X]
    if m: return '*(%s **)%s' % (m.group(1), m.group(2))
    m = re.fullmatch(r'\(\*\*\(code \*\*\)\*\((?:\w+ \*)\)(.+)\)', callee)  # fn = [[OBJ]]
    if m: return m.group(1)
    m = re.fullmatch(r'\(\*\*\(code \*\*\)\((DAT_[0-9a-f]{8}) \+ (?:0x[0-9a-f]+|\d+)\)\)', callee)  # v23j: global object, Ghidra shows its vtable dword
    if m: return '&' + m.group(1)
    return None

def fix_icalls(body):
    """Indirect calls carry /*IC:site*/ (ExportRebuildInfo2). Ghidra's `code` type is cdecl; give each call
    the ABI the ORIGINAL site uses: C++ virtual (ECX=this, callee pops) -> __thiscall, callee-pop -> __stdcall,
    caller `add esp,N` -> __cdecl. Param types follow the argument expressions (__typeof__)."""
    ic = icall_info()
    while True:
        m = re.search(r'/\*IC:([0-9a-f]{8})\*/', body)
        if not m: return body
        site = int(m.group(1), 16)
        st = m.start() - 1
        body = body[:m.start()] + body[m.end():]
        if st < 0 or body[st] != '(' or site not in ic: return None
        e = _match(body, st)
        k = e + 1
        while k < len(body) and body[k].isspace(): k += 1
        if e < 0 or k >= len(body) or body[k] != '(': return None
        ae = _match(body, k)
        args = _split_args(body[k + 1:ae])
        this, cl = ic[site]
        if this == 2:
            # v20: member-function-pointer call, ECX = the object holding the pointer (icalls.py v3:
            # `mov ecx,esi; call [esi+0x220]`). Ghidra drops ECX -> pass the base object as `this`.
            callee = body[st:e + 1]
            mm = re.fullmatch(r'\(\*\*\(code \*\*\)\(\(int\)(\w+) \+ (?:0x[0-9a-f]+|\d+)\)\)', callee) or \
                 re.fullmatch(r'\(\*\(code \*\)(\w+)\[(?:0x[0-9a-f]+|\d+)\]\)', callee)
            if not mm or cl != 0: return None
            body = body[:k + 1] + mm.group(1) + (',' if args else '') + body[k + 1:]
            ae = _match(body, k); args = _split_args(body[k + 1:ae])
        if this == 3:
            # v23d: `mov ecx,0x5876d0; call [0x5878f0]` (0047af50): global object's member fn ptr, Ghidra drops ECX
            if cl != 0 or site not in _ICX: return None
            body = body[:k + 1] + '(void *)0x%x' % _ICX[site] + (',' if args else '') + body[k + 1:]
            ae = _match(body, k); args = _split_args(body[k + 1:ae])
        if this == 1 and cl == 0 and args and _site_pushes(site) == len([a for a in args if not re.match(r'^\s*unaff_E(BX|SI|DI|BP)\s*$', a)]):
            # v23i: virtual call WITH args where Ghidra dropped `this` (push count before the call == Ghidra's arg
            # count; icall_thisscan DROPPED_THIS): 00412590 `mov ecx,ebx; push 1; call [edx]`. Insert the object.
            obj = _vcall_obj(body[st:e + 1])
            if obj is None: return None
            body = body[:k + 1] + '(void *)(%s),' % obj + body[k + 1:]
            ae = _match(body, k); args = _split_args(body[k + 1:ae])
        elif this == 1 and cl == 0 and not args:
            # v23h: C++ virtual call where Ghidra dropped `this` (no args): (**(code **)(*(int *)OBJ + off))() ->
            # pass OBJ (the object whose vtable is read). Was emitted as __stdcall(void) with a garbage ECX (0047d900).
            callee = body[st:e + 1]
            mm = re.fullmatch(r'\(\*\*\(code \*\*\)\(\*(?:\(int \*\))?(.+) \+ (?:0x[0-9a-f]+|\d+)\)\)', callee)
            if mm: obj = mm.group(1)
            else:
                obj = _vcall_obj(callee)   # v23j: (**(code **)(DAT_X + off))() = global object at X
                if obj is None or not obj.startswith('&DAT_'): return None
            body = body[:k + 1] + '(void *)(%s)' % obj + body[k + 1:]
            ae = _match(body, k); args = _split_args(body[k + 1:ae])
        cc = '__thiscall' if (this and cl == 0 and args) else '__stdcall' if cl == 0 else '__cdecl'
        if cc == '__cdecl' and cl != 4 * len(args): return None
        pre = body[max(0, st - 12):st]
        ret = 'float10' if re.search(r'\((float10|double|float)\)\s*$', pre) else 'undefined4'
        tys = ', '.join('__typeof__(%s)' % a.strip() for a in args) or 'void'
        body = body[:st] + '((%s (%s *)(%s))%s)' % (ret, cc, tys, body[st:e + 1]) + body[e + 1:]

def inreg_wrap(addr, body, inregs):
    """v21: rb_X becomes a naked stub storing the incoming EAX/EDX in lom_inreg_X[] and jumping to lom_body_X
    (same signature/stack, so the callee-pop convention is unchanged); the body reads them at entry."""
    i = body.index('rb_%08x(' % addr); b = body.index('{', i)
    sig = body[:b].strip()
    g = 'lom_inreg_%08x' % addr; bn = 'lom_body_%08x' % addr
    rest = body[b:]
    for r in inregs:
        m = re.search(r'\n(\s*)([A-Za-z_][\w ]*?\**)\s*\bin_%s;' % r, rest)
        if not m: return None
        t = m.group(2).strip(); k = 0 if r == 'EAX' else 4
        rest = rest[:m.start()] + '\n%s%s in_%s = (%s)*(unsigned *)((char *)%s + %d);' % (m.group(1), t, r, t, g, k) + rest[m.end():]
    bsig = sig.replace('rb_%08x(' % addr, bn + '(', 1)
    pre = ['unsigned %s[2] __asm__("%s");' % (g, g), bsig + ' __asm__("%s");' % bn]
    stub = '%s\n{\n  __asm__("movl %%eax, %s\\n\\tmovl %%edx, %s+4\\n\\tjmp %s");\n}\n' % (sig, g, g, bn)
    stub = stub.replace(sig, '__attribute__((naked)) ' + sig, 1)
    return pre, stub + '\n' + bsig + '\n' + rest

def _is_nan_bits(v):
    v &= 0xffffffff
    return (v & 0x7f800000) == 0x7f800000 and (v & 0x7fffff) != 0
def fix_concat_fcast(addr, f, txt):
    """v22e: Ghidra `(double)CONCATxy(..)` / `(float)CONCATxy(..)` (x+y = the float size) builds the float's BITS from pieces
    (005401a0 _set_exp: mov word [esp+6],cx; fld qword [esp]) -> numeric int->float conversion was wrong.
    ExportBitcasts misses some (in conditions). Bitcast them unless the function has a 64-bit/32-bit fild (a real int load)."""
    if not re.search(r'\((?:double|float)\)CONCAT\d\d\(', txt): return txt
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    for i in md.disasm(lomdb.read_va(addr, f.size), addr):
        if i.mnemonic == 'fild' and ('qword' in i.op_str): raise ValueError('concatFild')
    out = []; pos = 0
    for m in re.finditer(r'\((double|float)\)(CONCAT(\d)(\d)\()', txt):
        if m.start() < pos: continue
        T = m.group(1); n = int(m.group(3)) + int(m.group(4))
        if n != (8 if T == 'double' else 4): raise ValueError('concatFcastSize')
        k = m.end(); depth = 1
        while depth and k < len(txt):
            depth += {'(': 1, ')': -1}.get(txt[k], 0); k += 1
        out.append(txt[pos:m.start()]); out.append('__BC(%s, %s)' % (T, txt[m.start(2):k])); pos = k
    out.append(txt[pos:])
    return ''.join(out)

def fix_nan(addr, f, body):
    """Ghidra prints a float var holding NaN-pattern int bits compared/assigned to a NaN constant as `-NAN`/`NAN`,
    losing the bits (and C float compares with NaN are always false). Comparisons -> int-bit compares using the
    NaN-pattern immediates of `cmp r32, imm` in address order; assignments `= -NAN` -> bits 0xffffffff."""
    if not re.search(r'\bNAN\b', body): return body
    cmps = re.findall(r'(\w+(?:\[\d+\])?) ([=!]=) (-?)NAN\b', body)
    if cmps:
        md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True; imms = []
        for i in md.disasm(lomdb.read_va(addr, f.size), addr):
            if i.mnemonic == 'cmp' and len(i.operands) == 2 and i.operands[1].type == 2 and i.operands[0].type == 1 \
               and _is_nan_bits(i.operands[1].imm): imms.append(i.operands[1].imm & 0xffffffff)
        if len(imms) != len(cmps): raise ValueError('nanCmp:%d/%d' % (len(cmps), len(imms)))
        it = iter(imms)
        body = re.sub(r'(\w+(?:\[\d+\])?) ([=!]=) (-?)NAN\b', lambda m: '__BC(int, %s) %s (int)0x%08x' % (m.group(1), m.group(2), next(it)), body)
    if re.search(r'= -NAN;', body):
        md = Cs(CS_ARCH_X86, CS_MODE_32)
        if not any(i.op_str.endswith('0xffffffff') for i in md.disasm(lomdb.read_va(addr, f.size), addr)):
            raise ValueError('nanStore')
        body = re.sub(r'= -NAN;', '= __BC(float, (int)0xffffffff);', body)
    if re.search(r'\bNAN\b', body): raise ValueError('nanOther')
    return body

def fix_strlits(addr, f, body):
    """Ghidra prints a pointer to a string in .rdata/.data as a C literal; the rebuilt code would pass the address of
    its own copy (CRT 0053f680: LCMapStringW(0,0x100,L"",1,..) vs push 0x54f01c). Replace each literal by the original
    address when an immediate/displacement of the function's instructions points at the same bytes (+terminator)."""
    lits = list(re.finditer(r'(?<![\w\'])(L?)"((?:[^"\\\n]|\\.)*)"', body))
    if not lits: return body
    md = Cs(CS_ARCH_X86, CS_MODE_32); md.detail = True; cands = []; icands = []
    for i in md.disasm(lomdb.read_va(addr, f.size), addr):
        for o in i.operands:
            v = o.imm if o.type == 2 else (o.mem.disp if o.type == 3 and o.mem.base == 0 and o.mem.index == 0 else None)
            if v is not None and 0x54d000 <= (v & 0xffffffff) < 0x600000: cands.append(v & 0xffffffff)
            if o.type == 3 and (o.mem.base != 0 or o.mem.index != 0) and 0x54d000 <= (o.mem.disp & 0xffffffff) < 0x600000:
                icands.append(o.mem.disp & 0xffffffff)
    nxt = 0; out = []; pos = 0
    for m in lits:
        try:
            txt = m.group(2).encode('latin-1').decode('unicode_escape')
            raw = txt.encode('utf-16-le') + b'\0\0' if m.group(1) else txt.encode('latin-1') + b'\0'
        except Exception:
            continue
        hit = None   # literals follow instruction order: take the next matching operand, else any matching one
        for j in list(range(nxt, len(cands))) + list(range(0, nxt)):
            try:
                if lomdb.read_va(cands[j], len(raw)) == raw: hit = cands[j]; nxt = max(nxt, j + 1) if j >= nxt else nxt; break
            except Exception:
                pass
        if hit is None:
            # v22c: an INDEXED literal ("?IsProcessorFeaturePresent"[c + 0x19] = CRT __lookuptable 0x54ef08 in _output 0053cff0)
            # is a table read via [reg + disp]: the copy in the rebuilt image has only the string bytes -> wrong table.
            # Match an indexed displacement d with the string at d - K (K = trailing constant of the index expression).
            ix = re.match(r'\s*\[([^\[\];]*?)\]', body[m.end():])
            if ix:
                km = re.search(r'([+-])\s*(0x[0-9a-fA-F]+|\d+)\s*$', ix.group(1)); K = (int(km.group(2), 0) * (1 if km.group(1) == '+' else -1)) if km else 0
                for d in icands + cands:
                    try:
                        if lomdb.read_va(d - K, len(raw)) == raw: hit = d - K; break
                    except Exception:
                        pass
            if hit is None and ix: raise ValueError('idxstrlit')  # indexed literal not resolvable
        if hit is None: continue
        out.append(body[pos:m.start()]); out.append('((%s *)0x%08x)' % ('ushort' if m.group(1) else 'char', hit)); pos = m.end()
    out.append(body[pos:])
    return ''.join(out)

def gen(addr, outdir):
    F = lomdb.funcs(); f = F.get(addr)
    if not f: return 'REJECT nofunc'
    txt = lomdb.code_text(addr)
    if not txt or 'decompile failed' in txt: return 'REJECT nodecomp'
    if f.cc not in CC_OK: return 'REJECT cc:' + f.cc
    # v22: Ghidra 'custom storage' that is only the x87 ST0 return (float10 = long double, returned in ST0 by clang too)
    if f.custom and not ((f.proto or '').startswith('float10 ') and f.name != '__ftol'): return 'REJECT customstorage'
    if f.thunk:
        # internal `jmp FUN_x` thunk (MSVC incremental-link / ILT style): a forwarding function with the same ABI
        if f.thunk_target.startswith('EXTERNAL:'): return 'REJECT thunk'  # import stub: generated by the linker
        tname = f.thunk_target.split(':', 1)[1]
        ret, ps = lomdb.parse_proto(f.proto, f.name)
        if f.varargs or '...' in ps: return 'REJECT thunkVarargs'
        # v22k: thunk -> thunk chain (004e9d90 jmp 004e9da0 jmp 004e9cb0): call the IMMEDIATE jmp target
        _b = lomdb.read_va(addr, 5)
        if _b[0] == 0xe9:
            _t = (addr + 5 + int.from_bytes(_b[1:5], 'little', signed=True)) & 0xffffffff
            if F.get(_t) and (F[_t].thunk or tname == f.name): tname = '((%s (%s *)(%s))0x%08x)' % ('undefined4' if ret in ('undefined', 'void', 'undefined1', 'undefined2') else ret, f.cc, ', '.join(p_ for p_ in ps if p_.strip() != 'void') or 'void', _t)
        if ret in ('undefined', 'void', 'undefined1', 'undefined2'): ret = 'undefined4'
        names = [re.findall(r'(\w+)\s*(\[[^]]*\])?\s*$', p_)[0][0] for p_ in ps if p_.strip() != 'void']
        txt = '\n%s %s %s(%s)\n\n{\n  return (%s)%s(%s);\n}\n' % (ret, f.cc, f.name, ', '.join(ps) or 'void', ret, tname, ','.join(names))
    if f.name.startswith('Unwind@'): return 'REJECT unwindFunclet'
    if f.size < 5:
        # v23g: tiny fns followed by padding are hookable (hooksafe v3)
        import hooksafe as _hs
        if not _hs.safe(addr)[0]: return 'REJECT tooSmallToHook'
    if 'unaff_' in txt and '/*IC:' in txt:
        # v19: a callee-saved register pushed (saved) just before a virtual call reads as a trailing icall
        # argument `unaff_EDI` (0044eb60: push edi; mov edi,..; call [eax+0x38] = thiscall, 0 stack args). Drop it.
        txt = re.sub(r'(\(/\*IC:[0-9a-f]{8}\*/[^;]*?),\s*unaff_E(?:BX|SI|DI|BP)\)', r'\1)', txt)
    if 'unaff_' in txt:
        # same for calls to varargs callees (0053a090 debug printf): the saved register is not a real argument
        for va in VARARGS_CALLEES():
            txt = re.sub(r'(\bFUN_%s\([^;]*?),\s*unaff_E(?:BX|SI|DI|BP)\)' % va, r'\1)', txt)
        for r_ in set(re.findall(r'\bunaff_E(?:BX|SI|DI|BP)\b', txt)):
            if len(re.findall(r'\b%s\b' % r_, txt)) == 1: txt = re.sub(r'\n\s*\w+ %s;' % r_, '', txt)
        for r_ in set(re.findall(r'\bunaff_E(?:BX|SI|DI|BP)\b', txt)):
            if len(re.findall(r'\b%s\b' % r_, txt)) == 1: txt = re.sub(r'\n\s*\w+ %s;' % r_, '', txt)
    # v22g: extraout_EDX = whatever EDX a callee happened to leave (MSVC never relies on it unless the callee
    # returns 64-bit). Seen feeding unused_reg_1 (unused EDX slot of emulated thiscall+stack) or garbage high
    # dwords of undefined8 returns. Use 0; difftest stubs return hashed EDX so any REAL use still FAILs.
    if 'extraout_EDX' in txt:
        txt = re.sub(r'\n[ \t]*\w+ extraout_EDX(?:_\d+)?;', '', txt)
        txt = re.sub(r'\bextraout_EDX(?:_\d+)?\b', '0', txt)
    # v21: incoming EAX/EDX (in_EAX/in_EDX: register args or partial-register garbage returned in the upper bits)
    # are captured by a naked entry stub (inreg_wrap) -> exact incoming values; no other in_ registers allowed.
    inregs = sorted(set(re.findall(r'\bin_(E[AD]X)\b', txt)))
    _chk = re.sub(r'\bin_(E[AD]X)\b', r'INREG_\1', txt) if inregs else txt
    for p in REJECT_PATTERNS:
        if re.search(p, _chk): return 'REJECT pattern:' + p
    try:
        txt, _nbc = bitcast.apply(addr, txt)  # Ghidra float<->int bit reinterpretations -> __BC(T, x)
        txt = fix_concat_fcast(addr, f, txt)
    except ValueError as e:
        return 'REJECT bitcast:' + str(e)
    # v22j: a 1/2-byte-typed ('undefined'/'undefined2') global passed BARE as a call argument. Ghidra types the
    # global per-function from its narrow uses, but the push is a full dword load (push dword [g]); C would
    # zero-extend the narrow read (004476c0: FUN_004d05e0(this, DAT_005aa188 ...) callee uses param&0x100).
    _gn = {v[0]: v[1] for v in lomdb.globals_by_func().get(addr, {}).values() if v[1] in ('undefined', 'undefined1', 'undefined2') and v[0].startswith('DAT_')}
    if _gn:
        _kw = ('if', 'while', 'switch', 'return', 'for', 'sizeof')
        def _bare_arg(m):
            i = m.start(); dep = 0; j = i - 1
            while j >= 0:
                c = txt[j]
                if c == ')': dep += 1
                elif c == '(':
                    if dep == 0: break
                    dep -= 1
                elif c in ';{}' and dep == 0: return m.group(0)
                j -= 1
            if j < 0: return m.group(0)
            k = j - 1
            while k >= 0 and txt[k] == ' ': k -= 1
            w = re.search(r'(\w+)$', txt[:k + 1])
            if txt[k] == ')' or (w and w.group(1) not in _kw and not re.fullmatch(r'_*[A-Z0-9_]+', w.group(1)) and not txt[:k + 1].endswith('*')):
                return m.group(1) + '(*(uint *)&' + m.group(2) + ')' + m.group(3)
            return m.group(0)
        for _g in _gn:
            txt = re.sub(r'([(,])(%s)(\s*[,)])' % _g, _bare_arg, txt)
    # v22n: pointer-typed local holding float BITS: 'x = (T *)(float)...;' / 'x = (T *)((float)... * dbl);' is a
    # clang error (float->pointer). The original fstp's a dword float into the slot -> bit-cast.
    txt = re.sub(r'^(\s*[\w\[\]\.>-]+ = )\((\w+ \*)\)(\(*\((?:float|double)\).*);$',
                 lambda m: '%s(%s)__BC(uint, (float)(%s));' % (m.group(1), m.group(2), m.group(3)), txt, flags=re.M)
    # v22m: Ghidra '_X' = a WIDER (dword) access at local X's address (00478570: _uStack_10050 = CONCAT22(..)
    # where X is undefined2). '_X' is never declared -> (*(undefined4 *)&X).
    for _u in set(re.findall(r'(?<![\w.>])_([A-Za-z]\w*)\b', txt)):
        if re.search(r'\b_%s\s*[;\[]' % _u, txt) or re.search(r'\b_%s\s*\(' % _u, txt): continue
        if not re.search(r'^\s+[\w ]+[\s\*]%s(\[\w+\])?;' % _u, txt, re.M): continue
        txt = re.sub(r'(?<![\w.>])_%s\b' % _u, '(*(undefined4 *)&%s)' % _u, txt)
    # string symbols whose name keeps '<'/'>' from the text ("DDOBJECT->SetCooperativeLevel(..."): make them identifiers
    txt = re.sub(r'\b[su]_[\w<>]*[<>][\w<>]*_[0-9a-f]{8}\b', lambda m: m.group(0).replace('>', '_gt_').replace('<', '_lt_'), txt)
    body = txt.strip()
    if 'ExceptionList' in body:
        body = strip_seh(body)
        if body is None: return 'REJECT sehShape'
    # definition name -> rb_ADDR
    rb = 'rb_%08x' % addr
    hdr_end = body.index('{')
    head, rest = body[:hdr_end], body[hdr_end:]
    if f.name + '(' not in head: return 'REJECT header'
    head = head.replace(f.name + '(', rb + '(', 1)
    rest = re.sub(r'\b%s\b' % re.escape(f.name), rb, rest)
    if getattr(f, 'overridden', False):
        # replace Ghidra's guessed header with the override prototype (void __cdecl op_x(void *vm))
        ret, ps = lomdb.parse_proto(f.proto, f.name)
        head = '%s %s %s(%s)\n\n' % (ret, f.cc, rb, ', '.join(ps) or 'void')
        body = head + rest
        rest = rest
    if f.cc not in head:
        head = head.replace(rb + '(', f.cc + ' ' + rb + '(', 1)
    # callee-popped conventions: if the real `ret N` pops more than the decomp params, Ghidra dropped
    # unused trailing params -> add dummies so the stack purge matches.
    if f.cc in ('__stdcall', '__thiscall', '__fastcall') and f.purge < 0x10000:
        hp = head[head.index(rb + '(') + len(rb) + 1: head.rindex(')')]
        ps = lomdb.split_params(hp)
        pts = [lomdb.param_type(p) for p in ps]
        if f.cc == '__thiscall': pts = pts[1:]
        if f.cc == '__fastcall':
            k = 0
            while pts and k < 2 and lomdb.type_stack_size(pts[0]) == 4: pts = pts[1:]; k += 1
        have = sum(lomdb.type_stack_size(p) for p in pts)
        if f.purge > have and (f.purge - have) % 4 == 0 and '...' not in pts:
            extra = ['undefined4 %s_%d' % ('unused_pad' if re.search(r'\bunused_stack_%d\b' % (have + 4 * i), body) else 'unused_stack', have + 4 * i) for i in range((f.purge - have) // 4)]
            ps = [p for p in ps if p != 'void']
            if f.cc == '__fastcall':
                if any(lomdb.type_stack_size(lomdb.param_type(p)) != 4 for p in ps[:2]): return 'REJECT fastcallPadding'
                while len(ps) < 2: ps.append('undefined4 unused_reg_%d' % len(ps))
            newp = ', '.join(ps + extra)
            head = head[:head.index(rb + '(') + len(rb) + 1] + newp + head[head.rindex(')'):]
    # v22l: a param whose ADDRESS is taken exposes the following stack slots too (MSVC passes &param_2 for an
    # 8-byte (tag,value) pair = param_2,param_3). clang may keep later params in registers and drop their stores
    # (004d63f0: param_3 = value; FUN_004026a0(&param_2..) read the stale slot -> black map). Make the params
    # from the first address-taken one onward volatile: every write reaches its stack slot. ABI unchanged.
    _at = [int(x) for x in re.findall(r'&\s*\(?\s*_?param_(\d+)\b', rest)]
    if _at:
        hp = head[head.index(rb + '(') + len(rb) + 1: head.rindex(')')]
        ps = lomdb.split_params(hp); out = []
        for p_ in ps:
            m_ = re.search(r'\b_?param_(\d+)\b', p_)
            if m_ and int(m_.group(1)) >= min(_at) and 'volatile' not in p_ and '(' not in p_ and '[' not in p_:
                p_ = p_[:m_.start()] + 'volatile ' + p_[m_.start():]   # qualifies the param itself (T * volatile p)
            out.append(p_)
        head = head[:head.index(rb + '(') + len(rb) + 1] + ', '.join(out) + head[head.rindex(')'):]
    body = head + rest
    # Ghidra partial variable access  var._off_size_  ->  sized lvalue at byte offset
    PT = {1: 'uchar', 2: 'ushort', 4: 'uint', 8: 'ulonglong'}
    PTS = {1: 'char', 2: 'short', 4: 'int', 8: 'longlong'}
    def _part(m):
        sz = int(m.group(3))
        if sz == 3:
            # v22: 3-byte partial read -> byte-wise (no over-read); writes stay rejected
            if re.match(r'\s*(=(?!=)|\+=|-=|\|=|&=|\^=|\+\+|--)', m.string[m.end():]) or re.search(r'(\+\+|--|&)\s*$', m.string[:m.start()]):
                raise ValueError('partial3w')
            return '((uint)((uchar *)&%s + %s)[0] | (uint)((uchar *)&%s + %s)[1] << 8 | (uint)((uchar *)&%s + %s)[2] << 16)' % ((m.group(1), m.group(2)) * 3)
        if sz not in PT: raise ValueError('partial%d' % sz)
        return '(*(%s *)((uchar *)&%s + %s))' % (PT[sz], m.group(1), m.group(2))
    def _spart(m):
        # Ghidra prints INT_SEXT / signed INT2FLOAT of a partial as a cast to a signed/float type: the
        # partial must be read signed (e.g. movsx edx, word ptr [esp+0x1f] in 0040aeb0)
        sz = int(m.group(4))
        if sz not in PTS: raise ValueError('partial%d' % sz)
        return '%s(*(%s *)((uchar *)&%s + %s))' % (m.group(1), PTS[sz], m.group(2), m.group(3))
    try:
        body = re.sub(r'(\((?:int|short|char|longlong|float|double|float10)\))([A-Za-z_]\w*)\._(\d+)_(\d+)_', _spart, body)
        body = re.sub(r'\b([A-Za-z_]\w*)\._(\d+)_(\d+)_', _part, body)
    except ValueError as e:
        return 'REJECT ' + str(e)
    body = re.sub(r'\(uint3\)(\w+)', r'((uint)(\1) & 0xffffffu)', body)
    # v22: CONCAT31((int3)(x >> 8), b): only the low 24 bits of the first arg survive the <<8 -> plain (uint)
    body = re.sub(r'\bCONCAT31\(\((?:u?int3)\)', 'CONCAT31((uint)', body)
    if re.search(r'\buint3\b|\bint3\b', body): return 'REJECT uint3'
    try:
        body = re.sub(r'\bNAN\(', '__LOM_ISNAN(', body)   # v22p: Ghidra NaN operations=None export: NAN(x) test (x87 C0/C3 set when unordered)
        body = fix_nan(addr, f, body)
        body = fix_strlits(addr, f, body)
    except ValueError as e:
        return 'REJECT ' + str(e)
    if '/*IC:' in body:
        body = fix_icalls(body)
        if body is None: return 'REJECT icallShape'
    body = frame_locals(body, addr)
    if 'switch(' in body: body = float_switch(body)
    if 'switch(' in body:
        # v22d: switch on a pointer-typed variable/param (00547160 switch(param_1), DWORD *param_1) -> switch on its integer value
        for nm in set(re.findall(r'\bswitch\((\w+)\)', body)):
            if re.search(r'[\w\s]\*+\s*%s\s*[;,)]' % nm, body):
                body = body.replace('switch(%s)' % nm, 'switch((int)(%s))' % nm)
                body = re.sub(r'\bcase \(\w+ \*+\)(0x[0-9a-fA-F]+|\d+):', r'case \1:', body)
    _b = body[body.index('{') + 1: body.rindex('}')]
    if f.size > 8 and not [l for l in _b.split('\n') if l.strip() and l.strip() != 'return;']:
        return 'REJECT emptyBody'  # Ghidra lost the code (e.g. CRT asm returning in AX/EDX)
    names = set(IDENT.findall(body))
    byname = lomdb.by_name()
    defs = []; callees = []; SLOTP = []
    iat = lomdb.iat(); iatnames = {}
    for slot in iat_refs(f):
        iatnames.setdefault(iat[slot][1], []).append(slot)
    gmap = lomdb.globals_by_func().get(addr, {})
    _acc = [None]
    for n in sorted(names):
        if n == rb: continue
        if n.endswith('_exref') and n[:-6] in iatnames and len(iatnames[n[:-6]]) == 1:
            # Ghidra's <import>_exref = the IAT slot's value (the import's address), e.g. mov esi,[IAT]; call esi
            _s = iatnames[n[:-6]][0]
            defs.append('#define %s ((void *)*(unsigned *)0x%08x) /* IAT value of %s */' % (n, _s, n[:-6])); continue
        if n not in byname and n.startswith('FID_conflict_'):
            # Ghidra FID names 'FID_conflict:_x' print as 'FID_conflict__x' in C
            _fc = [v for k, v in byname.items() if k.replace(':', '_') == n]
            if len(_fc) == 1:
                m = callee_macro(_fc[0])
                if not m: return 'REJECT calleeCC:%s:%s' % (n, _fc[0].cc)
                defs.append(m.replace('#define %s ' % _fc[0].name, '#define %s ' % n, 1)); callees.append(_fc[0].addr); continue
        if n in iatnames:
            if len(iatnames[n]) != 1: return 'REJECT ambiguousImport:' + n
            slot = iatnames[n][0]; dll = iat[slot][0]
            defs.append(extern_macro(slot, dll, n)); continue
        if n == '__ftol':
            defs.append('#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */'); continue
        if n in byname:
            cf = byname[n]
            m = callee_macro(cf)
            if not m: return 'REJECT calleeCC:%s:%s' % (n, cf.cc)
            defs.append(m); callees.append(cf.addr); continue
        if n.startswith('LAB_') and not re.search(r'^\s*%s:' % n, body, re.M):
            defs.append('#define %s (*(undefined *)0x%s) /* code label used as address */' % (n, n[4:])); continue
        if n.startswith('switchD_') and not re.search(r'^\s*%s:' % n, body, re.M):
            return 'REJECT computedSwitch'
        m_ = re.match(r'^_(param_\d+)$', n)
        if m_:
            SLOTP.append(m_.group(1)); continue
        if re.match(r'^(LAB|switchD|caseD)_', n) or n.startswith('switchD_'): continue
        g = GLOB.match(n)
        if g and not n.startswith('param_') and not re.match(r'^[a-z]Var|^[a-z]+Stack|^local_|^auStack|^ac|^ab', n):
            ga = int(g.group(1), 16)
            if not (0x400000 <= ga < 0x5d9000): continue
            if 0x401000 <= ga < 0x54c600 and not n.startswith(('PTR_', 'DAT_', '_DAT_', 's_', 'u_')):
                continue
            info = gmap.get(ga)
            gt, gl = (info[1], info[2]) if info else ('undefined4', 4)
            if n.startswith('_') and not n.startswith(('_param_',)):
                # Ghidra '_' prefix: accessed with a different size than the symbol's type -> use the real
                # operand size of the original instruction(s) touching that address
                if _acc[0] is None: _acc[0] = abs_access(f)
                sz = _acc[0].get(ga)
                if not sz: return 'REJECT overlapGlobalNoAccess:' + n
                if len(sz) != 1 or next(iter(sz)) not in OVERLAP_T: return 'REJECT overlapGlobalSizes:' + n
                gt = OVERLAP_T[next(iter(sz))]; gl = next(iter(sz))[0]
            if re.search(r'(?<![&\w])%s\s*\[' % n, body) and not re.match(r'.*\[\d*\]$', gt) and gt != 'string':
                # v22d: subscripted scalar global. s_/u_ string symbol -> array at that address (00536ba0 s_1_0_7_0055d368[0]);
                # 4-byte DAT_ -> Ghidra uses the stored value as a pointer (00540c20 DAT_005d6a20[i*9])
                if n.startswith('s_'): gt = 'char['
                elif n.startswith('u_'): gt = 'ushort[1]'
                elif gt in ('undefined4', 'int', 'uint', 'dword', 'DWORD'): gt = gt + ' *'
            defs.append(global_decl(n, ga, gt, gl))
            continue
        if re.match(r'^(Ordinal_\d+|[A-Z][A-Za-z0-9]+[AW]?)$', n) and any(n == v[1] for v in iat.values()) and n not in iatnames:
            return 'REJECT importNotResolved:' + n
    # tail-call stubs `sub dword [abs32], imm; jmp target`: Ghidra drops the global update (4 fns, e.g. 0046ba80)
    _b = lomdb.read_va(addr, 16)
    if _b[1] == 0x2d and (_b[0] == 0x83 and _b[7] == 0xe9 or _b[0] == 0x81 and _b[10] == 0xe9):
        import struct as _st
        ga = _st.unpack('<I', _b[2:6])[0]
        imm = _b[6] if _b[0] == 0x83 else _st.unpack('<I', _b[6:10])[0]
        if _b[0] == 0x83 and imm >= 0x80: imm -= 0x100
        m_ = re.search(r'\{\s*\n', body)
        body = body[:m_.end()] + '  *(int *)0x%08x -= %d; /* original: sub dword ptr [0x%08x], 0x%x before the tail jump (Ghidra omitted) */\n' % (ga, imm, ga, imm & 0xffffffff) + body[m_.end():]
    for pn in SLOTP:
        # narrow (byte/short) param whose whole 4-byte stack slot the original reuses: declare the slot itself
        # (`*(uint *)&byte_param` writes 4 bytes into clang's 1-byte copy -> UB/stack corruption; 00496880).
        hi = body.index('rb_%08x(' % addr) + len('rb_%08x' % addr); he = _match(body, hi)
        hdr = body[hi:he]
        m2 = re.search(r'([(,]\s*)([A-Za-z_][\w ]*?\**)\s*\b%s\b' % pn, hdr)
        if not m2: return 'REJECT slotParam:' + pn
        ptype = m2.group(2).strip()
        hdr = hdr[:m2.start()] + m2.group(1) + 'uint _%s' % pn + hdr[m2.end():]
        body = body[:hi] + hdr + body[he:]
        defs.append('#define %s (*(%s *)&_%s) /* narrow view of the full 4-byte param slot _%s (Ghidra) */' % (pn, ptype, pn, pn))
    # v21: Ghidra `uRam0000001c` = absolute low-address global (null-page access) -> explicit pointer deref
    for nm, ad in sorted(set(re.findall(r'\b((?:u|i)Ram([0-9a-f]{8}))\b', body))):
        defs.append('#define %s (*(volatile %s *)0x%s)' % (nm, 'undefined4' if nm[0] == 'u' else 'int', ad))
    defs_txt = '\n'.join(defs)
    if re.search(r'\b(float|double)\b', body + defs_txt) and not has_x87(f) and not re.search(r'\b\d+\.\d*(e[-+]?\d+)?\b|\b\d+e[-+]?\d+\b', body):
        # Original has no x87 instruction: every Ghidra `float`/`double` here is only a 4/8-byte bit container
        # (GS VM value unions, pointers mistyped via a float-typed callee param...). In C, float<->int casts
        # and assignments convert numerically; the original copies bits. Use integer containers instead.
        body = re.sub(r'\bfloat\b', 'undefined4', body); body = re.sub(r'\bdouble\b', 'undefined8', body)
        defs = [re.sub(r'\bdouble\b', 'undefined8', re.sub(r'\bfloat\b', 'undefined4', d)) for d in defs]
    # (float)<double global> as an operand of an arithmetic/compare operator: the original uses the double as an
    # x87 qword memory operand (fcomp/fmul/... qword ptr [DAT]) - no float rounding of the constant (0041ee00).
    dbl = set(re.findall(r'#define (_?DAT_[0-9a-f]+) \(\*\(double \*\)', '\n'.join(defs)))
    if dbl:
        pat = '|'.join(sorted(dbl))
        def _dl(ln):
            # a line whose value goes through __BC (bit cast) must keep its float type: an uncast double would
            # make the expression double and __BC would copy the wrong bytes (0046ad20, 004e0e20) -> keep the cast
            if '__BC(' in ln: return ln
            ln = re.sub(r'(?<=[<>=!+\-*/] )\(float\)(%s)\b' % pat, r'\1', ln)
            return re.sub(r'\(float\)(%s)(?= [<>=!+\-*/])' % pat, r'\1', ln)
        body = '\n'.join(_dl(ln) for ln in body.split('\n'))
    pre = []
    if inregs:
        r_ = inreg_wrap(addr, body, inregs)
        if r_ is None: return 'REJECT inregShape'
        pre, body = r_
    src = ['/* Rebuilt from lomse.exe %s @ 0x%08x (%d bytes, %s).' % (f.name, addr, f.size, f.cc),
           ' * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */',
           '#include "lom.h"', ''] + (['/* register-held (not in _fr, see gen.py regvar_locals): %s */' % ' '.join(REGVARS[addr])] if addr in REGVARS else []) + defs + pre + ['', '#define LOM_SELF_%08x 1' % addr, body, '']
    src = fix_denormal_int_cmp(fix_undef4_signed_cmp(f, fix_bytederef_calls('\n'.join(src)))).split('\n')
    open(os.path.join(outdir, '%08x.c' % addr), 'w').write('\n'.join(src))
    return 'OK callees=%d' % len(callees) + (' regvars=' + ','.join(REGVARS[addr]) if addr in REGVARS else '')

if __name__ == '__main__':
    outdir = os.path.join(lomdb.ROOT, 'src', 'gen')
    os.makedirs(outdir, exist_ok=True)
    args = sys.argv[1:]
    if args and args[0] == '--all-small':
        lim = int(args[1]); args = ['%08x' % a for a, f in sorted(lomdb.funcs().items()) if f.size <= lim]
    for a in args:
        r = gen(int(a, 16), outdir)
        if r.startswith('REJECT'):
            # never test/promote a stale earlier version of a now-rejected function (kept, not deleted)
            p = os.path.join(outdir, '%08x.c' % int(a, 16))
            if os.path.exists(p):
                d = p + '_stale'; k = 0
                while os.path.exists(d): k += 1; d = p + '_stale%d' % k
                os.replace(p, d)
        print('%s %s' % (a, r))
