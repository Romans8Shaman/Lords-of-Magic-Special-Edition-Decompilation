#!/usr/bin/env python3
"""test_import_thunks.py : NEXT_PHASE step 9.4 native check of the 33 jmp*IAT thunks.

Reassembles src/pe/thunks.s + iat_symbols.s (no hand-written .set) and checks
each 6-byte encoding is `ff 25 <iat_va>` matching vanilla .text. That is the
destination = current IAT-slot test (the operand is the lomse IAT VA).

Usage: python3 tools/test_import_thunks.py
"""
import os, sys, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import gen_pe

def main():
    rows = gen_pe.load_iat()
    gen_pe.write_symbols_and_thunks(rows)
    enc, mism, _ = gen_pe.assemble_thunks(rows)
    if mism or len(enc) != 33:
        print('FAIL import thunks: assembled %d/33, mismatches %d' % (len(enc), len(mism)))
        for va, want, got, sym in mism[:8]:
            print('  %08x %s want %s got %s' % (va, sym, want, got))
        sys.exit(1)
    out = os.path.join(gen_pe.R, 'build', 'equiv')
    os.makedirs(out, exist_ok=True)
    lines = ['PASS 33 import thunk encodings (jmp *__imp_*, dest = IAT slot) vs vanilla .text']
    for r in rows:
        if r['thunk_va']:
            lines.append('  %08x %s!%s iat=%08x bytes %s' % (
                r['thunk_va'], r['dll'], r['sym'], r['va'], enc[r['thunk_va']].hex()))
    text = '\n'.join(lines) + '\n'
    open(os.path.join(out, 'thunks.txt'), 'w').write(text)
    print(text, end='')
    sys.exit(0)

if __name__ == '__main__':
    main()
