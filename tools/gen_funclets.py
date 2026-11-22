#!/usr/bin/env python3
"""gen_funclets.py : MSVC C++ EH unwind funclets (Unwind@xxxxxxxx, 618 fns) -> src/asm/<addr>.c as naked functions
with the same instruction sequence (GNU asm, AT&T). Branch/call targets in lomse.exe are reached through a
per-file absolute-address dword (jmp/call *slot) so the code is position-independent of the DLL base and
clobbers no register. Verified by tools/check_funclets.py (instruction-sequence equality after assembling).
Prints ADDR OK|REJECT reason."""
import sys, os, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OPT_SYNTAX_ATT
R = lomdb.ROOT
md = Cs(CS_ARCH_X86, CS_MODE_32); md.syntax = CS_OPT_SYNTAX_ATT; md.detail = True
def gen(a, f):
    code = lomdb.read_va(a, f.size)
    ins = list(md.disasm(code, a))
    if sum(i.size for i in ins) != f.size: return 'REJECT disasmSize'
    lines, slots = [], []
    for i in ins:
        if i.mnemonic in ('jmp', 'call', 'jmpl', 'calll') and i.op_str.startswith('0x'):
            t = int(i.op_str, 16)
            if a <= t < a + f.size: return 'REJECT innerBranch'
            slots.append(t); lines.append('%s *_lom_fl_%08x_%d' % ({'calll': 'call', 'jmpl': 'jmp'}.get(i.mnemonic, i.mnemonic), a, len(slots) - 1))
        elif i.mnemonic in ('jmpl', 'jmp') and re.fullmatch(r'\*0x[0-9a-f]+', i.op_str):
            lines.append('jmp %s' % i.op_str)   # import thunk: jmp [IAT slot] (absolute, byte-identical)
        elif i.mnemonic.startswith('j') or 'call' in i.mnemonic: return 'REJECT branch:' + i.mnemonic
        else:
            if re.search(r'\b0x4[0-9a-f]{5}\b', i.op_str) and '(' not in i.op_str and not i.op_str.startswith('$'):
                return 'REJECT absmem'
            lines.append('%s %s' % (i.mnemonic, i.op_str))
    if ins[-1].mnemonic not in ('ret', 'retl', 'jmp', 'jmpl') : return 'REJECT noTerminator'
    s = [('/* MSVC EH unwind funclet %s (called by __CxxFrameHandler with EBP = the parent frame).' if f.name.startswith('Unwind@')
          else '/* %s: linker import thunk / asm-only function.') % f.name,
         ' * Assembly source: same instruction sequence as the original; targets via absolute slots. */',
         '#include "lom.h"', '#define LOM_SELF_%08x 1' % a,
         '__attribute__((naked)) void rb_%08x(void)' % a, '{', '  __asm__(']
    s += ['    "%s\\n"' % l for l in lines]
    s += ['  );', '}']
    if slots:
        s += ['__asm__(".data\\n"'] + ['  "_lom_fl_%08x_%d: .long 0x%08x\\n"' % (a, k, t) for k, t in enumerate(slots)] + ['  ".text\\n");']
    open(os.path.join(R, 'src', 'asm', '%08x.c' % a), 'w').write('\n'.join(s) + '\n')
    return 'OK'
if __name__ == '__main__':
    F = lomdb.funcs(); extra = set()
    if '--list' in sys.argv:  # extra non-funclet addresses (e.g. import thunks)
        extra = {int(l.split()[0], 16) for l in open(sys.argv[sys.argv.index('--list') + 1]) if l.strip()}
        sys.argv[sys.argv.index('--list'):sys.argv.index('--list') + 2] = []
    for a, f in sorted(F.items()):
        if (f.name.startswith('Unwind@') or a in extra) and (len(sys.argv) < 2 or '%08x' % a in sys.argv[1:]):
            print('%08x %s' % (a, gen(a, f)))
