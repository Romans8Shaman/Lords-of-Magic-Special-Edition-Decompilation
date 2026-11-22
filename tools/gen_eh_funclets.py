#!/usr/bin/env python3
"""gen_eh_funclets.py : write the 618 MSVC EH unwind funclets in src/asm/<addr>.c from six naked-C templates
(include/eh_funclet.h). Called with EBP = the parent frame; no prologue. Call/jmp targets go through the
existing _lom_fl_<addr>_0 absolute slots so check_funclets.py (asm-eq) still applies.

Also writes build/eh_funclets/params.tsv for the native parent-EBP test.

Prints ADDR OK|REJECT. Use --list FILE to restrict addresses (hex, one per line or first column)."""
import os, sys, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32, CS_OPT_SYNTAX_ATT
R = lomdb.ROOT
OUT = os.path.join(R, 'build', 'eh_funclets')
md = Cs(CS_ARCH_X86, CS_MODE_32); md.syntax = CS_OPT_SYNTAX_ATT; md.detail = True

def imm_of(op):
    m = re.fullmatch(r'\$?(0x[0-9a-fA-F]+|-?[0-9]+)', op.strip())
    if not m:
        return None
    t = m.group(1)
    return int(t, 16) if t.startswith('0x') or t.startswith('-0x') else int(t)

def mem_ebp_off(op):
    # -0x10(%ebp) or 0x10(%ebp) or (%ebp)
    m = re.fullmatch(r'(-?0x[0-9a-fA-F]+|-?[0-9]+)\(%ebp\)', op.strip())
    if m: return m.group(1)
    if op.strip() == '(%ebp)': return '0'
    return None

def target(ins):
    if ins.op_str.startswith('0x'):
        return int(ins.op_str, 16)
    return None

def classify(ins):
    ops = [i.mnemonic + ' ' + i.op_str for i in ins]
    n = len(ins)
    if n == 2 and ins[0].mnemonic == 'leal' and ins[1].mnemonic in ('jmp', 'jmpl'):
        off = mem_ebp_off(ins[0].op_str.split(',')[0].strip()) if ',' in ins[0].op_str else None
        # leal -0x58(%ebp), %ecx
        parts = [p.strip() for p in ins[0].op_str.split(',')]
        if off is None and parts: off = mem_ebp_off(parts[0])
        if off is not None and parts[-1] == '%ecx' and target(ins[1]) is not None:
            return ('thiscall_dtor_jmp_lea', {'ebp_off': off, 'dtor': target(ins[1])})
    if n == 2 and ins[0].mnemonic == 'movl' and ins[1].mnemonic in ('jmp', 'jmpl'):
        parts = [p.strip() for p in ins[0].op_str.split(',')]
        off = mem_ebp_off(parts[0]) if parts else None
        if off is not None and parts[-1] == '%ecx' and target(ins[1]) is not None:
            return ('thiscall_dtor_jmp_ecx', {'ebp_off': off, 'dtor': target(ins[1])})
    if n == 3 and ins[0].mnemonic == 'movl' and ins[1].mnemonic == 'addl' and ins[2].mnemonic in ('jmp', 'jmpl'):
        parts = [p.strip() for p in ins[0].op_str.split(',')]
        off = mem_ebp_off(parts[0]) if parts else None
        addp = [p.strip() for p in ins[1].op_str.split(',')]
        add = addp[0][1:] if addp and addp[0].startswith('$') else None  # strip $
        if off is not None and parts[-1] == '%ecx' and add and addp[-1] == '%ecx' and target(ins[2]) is not None:
            return ('thiscall_dtor_jmp_ecx_add', {'ebp_off': off, 'add_off': add, 'dtor': target(ins[2])})
    if n == 5 and ins[0].mnemonic == 'movl' and ins[1].mnemonic == 'pushl' and ins[2].mnemonic in ('call', 'calll') \
            and ins[3].mnemonic in ('popl',) and ins[4].mnemonic in ('ret', 'retl'):
        parts = [p.strip() for p in ins[0].op_str.split(',')]
        off = mem_ebp_off(parts[0]) if parts else None
        if off is not None and parts[-1] == '%eax' and ins[1].op_str.strip() == '%eax' and target(ins[2]) is not None \
                and ins[3].op_str.strip() == '%ecx':
            return ('cdecl_dtor_local', {'ebp_off': off, 'dtor': target(ins[2])})
    if n == 8 and ins[0].mnemonic == 'pushl' and ins[1].mnemonic == 'pushl' and ins[2].mnemonic == 'pushl' \
            and ins[3].mnemonic == 'movl' and ins[4].mnemonic == 'addl' and ins[5].mnemonic == 'pushl' \
            and ins[6].mnemonic in ('call', 'calll') and ins[7].mnemonic in ('ret', 'retl'):
        elem = ins[0].op_str.strip()[1:] if ins[0].op_str.strip().startswith('$') else None
        count = ins[1].op_str.strip()[1:] if ins[1].op_str.strip().startswith('$') else None
        size = ins[2].op_str.strip()[1:] if ins[2].op_str.strip().startswith('$') else None
        parts = [p.strip() for p in ins[3].op_str.split(',')]
        off = mem_ebp_off(parts[0]) if parts else None
        addp = [p.strip() for p in ins[4].op_str.split(',')]
        add = addp[0][1:] if addp and addp[0].startswith('$') else None
        if elem and count and size and off is not None and add and parts[-1] == '%eax' \
                and ins[5].op_str.strip() == '%eax' and target(ins[6]) is not None:
            return ('ehvec_dtor_subobject', {
                'ebp_off': off, 'add_off': add, 'elem_dtor': elem, 'count': count, 'size': size,
                'vec_dtor': target(ins[6])})
    if n == 7 and ins[0].mnemonic == 'pushl' and ins[1].mnemonic == 'pushl' and ins[2].mnemonic == 'pushl' \
            and ins[3].mnemonic == 'leal' and ins[4].mnemonic == 'pushl' \
            and ins[5].mnemonic in ('call', 'calll') and ins[6].mnemonic in ('ret', 'retl'):
        elem = ins[0].op_str.strip()[1:] if ins[0].op_str.strip().startswith('$') else None
        count = ins[1].op_str.strip()[1:] if ins[1].op_str.strip().startswith('$') else None
        size = ins[2].op_str.strip()[1:] if ins[2].op_str.strip().startswith('$') else None
        parts = [p.strip() for p in ins[3].op_str.split(',')]
        off = mem_ebp_off(parts[0]) if parts else None
        if elem and count and size and off is not None and parts[-1] == '%eax' \
                and ins[4].op_str.strip() == '%eax' and target(ins[5]) is not None:
            return ('ehvec_dtor_lea_local', {
                'ebp_off': off, 'elem_dtor': elem, 'count': count, 'size': size, 'vec_dtor': target(ins[5])})
    return None

MACRO = {
    'thiscall_dtor_jmp_lea': 'EH_THISCALL_DTOR_JMP_LEA({addr}, {ebp_off}, 0x{dtor:08x})',
    'thiscall_dtor_jmp_ecx': 'EH_THISCALL_DTOR_JMP_ECX({addr}, {ebp_off}, 0x{dtor:08x})',
    'thiscall_dtor_jmp_ecx_add': 'EH_THISCALL_DTOR_JMP_ECX_ADD({addr}, {ebp_off}, {add_off}, 0x{dtor:08x})',
    'cdecl_dtor_local': 'EH_CDECL_DTOR_LOCAL({addr}, {ebp_off}, 0x{dtor:08x})',
    'ehvec_dtor_subobject': 'EH_EHVEC_DTOR_SUBOBJECT({addr}, {ebp_off}, {add_off}, {elem_dtor}, {count}, {size}, 0x{vec_dtor:08x})',
    'ehvec_dtor_lea_local': 'EH_EHVEC_DTOR_LEA_LOCAL({addr}, {ebp_off}, {elem_dtor}, {count}, {size}, 0x{vec_dtor:08x})',
}

def emit(a, f, kind, p):
    p = dict(p)
    p['addr'] = '%08x' % a
    body = MACRO[kind].format(**p)
    s = [
        '/* MSVC EH unwind funclet %s (called by __CxxFrameHandler with EBP = the parent frame).' % f.name,
        ' * Template: %s. Naked C via include/eh_funclet.h; targets via absolute slots. */' % kind,
        '#include "lom.h"',
        '#include "eh_funclet.h"',
        '#define LOM_SELF_%08x 1' % a,
        body,
        '',
    ]
    open(os.path.join(R, 'src', 'asm', '%08x.c' % a), 'w').write('\n'.join(s))

def params_row(a, kind, p, size):
    def hx(k, default='0'):
        if k not in p: return default
        v = p[k]
        if isinstance(v, int): return '0x%x' % v
        return v if str(v).startswith('0x') or str(v).startswith('-') or re.fullmatch(r'-?[0-9]+', str(v)) else v
    return '%08x\t%s\t%d\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n' % (
        a, kind, size, hx('ebp_off'), hx('add_off', '0'),
        '0x%x' % p['dtor'] if 'dtor' in p else '0',
        hx('elem_dtor', '0'), hx('count', '0'), hx('size', '0'),
        '0x%x' % p['vec_dtor'] if 'vec_dtor' in p else '0')

def gen(a, f):
    code = lomdb.read_va(a, f.size)
    ins = list(md.disasm(code, a))
    if sum(i.size for i in ins) != f.size:
        return 'REJECT disasmSize', None
    got = classify(ins)
    if not got:
        return 'REJECT unclassified:%s' % (' ; '.join(i.mnemonic + ' ' + i.op_str for i in ins)[:200],), None
    kind, p = got
    emit(a, f, kind, p)
    return 'OK %s' % kind, (kind, p, f.size)

if __name__ == '__main__':
    want = set()
    argv = sys.argv[1:]
    if '--list' in argv:
        i = argv.index('--list')
        want = {x.split()[0] for x in open(argv[i + 1]) if x.strip() and not x.startswith('#')}
        del argv[i:i + 2]
    want |= set(argv)
    os.makedirs(OUT, exist_ok=True)
    F = lomdb.funcs()
    rows = []
    n = {'OK': 0, 'REJECT': 0}
    for a, f in sorted(F.items()):
        if not f.name.startswith('Unwind@'):
            continue
        if want and '%08x' % a not in want:
            continue
        msg, rec = gen(a, f)
        print('%08x %s' % (a, msg))
        n['OK' if msg.startswith('OK') else 'REJECT'] += 1
        if rec:
            kind, p, size = rec
            rows.append(params_row(a, kind, p, size))
    if not want:
        with open(os.path.join(OUT, 'params.tsv'), 'w') as out:
            out.write('addr\tpattern\tsize\tebp_off\tadd_off\tdtor\telem_dtor\tcount\tsize_arg\tvec_dtor\n')
            out.writelines(rows)
    print(n, 'params', len(rows))
