#!/usr/bin/env python3
"""equiv_sections.py EXE [EXE...] : NEXT_PHASE step 9.1 section byte-identity.

Compares each standalone/harness-adjacent PE to vanilla lomse.exe:

  * .rdata (vsize), initialized .data (rawsize), .rsrc (vsize)
  * data directories IMPORT / IAT / RESOURCE, ImageBase, entry
  * .text in two modes:
      exact     — full section identity (expected FAIL while entries are jmp-to-rb)
      jmp+int3  — implemented non-bodyref extents may be `jmp rel32` + int3 (0xCC),
                  plus optional 5-byte jmp-to-rb stubs at mid-entry VAs;
                  every raw_ranges.tsv byte (and any other non-jmp region) must
                  match vanilla

Writes build/equiv/sections_<exe-stem>.txt and prints PASS/FAIL per check.
Exit 0 only if data sections + directories + jmp+int3 .text all PASS.

Usage:
  python3 tools/equiv_sections.py build/sa80/lomse_sa.exe
  python3 tools/equiv_sections.py build/sa80_pe_dry/lomse_sa.exe --ranges build/sa80/raw_ranges.tsv
"""
import os, sys, struct, hashlib, argparse
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
import pefile

R = lomdb.ROOT
ORIG = '/workspace/lom_project/game/LoM/English/lomse.exe'
IMAGE_BASE = 0x400000
OUT = os.path.join(R, 'build', 'equiv')

SECTIONS = {
    b'.rdata': ('vsize',),
    b'.data':  ('raw',),
    b'.rsrc':  ('vsize',),
}


def md5(b):
    return hashlib.md5(b).hexdigest()


def sl(pe, name):
    for s in pe.sections:
        if s.Name.rstrip(b'\0') == name:
            return s
    return None


def slice_sec(s, how):
    raw = s.get_data()
    if how == 'vsize':
        return raw[:s.Misc_VirtualSize]
    return raw[:s.SizeOfRawData]


def load_ranges(path):
    rr = []
    if not path or not os.path.exists(path):
        return rr
    for line in open(path):
        if not line.strip() or line.startswith('#'):
            continue
        a, b = line.split()
        rr.append((int(a, 16), int(b, 16)))
    return rr


def load_hookset(path):
    impl = {}
    if not path or not os.path.exists(path):
        return impl
    for line in open(path):
        if not line.strip() or line.startswith('#'):
            continue
        e = line.split()
        impl[int(e[0], 16)] = e[1] if len(e) > 1 else 'fn'
    return impl


def compare_one(exe, ranges_path, hookset_path, fp):
    img = open(exe, 'rb').read()
    vim = open(ORIG, 'rb').read()
    pe = pefile.PE(data=img)
    pv = pefile.PE(data=vim)
    lines = ['equiv_sections %s' % exe,
             'vanilla md5 %s size %d' % (md5(vim), len(vim)),
             'exe     md5 %s size %d' % (md5(img), len(img))]
    ok = True

    def chk(name, a, b, note=''):
        nonlocal ok
        if a == b:
            extra = ''
            if isinstance(a, (bytes, bytearray)):
                extra = ' %d bytes md5 %s' % (len(a), md5(a))
            elif isinstance(a, int):
                extra = ' %#x' % a
            lines.append('PASS %s%s %s' % (name, extra, note))
            return True
        ok = False
        if isinstance(a, (bytes, bytearray)) and isinstance(b, (bytes, bytearray)):
            n = min(len(a), len(b))
            first = next((i for i in range(n) if a[i] != b[i]), n)
            lines.append('FAIL %s got %d md5 %s vanilla %d md5 %s first_diff off=%d' % (
                name, len(a), md5(a), len(b), md5(b), first))
        else:
            lines.append('FAIL %s got %s vanilla %s' % (name, a, b))
        return False

    oh, ohv = pe.OPTIONAL_HEADER, pv.OPTIONAL_HEADER
    chk('ImageBase', oh.ImageBase, ohv.ImageBase)
    chk('AddressOfEntryPoint', oh.AddressOfEntryPoint, ohv.AddressOfEntryPoint)
    chk('BaseOfCode', oh.BaseOfCode, ohv.BaseOfCode)
    chk('BaseOfData', oh.BaseOfData, ohv.BaseOfData)
    for i, name in ((1, 'IMPORT'), (2, 'RESOURCE'), (12, 'IAT')):
        chk(name + ' RVA', oh.DATA_DIRECTORY[i].VirtualAddress, ohv.DATA_DIRECTORY[i].VirtualAddress)
        chk(name + ' Size', oh.DATA_DIRECTORY[i].Size, ohv.DATA_DIRECTORY[i].Size)

    for name, (how,) in SECTIONS.items():
        sd, sv = sl(pe, name), sl(pv, name)
        if sd is None or sv is None:
            ok = False
            lines.append('FAIL %s missing' % name.decode())
            continue
        chk(name.decode() + ' VA', sd.VirtualAddress, sv.VirtualAddress)
        chk(name.decode() + ' VSize', sd.Misc_VirtualSize, sv.Misc_VirtualSize)
        chk(name.decode() + ' RawSize', sd.SizeOfRawData, sv.SizeOfRawData)
        chk(name.decode() + ' ' + how + ' bytes', slice_sec(sd, how), slice_sec(sv, how))

    # .text exact (informative) and jmp+int3
    td, tv = sl(pe, b'.text'), sl(pv, b'.text')
    dt = td.get_data()[:td.Misc_VirtualSize]
    vt = tv.get_data()[:tv.Misc_VirtualSize]
    if dt == vt:
        lines.append('PASS .text exact %d bytes (unexpected for a jmp-to-rb standalone)' % len(dt))
    else:
        n = min(len(dt), len(vt))
        ndiff = sum(1 for i in range(n) if dt[i] != vt[i])
        lines.append('INFO .text exact differs (%d/%d bytes) — expected while entries are jmp-to-rb' % (ndiff, n))

    rr = load_ranges(ranges_path)
    keep = bytearray(len(vt))
    tva = IMAGE_BASE + tv.VirtualAddress
    for lo, hi in rr:
        for a in range(lo, hi):
            off = a - tva
            if 0 <= off < len(keep):
                keep[off] = 1
    # raw ranges must match
    raw_mismatch = 0
    first_raw = None
    for i, k in enumerate(keep):
        if k and (i >= len(dt) or dt[i] != vt[i]):
            raw_mismatch += 1
            if first_raw is None:
                first_raw = tva + i
    if raw_mismatch == 0 and rr:
        lines.append('PASS .text raw_ranges identity (%d ranges, %d bytes)' % (
            len(rr), sum(keep)))
    elif not rr:
        lines.append('INFO no raw_ranges.tsv given; skip raw-range identity')
    else:
        ok = False
        lines.append('FAIL .text raw_ranges identity mismatches=%d first=%s' % (
            raw_mismatch, '%08x' % first_raw if first_raw else '-'))

    # jmp+int3: implemented extents outside raw_ranges should be E9 rel32 + CC
    impl = load_hookset(hookset_path)
    F = lomdb.funcs()
    jmp_ok = jmp_bad = 0
    bodyref_kept = 0
    if impl:
        starts = sorted(a for a, f in F.items() if f.maxaddr >= a and tva <= a < tva + len(vt))
        nxt = {starts[i]: (starts[i + 1] if i + 1 < len(starts) else tva + len(vt)) for i in range(len(starts))}
        for a in starts:
            if a not in impl:
                continue
            lo, hi = a, min(F[a].maxaddr + 1, nxt[a], tva + len(vt))
            # Same rule as build_standalone.py: a tiny implemented fn's
            # 5-byte entry jmp is allowed to extend into the following padding.
            if hi - a < 5:
                hi = min(a + 5, nxt[a], tva + len(vt))
            off = a - tva
            span = hi - a
            region_raw = any(keep[off + k] for k in range(min(span, len(keep) - off)))
            if region_raw:
                # bodyref / raw: entry may still be a jmp; rest is vanilla (already checked)
                if span >= 5 and dt[off] == 0xE9:
                    rel = struct.unpack_from('<i', dt, off + 1)[0]
                    dest = a + 5 + rel
                    if dest >= 0x600000:
                        bodyref_kept += 1
                        continue
                bodyref_kept += 1
                continue
            if span < 5:
                jmp_bad += 1
                continue
            if dt[off] != 0xE9:
                jmp_bad += 1
                continue
            rel = struct.unpack_from('<i', dt, off + 1)[0]
            dest = a + 5 + rel
            if dest < 0x600000:
                jmp_bad += 1
                continue
            k = 5
            good = True
            while k < span:
                if dt[off + k] == 0xCC:
                    k += 1
                    continue
                if k + 5 <= span and dt[off + k] == 0xE9:
                    mrel = struct.unpack_from('<i', dt, off + k + 1)[0]
                    mdest = a + k + 5 + mrel
                    if mdest >= 0x600000:
                        k += 5
                        continue
                good = False
                break
            if good:
                jmp_ok += 1
            else:
                jmp_bad += 1
        if jmp_bad == 0:
            lines.append('PASS .text jmp+int3 (%d implemented non-raw, %d bodyref/raw kept, 0 bad)' % (
                jmp_ok, bodyref_kept))
        else:
            ok = False
            lines.append('FAIL .text jmp+int3 ok=%d bad=%d bodyref/raw=%d' % (jmp_ok, jmp_bad, bodyref_kept))
    else:
        lines.append('INFO no hookset; skip jmp+int3 walk')

    lines.append('OVERALL %s' % ('PASS' if ok else 'FAIL'))
    text = '\n'.join(lines) + '\n'
    fp.write(text)
    print(text, end='')
    return ok


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('exe', nargs='+')
    ap.add_argument('--ranges', default='')
    ap.add_argument('--hookset', default='')
    args = ap.parse_args()
    os.makedirs(OUT, exist_ok=True)
    all_ok = True
    for exe in args.exe:
        ranges = args.ranges
        hookset = args.hookset
        # conveniences: look next to the exe
        d = os.path.dirname(os.path.abspath(exe))
        if not ranges:
            cand = os.path.join(d, 'raw_ranges.tsv')
            if os.path.exists(cand):
                ranges = cand
        if not hookset:
            for c in (os.path.join(d, 'hookset.txt'),
                      os.path.join(R, 'build', 'hookset_r138.txt')):
                if os.path.exists(c):
                    hookset = c
                    break
        stem = os.path.splitext(os.path.basename(exe))[0]
        tag = os.path.basename(d) + '_' + stem
        outp = os.path.join(OUT, 'sections_%s.txt' % tag)
        with open(outp, 'w') as fp:
            if not compare_one(exe, ranges, hookset, fp):
                all_ok = False
        print('wrote', outp)
    sys.exit(0 if all_ok else 1)


if __name__ == '__main__':
    main()
