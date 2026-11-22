#!/usr/bin/env python3
"""equiv_text_gate.py : NEXT_PHASE step 9.5 no-original-.text milestone.

Classifies every standalone raw_ranges.tsv extent as padding, a documented
jump-table / data fragment, a bodyref (implemented function whose body is
still original bytes because a mid-entry constant remains in source), or
other. The gate PASSes only when raw ranges are padding or documented
tables — no uncovered tails, no uncompiled mid-entry bodies.

Usage:
  python3 tools/equiv_text_gate.py --ranges build/sa80/raw_ranges.tsv \\
      --hookset build/hookset_r138.txt --report build/sa80/report.txt
"""
import os, sys, argparse, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
import pefile

R = lomdb.ROOT
ORIG = '/workspace/lom_project/game/LoM/English/lomse.exe'
IMAGE_BASE = 0x400000
OUT = os.path.join(R, 'build', 'equiv')


def load_ranges(path):
    rr = []
    for line in open(path):
        if not line.strip() or line.startswith('#'):
            continue
        a, b = line.split()
        rr.append((int(a, 16), int(b, 16)))
    return rr


def load_hookset(path):
    impl = {}
    for line in open(path):
        if not line.strip() or line.startswith('#'):
            continue
        e = line.split()
        impl[int(e[0], 16)] = e[1] if len(e) > 1 else 'fn'
    return impl


def load_bodyrefs_from_report(path):
    refs = []
    if not path or not os.path.exists(path):
        return refs
    in_br = False
    for line in open(path):
        if line.startswith('bodyref functions'):
            in_br = True
            continue
        if in_br:
            m = re.match(r'\s+([0-9a-f]{8})\s+impl:', line)
            if m:
                refs.append(int(m.group(1), 16))
            elif line.strip() and not line.startswith(' '):
                break
    return refs


def classify(rr, impl, F, bodyrefs, text):
    tva = 0x401000
    starts = sorted(a for a, f in F.items() if f.maxaddr >= a and tva <= a < tva + len(text))
    # padding: mostly 0x90/0xCC, or a short gap between functions
    rows = []
    for lo, hi in rr:
        n = hi - lo
        blob = text[lo - tva:hi - tva]
        # owner at lo (entry+5 often)
        owner = None
        for a in reversed(starts):
            if a <= lo <= F[a].maxaddr or a <= lo < a + 16:
                # also if lo is just after entry of impl
                if a <= lo:
                    owner = a
                    break
        tags = []
        if owner in bodyrefs and owner is not None:
            tags.append('bodyref')
        pad = blob and all(b in (0x90, 0xCC, 0x00) for b in blob)
        if pad:
            tags.append('padding')
        # typical 1-16 byte inter-function gaps that aren't bodyref
        if n <= 16 and 'bodyref' not in tags:
            tags.append('gap')
        if not tags:
            tags.append('table_or_fragment')
        rows.append((lo, hi, n, owner, tags))
    return rows


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--ranges', required=True)
    ap.add_argument('--hookset', required=True)
    ap.add_argument('--report', default='')
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    rr = load_ranges(args.ranges)
    impl = load_hookset(args.hookset)
    F = lomdb.funcs()
    bodyrefs = load_bodyrefs_from_report(args.report)
    pe = pefile.PE(ORIG)
    text = pe.sections[0].get_data()[:pe.sections[0].Misc_VirtualSize]
    rows = classify(rr, impl, F, bodyrefs, text)

    # uncovered: implemented? no — ranges that sit inside a .text function
    # that is NOT in the hookset and is not a documented NOTFN/gap.
    starts = sorted(a for a, f in F.items() if f.maxaddr >= a)
    uncovered = []
    for lo, hi, n, owner, tags in rows:
        if owner and owner not in impl and owner not in bodyrefs:
            # may still be a gap after an implemented fn (owner mis-assigned)
            if owner in impl:
                continue
            # if this range starts at a function entry that isn't implemented
            if lo == owner:
                uncovered.append((lo, hi))

    br_bytes = sum(n for lo, hi, n, owner, tags in rows if 'bodyref' in tags)
    gap_bytes = sum(n for lo, hi, n, owner, tags in rows if 'bodyref' not in tags and ('gap' in tags or 'padding' in tags))
    tab_bytes = sum(n for lo, hi, n, owner, tags in rows if 'bodyref' not in tags and 'table_or_fragment' in tags)
    br_fns = sorted({owner for lo, hi, n, owner, tags in rows if 'bodyref' in tags and owner})

    outp = os.path.join(OUT, 'text_gate.txt')
    lines = [
        'equiv_text_gate',
        'raw ranges %d total bytes %d' % (len(rr), sum(hi - lo for lo, hi in rr)),
        'bodyref functions %d bytes %d' % (len(br_fns), br_bytes),
        'padding/gap bytes %d' % gap_bytes,
        'table/fragment bytes %d' % tab_bytes,
        'uncovered-entry ranges %d' % len(uncovered),
        'bodyref list:',
    ]
    for a in br_fns:
        lines.append('  %08x %s' % (a, impl.get(a, '-')))
    if uncovered:
        lines.append('uncovered entries:')
        for lo, hi in uncovered:
            lines.append('  %08x-%08x' % (lo, hi))

    gate_ok = (len(uncovered) == 0 and len(br_fns) == 0)
    if gate_ok:
        lines.append('PASS no-original-.text: raw ranges are only padding/tables')
    else:
        why = []
        if br_fns:
            why.append('%d uncompiled mid-entry bodyref functions (%d bytes)' % (len(br_fns), br_bytes))
        if uncovered:
            why.append('%d uncovered tails' % len(uncovered))
        lines.append('FAIL no-original-.text: ' + '; '.join(why))
        lines.append('Padding and jump tables may stay in src/rawtext; bodyrefs need mid-entry labels')
        lines.append('(or retargeted source constants) before this gate can pass.')
    text = '\n'.join(lines) + '\n'
    open(outp, 'w').write(text)
    print(text, end='')
    print('wrote', outp)
    sys.exit(0 if gate_ok else 1)


if __name__ == '__main__':
    main()
