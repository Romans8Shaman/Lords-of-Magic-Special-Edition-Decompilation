#!/usr/bin/env python3
"""lint_fcast.py [dir] : explicit C casts float-var -> integer type in src/<dir>/*.c whose original function has fewer
float->int conversion instructions (__ftol call / fist / fistp) than such casts: likely bit-reinterpretation that C
would do numerically (class of the SUB41(fVar,0) bug)."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
d = sys.argv[1] if len(sys.argv) > 1 else 'fn'
F = lomdb.funcs(); md = Cs(CS_ARCH_X86, CS_MODE_32)
INT = r'(?:int|uint|char|uchar|byte|short|ushort|undefined4|undefined2|undefined1|undefined|dword|word|longlong|ulonglong|bool|BOOL|DWORD|LONG|int \*|void \*)'
for fn in sorted(os.listdir(os.path.join(lomdb.ROOT, 'src', d))):
    if not fn.endswith('.c'): continue
    s = open(os.path.join(lomdb.ROOT, 'src', d, fn)).read()
    fv = set(re.findall(r'\bfloat\s+(\w+);', s)) | set(re.findall(r'typedef float _t_(\w+);', s))
    if not fv: continue
    pat = r'\(\s*%s\s*\)\s*\(?\s*(%s)\b(?!\s*[\[.(]|\s*->)' % (INT, '|'.join(sorted(fv)))
    casts = re.findall(pat, s)
    if not casts: continue
    a = int(fn[:8], 16); f = F.get(a)
    n = 0
    for i in md.disasm(lomdb.read_va(a, f.size), a):
        if i.mnemonic.startswith('fist') or (i.mnemonic == 'call' and i.op_str == '0x5394a0'): n += 1
    if len(casts) > n: print('%s casts=%d conv=%d vars=%s' % (fn[:8], len(casts), n, ','.join(sorted(set(casts)))))
