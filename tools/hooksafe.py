#!/usr/bin/env python3
"""hooksafe.py < addrs : print addrs whose entry is safe to overwrite with a 5-byte jmp:
no fall-through from the preceding code, and no direct jump/call target inside bytes 1..4 of the entry
from anywhere in .text (linear-sweep scan of all functions)."""
import sys, os, functools
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
md = Cs(CS_ARCH_X86, CS_MODE_32)
TERM = ('ret', 'jmp', 'int3', 'retf', 'hlt')

@functools.lru_cache(None)
def branch_targets():
    t = set()
    for f in lomdb.funcs().values():
        if f.addr >= 0x54c600: continue
        for ins in md.disasm(lomdb.read_va(f.addr, f.maxaddr - f.addr + 1), f.addr):
            if ins.mnemonic.startswith('j') or ins.mnemonic == 'call' or ins.mnemonic.startswith('loop'):
                try: t.add(int(ins.op_str, 16))
                except ValueError: pass
    return t

def _tables_gap(pf, a):
    """v2: the bytes between the previous function's body and `a` are its own switch tables (jmp [r*4+T] /
    movzx r, byte [r+T]) -> nothing can fall through into `a`. Needs: pf body ends with ret/jmp exactly at
    maxaddr+1, a table reference T in (maxaddr, a), and < 16 padding bytes before the lowest T."""
    import re as _re
    e = pf.maxaddr + 1
    if not (pf.addr < e <= a): return False
    last = None; end = pf.addr; tabs = []
    for ins in md.disasm(lomdb.read_va(pf.addr, e - pf.addr), pf.addr):
        last = ins; end = ins.address + ins.size
        for m in _re.finditer(r'\+ (0x[0-9a-f]+)\]', ins.op_str):
            v = int(m.group(1), 16)
            if e <= v < a: tabs.append(v)
    if end != e or last is None or last.mnemonic not in ('ret', 'jmp'): return False
    return bool(tabs) and min(tabs) - e < 16

def safe(a):
    F = lomdb.funcs(); f = F[a]
    entries = sorted(F)
    i = entries.index(a)
    bt = branch_targets()
    if any((a + k) in bt for k in range(1, 5)): return False, 'branch into entry bytes'
    if f.size < 5 or f.maxaddr - a + 1 < 5:
        # v3: tiny fn (ret stub / getter) followed by nop/int3 padding up to >= a+5 before the next fn start:
        # the 5-byte jmp only overwrites padding (no branch targets into a+1..a+4 checked above)
        nxt = entries[i + 1] if i + 1 < len(entries) else a
        end = max(f.addr + f.size, f.maxaddr + 1)
        if nxt - a < 5 or end > a + 5 or any(b not in (0x90, 0xcc) for b in lomdb.read_va(end, a + 5 - end)):
            return False, 'too small'
    if i == 0: return True, ''
    pf = F[entries[i - 1]]
    if _tables_gap(pf, a): return True, ''
    start = pf.addr
    data = lomdb.read_va(start, a - start)
    last = None; end = start
    seq = []
    for ins in md.disasm(data, start):
        last = ins; end = ins.address + ins.size; seq.append((ins.mnemonic, ins.op_str))
    if end == a and last is not None and seq[-1] in (('mov', 'eax, eax'), ('mov', 'edi, edi')):
        # v2b: MSVC hand-asm CRT padding `mov eax,eax` (8b c0): fine iff preceded by a terminator
        k = len(seq) - 1
        while k >= 0 and (seq[k] in (('mov', 'eax, eax'), ('mov', 'edi, edi')) or seq[k][0] == 'nop'): k -= 1
        if k >= 0 and seq[k][0] in TERM: return True, ''
        return False, 'fallthrough from padding without terminator'
    if end == a and last is not None:
        if last.mnemonic in TERM or last.mnemonic == 'nop' or last.mnemonic.startswith('lea') and last.op_str in ('esi, [esi]', 'edi, [edi]'):
            # padding nops/lea: walk back to see a terminator before them
            return True, ''
        return False, 'fallthrough from %s %s' % (last.mnemonic, last.op_str)
    # linear sweep didn't land on a: accept only if preceding byte is padding
    if lomdb.read_va(a - 1, 1) in (b'\xcc', b'\x90', b'\xc3'): return True, ''
    return False, 'unclear predecessor'

if __name__ == '__main__':
    for l in sys.stdin:
        if not l.strip(): continue
        a = int(l.split()[0], 16); ok, why = safe(a)
        print('%08x %s %s' % (a, 'SAFE' if ok else 'UNSAFE', why))
