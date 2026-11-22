#!/usr/bin/env python3
"""gen_import_thunks.py : write the 33 .text jmp*IAT thunks in src/asm/<addr>.c from src/imports/thunks.tsv.

Each thunk is a named import (`jmp *__imp_<DLL>_<symbol>` with `.set` to the vanilla lomse IAT VA) so the
import table is the source of truth. Encoding stays the original 6-byte `ff 25 <iat>` (absolute, no reloc)
because the harness runs inside lomse.exe and must use *that* IAT, and standalone still copies the vanilla
import directory. A linker-emitted IAT at 0x0054d000 is NEXT_PHASE step 8.

Prints ADDR OK|REJECT."""
import os, sys
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
R = lomdb.ROOT
THUNKS = os.path.join(R, 'src', 'imports', 'thunks.tsv')

def dll_stem(dll):
    return dll.split('.')[0].upper()

def imp_name(dll, sym):
    return '__imp_%s_%s' % (dll_stem(dll), sym)

def gen(addr, size, iat, dll, sym):
    name = imp_name(dll, sym)
    s = [
        '/* %s: linker import thunk for %s!%s.' % (sym, dll, sym),
        ' * IAT slot 0x%08x; named via .set so the encoding stays jmp *0x%08x (original 6 bytes).' % (iat, iat),
        ' * Must target lomse.exe\'s IAT, not a harness-DLL import. */',
        '#include "lom.h"',
        '#define LOM_SELF_%08x 1' % addr,
        '__attribute__((naked)) void rb_%08x(void)' % addr,
        '{',
        '  __asm__(',
        '    "jmp *%s\\n"' % name,
        '  );',
        '}',
        '__asm__(".set %s, 0x%08x\\n");' % (name, iat),
        '',
    ]
    path = os.path.join(R, 'src', 'asm', '%08x.c' % addr)
    open(path, 'w').write('\n'.join(s))
    return 'OK %s!%s iat=0x%08x' % (dll, sym, iat)

def load():
    rows = []
    for l in open(THUNKS):
        if not l.strip() or l.startswith('addr'): continue
        a, sz, iat, dll, sym = l.strip().split('\t')
        rows.append((int(a, 16), int(sz), int(iat, 16), dll, sym))
    return rows

if __name__ == '__main__':
    want = set(sys.argv[1:])
    for addr, size, iat, dll, sym in load():
        if want and '%08x' % addr not in want: continue
        print('%08x %s' % (addr, gen(addr, size, iat, dll, sym)))
