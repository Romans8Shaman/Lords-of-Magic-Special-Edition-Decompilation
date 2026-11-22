#!/usr/bin/env python3
"""build_harness.py LISTFILE [dir]: build build/harness/smackw32.dll containing the rebuilt functions listed
(one hex address per line) from src/<dir>, with counting thunks and hook table."""
import sys, os, re, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from cc import CC, CFLAGS
ROOT = lomdb.ROOT
def main(listfile, d='gen'):
    # LISTFILE lines: ADDR [DIR]  (DIR overrides the default src dir, e.g. 'asm' for the EH funclets)
    ent = [l.split() for l in open(listfile) if l.strip() and not l.startswith('#')]
    addrs = [int(e[0], 16) for e in ent]; dirs = {int(e[0], 16): (e[1] if len(e) > 1 else d) for e in ent}
    out = os.path.join(ROOT, 'build', 'harness'); os.makedirs(out, exist_ok=True)
    decls, objs = [], []
    for a in addrs:
        src = open(os.path.join(ROOT, 'src', dirs[a], '%08x.c' % a)).read()
        body = src[src.index('#define LOM_SELF_'):].split('\n', 1)[1]
        # Template-generated EH funclets (NEXT_PHASE step 3) expand from include/eh_funclet.h
        # macros, so the .c file may have no brace / no rb_* token. Fall back to a naked decl.
        if '{' in body and ('rb_%08x' % a) in body:
            hdr = body[:body.index('{')].strip()
            if ('rb_%08x' % a) not in hdr:  # helper fns before the definition (g204)
                _m = re.search(r'\brb_%08x\s*\(' % a, body)
                _ls = body.rfind('\n', 0, _m.start()) + 1
                if not body[_ls:_m.start()].strip(): _ls = body.rfind('\n', 0, _ls - 1) + 1
                hdr = body[_ls:body.index('{', _m.start())].strip()
        else:
            hdr = '__attribute__((naked)) void rb_%08x(void)' % a
        decls.append(hdr + ';')
        objs.append(os.path.join(ROOT, 'build', 'obj', dirs[a], '%08x.o' % a))
    g = ['#include "lom.h"', 'struct lom_hook { unsigned orig; unsigned char expect[5]; };'] + decls
    g.append('const int lom_nhooks = %d;' % len(addrs))
    g.append('volatile long lom_hits[%d];' % max(1, len(addrs)))
    g.append('void *lom_targets[%d] = {%s};' % (max(1, len(addrs)), ', '.join('(void *)rb_%08x' % a for a in addrs) or '0'))
    g.append('const struct lom_hook lom_hooks[%d] = {' % max(1, len(addrs)))
    for a in addrs:
        b = lomdb.read_va(a, 5)
        g.append('  {0x%08x, {%s}},' % (a, ', '.join('0x%02x' % x for x in b)))
    g.append('};')
    asm = ['__asm__(".text\\n"']
    for i in range(len(addrs)):
        asm.append('"_lom_thunk_%d: lock incl _lom_hits+%d\\n jmp *_lom_targets+%d\\n"' % (i, 4 * i, 4 * i))
    asm.append(');')
    g += asm
    g.append('void lom_thunk_%s(void);' % 'x')
    g += ['extern void lom_thunk_%d(void);' % i for i in range(len(addrs))]
    g.append('void *lom_thunks[%d] = {%s};' % (max(1, len(addrs)), ', '.join('(void *)lom_thunk_%d' % i for i in range(len(addrs))) or '0'))
    gen_c = os.path.join(out, 'hooks_gen.c'); open(gen_c, 'w').write('\n'.join(g) + '\n')
    subprocess.run([CC] + CFLAGS + ['-c', gen_c, '-o', gen_c[:-2] + '.o'], check=True)
    hook_o = os.path.join(out, 'hook.o')
    subprocess.run([CC, '-O2', '-c', os.path.join(ROOT, 'harness', 'hook.c'), '-o', hook_o], check=True)
    dll = os.path.join(out, 'smackw32.dll')
    subprocess.run([CC, '-shared', '-o', dll, hook_o, gen_c[:-2] + '.o'] + objs +
                   [os.path.join(ROOT, 'harness', 'smackw32.def'), '-Wl,--image-base=0x10000000', '-Wl,--disable-dynamicbase',
                    '-Wl,--no-insert-timestamp', '-Wl,--build-id=none',
                    '-static-libgcc', '-Wl,--enable-stdcall-fixup'], check=True)
    print('built %s with %d hooks' % (dll, len(addrs)))
if __name__ == '__main__':
    main(*sys.argv[1:])
