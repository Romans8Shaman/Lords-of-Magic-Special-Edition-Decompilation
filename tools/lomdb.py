"""Shared metadata for the lomse.exe rebuild tools (reads rebuild/ghidra_out + the exe)."""
import os, re, csv, functools
import pefile
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GO = os.environ.get('LOM_GO') or os.path.join(ROOT, 'ghidra_out')
EXE = '/workspace/lom_project/bin/lomse.exe' if os.path.exists('/workspace/lom_project/bin/lomse.exe') else '/workspace/lom_project/game/LoM/English/lomse.exe'
BASE = 0x400000

class Func:
    __slots__ = ('overridden','addr','name','cc','purge','varargs','thunk','thunk_target','custom','size','maxaddr','proto')

@functools.lru_cache(None)
def funcs():
    d = {}
    for line in open(os.path.join(GO, 'funcs.tsv')):
        p = line.rstrip('\n').split('\t')
        f = Func(); f.addr = int(p[0], 16); f.name = p[1]; f.cc = p[2]; f.purge = int(p[3])
        f.varargs = p[4] == 'true'; f.thunk = p[5] == 'true'; f.thunk_target = p[6]; f.custom = p[7] == 'true'
        f.size = int(p[8]); f.maxaddr = int(p[9], 16); f.proto = p[10]
        d[f.addr] = f
    ov = os.path.join(GO, 'overrides.tsv')
    if os.path.exists(ov):
        for line in open(ov):
            if not line.strip(): continue
            a, cc, purge, proto = line.rstrip('\n').split('\t')
            f = d[int(a, 16)]; f.cc = cc; f.purge = int(purge); f.proto = proto; f.overridden = True
    # NEXT_PHASE step 5: local extent fixes + drop Ghidra false starts / mid-labels.
    # Do not edit the Ghidra export; these files are the rebuild's own bookkeeping.
    ext = os.path.join(ROOT, 'src', 'fn', 'FUNCS_EXTENT.tsv')
    if os.path.exists(ext):
        for line in open(ext):
            if not line.strip() or line.startswith('#'): continue
            pth = line.rstrip('\n').split('\t')
            a, mx = int(pth[0], 16), int(pth[1], 16)
            if a in d:
                d[a].maxaddr = mx
                d[a].size = mx - a + 1
                d[a].overridden = True
    notfn = os.path.join(ROOT, 'src', 'fn', 'NOTFN.tsv')
    if os.path.exists(notfn):
        for line in open(notfn):
            if not line.strip() or line.startswith('#'): continue
            a = int(line.split()[0], 16)
            d.pop(a, None)
    return d

@functools.lru_cache(None)
def by_name():
    return {f.name: f for f in funcs().values()}

@functools.lru_cache(None)
def globals_by_func():
    d = {}
    for line in open(os.path.join(GO, 'globals.tsv')):
        p = line.rstrip('\n').split('\t')
        if len(p) < 5 or not p[2]: continue
        try: a = int(p[2], 16)
        except ValueError: continue
        d.setdefault(int(p[0], 16), {})[a] = (p[1], p[3], int(p[4]))
    return d

@functools.lru_cache(None)
def externals():
    d = {}
    for line in open(os.path.join(GO, 'externals.tsv')):
        p = line.rstrip('\n').split('\t')
        d[(p[1].upper(), p[0])] = dict(name=p[0], lib=p[1].upper(), cc=p[3], purge=int(p[4]), varargs=p[5]=='true', proto=p[6])
    return d

@functools.lru_cache(None)
def pe():
    return pefile.PE(EXE)

@functools.lru_cache(None)
def iat():
    """IAT slot address -> (DLL upper, ghidra-style name)"""
    m = {}
    for d in pe().DIRECTORY_ENTRY_IMPORT:
        dll = d.dll.decode().upper()
        for i in d.imports:
            nm = i.name.decode() if i.name else 'Ordinal_%d' % i.ordinal
            m[i.address] = (dll, nm)
    return m

def read_va(va, n):
    p = pe()
    return p.get_data(va - BASE, n)

@functools.lru_cache(None)
def code_text(addr):
    fn = os.path.join(GO, 'code', '%08x.c' % addr)
    return open(fn).read() if os.path.exists(fn) else None

def split_params(s):
    s = s.strip()
    if s in ('', 'void'): return []
    out, depth, cur = [], 0, ''
    for ch in s:
        if ch == '(' : depth += 1
        if ch == ')' : depth -= 1
        if ch == ',' and depth == 0: out.append(cur.strip()); cur = ''
        else: cur += ch
    if cur.strip(): out.append(cur.strip())
    return out

def parse_proto(proto, name):
    i = proto.index(name + '(')
    ret = proto[:i].strip()
    params = split_params(proto[i+len(name)+1: proto.rindex(')')])
    return ret, params

def param_type(p):
    """'int * param_1' -> 'int *'; '...' -> '...'"""
    if p == '...': return p
    m = re.match(r'^(.*?)([A-Za-z_][A-Za-z0-9_]*)$', p)
    if not m: return p
    t = m.group(1).strip()
    return t if t else p

TYPE_SIZE = {'double':8,'longlong':8,'ulonglong':8,'undefined8':8,'float10':12,'qword':8,'POINT':8,'FILETIME':8}
def type_stack_size(t):
    t = t.strip()
    if t.endswith('*'): return 4
    return max(4, (TYPE_SIZE.get(t, 4) + 3) & ~3)
