#!/usr/bin/env python3
"""build_standalone.py HOOKSET [OUT.exe] : build a standalone lomse executable WITHOUT the original .text code:
  - every function in HOOKSET (C src/fn, asm EH funclets src/asm, asm fallbacks src/asmfn) is linked from its object
    file into one fixed-base image (rb part, base RB_BASE, no imports, no relocs needed);
  - the new .text keeps the original layout: at each implemented function's entry a 'jmp rb_<addr>', the rest of
    its extent int3 (0xCC); functions NOT implemented (uncovered) and functions whose body is referenced from
    elsewhere (jump into the middle / data pointer into the body) keep their original bytes ('raw'); gaps between
    functions (alignment padding, out-of-body tables) keep original bytes;
  - .rdata/.data/.rsrc may be replaced by SA_RDATA / SA_DATA / SA_RSRC bins (tools/gen_data.py, tools/gen_rsrc.py), each verified identical to vanilla. Otherwise those sections are still copied from the original.
  - SA_PE=1 uses the generated PE header and import tables from tools/gen_pe.py (src/pe/header.bin, iat.bin, imports.bin) instead of copying the vanilla header; IAT/import bytes are verified identical to vanilla.
Writes OUT (default build/sa/lomse_sa.exe) and build/sa/report.txt."""
import sys, os, re, struct, subprocess, glob
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import pefile, lomdb
from capstone import Cs, CS_ARCH_X86, CS_MODE_32
R = lomdb.ROOT
CC = '/opt/llvm-mingw/bin/i686-w64-mingw32-clang'
from cc import CFLAGS
RB_BASE = 0x600000
ORIG = '/workspace/lom_project/game/LoM/English/lomse.exe'
def main():
    hs = sys.argv[1]; out = sys.argv[2] if len(sys.argv) > 2 else os.path.join(R, 'build', 'sa', 'lomse_sa.exe')
    os.makedirs(os.path.dirname(out), exist_ok=True)
    ent = [l.split() for l in open(hs) if l.strip() and not l.startswith('#')]
    impl = {int(e[0], 16): (e[1] if len(e) > 1 else 'fn') for e in ent}
    F = lomdb.funcs()
    img = open(ORIG, 'rb').read(); pe = pefile.PE(data=img)
    text = pe.sections[0]; tva = 0x400000 + text.VirtualAddress
    tbytes = bytearray(text.get_data()[:text.Misc_VirtualSize])
    # --- body references: direct branches/calls from any function into another function's body (not its entry),
    #     and dwords in .rdata/.data pointing into a body
    md = Cs(CS_ARCH_X86, CS_MODE_32)
    ext = sorted((a, f.maxaddr) for a, f in F.items() if f.maxaddr >= a)
    import bisect
    starts = [a for a, _ in ext]
    def owner(v):
        i = bisect.bisect_right(starts, v) - 1
        if i >= 0 and ext[i][0] <= v <= ext[i][1]: return ext[i][0]
        return None
    bodyref = {}
    for a, f in F.items():
        if f.maxaddr < a: continue
        nx = starts[bisect.bisect_right(starts, a)] if bisect.bisect_right(starts, a) < len(starts) else f.maxaddr + 1
        code = img[pe.get_offset_from_rva(a - 0x400000): pe.get_offset_from_rva(a - 0x400000) + (min(f.maxaddr + 1, nx) - a)]  # v4: stop at next fn
        for i in md.disasm(code, a):
            if i.mnemonic.startswith('j') or i.mnemonic == 'call':
                m = re.fullmatch(r'0x([0-9a-f]+)', i.op_str)
                if m:
                    v = int(m.group(1), 16); o = owner(v)
                    if o is not None and o != a and v != o: bodyref.setdefault(o, set()).add(('br', a, v))
    # v3: SA_STRICT=0 -> a branch from an IMPLEMENTED function no longer counts (its rebuilt code never
    #     enters the original body) and .data dwords are not treated as code pointers (likely false positives)
    strict = os.environ.get('SA_STRICT', '1') == '1'
    if not strict:
        for o in list(bodyref):
            bodyref[o] = {r for r in bodyref[o] if r[0] == 'br' and r[1] not in impl}
            if not bodyref[o]: del bodyref[o]
        # rebuilt sources: any .text-range constant (asm slot / C cast) pointing inside a body, not at its entry
        for a, d in impl.items():
            for sp in (os.path.join(R, 'src', d, '%08x.c' % a), os.path.join(R, 'src', d, '%08x.s' % a)):
                if not os.path.exists(sp): continue
                for m in re.finditer(r'(?<![\w])0x([0-9a-fA-F]{6,8})\b', re.sub(r'/\*.*?\*/', '', open(sp, errors='replace').read(), flags=re.S)):
                    v = int(m.group(1), 16)
                    if tva <= v < tva + len(tbytes):
                        o = owner(v)
                        if o is not None and v != o: bodyref.setdefault(o, set()).add(('src', a, v))
    for s in (pe.sections[1:3] if strict else []):
        d = s.get_data(); base = 0x400000 + s.VirtualAddress
        for k in range(0, len(d) - 3, 4):
            v = struct.unpack_from('<I', d, k)[0]
            if tva <= v < tva + len(tbytes):
                o = owner(v)
                if o is not None and v != o: bodyref.setdefault(o, set()).add(('data', base + k, v))
    # --- link the rb image
    objs = []
    for a, d in sorted(impl.items()):
        o = os.path.join(R, 'build', 'obj', d, '%08x.o' % a)
        if not os.path.exists(o): print('missing obj', o); sys.exit(1)
        objs.append(o)
    rt = os.path.join(R, 'build', 'obj', 'rt.o'); stub = os.path.join(R, 'build', 'obj', 'stub.o')
    subprocess.run([CC] + CFLAGS + ['-c', os.path.join(R, 'src', 'rt', 'rt.c'), '-o', rt], check=True)
    open(os.path.join(R, 'build', 'stub.c'), 'w').write('int __stdcall DllEntry(void*a,unsigned b,void*c){return 1;}\n')
    subprocess.run([CC] + CFLAGS + ['-c', os.path.join(R, 'build', 'stub.c'), '-o', stub], check=True)
    rbdll = os.path.join(os.path.dirname(out), 'rb_part.dll')
    rsp = os.path.join(os.path.dirname(out), 'objs.rsp'); open(rsp, 'w').write('\n'.join(objs) + '\n')
    cmd = [CC, '-shared', '-nostdlib', '-o', rbdll, stub, rt, '@' + rsp,
           '-Wl,--image-base=0x%x' % RB_BASE, '-Wl,--disable-dynamicbase', '-Wl,--export-all-symbols',
           '-Wl,--no-insert-timestamp', '-Wl,--build-id=none',
           '-Wl,--entry=DllEntry@12', '-Wl,--disable-auto-import', '-Wl,--disable-runtime-pseudo-reloc',
           subprocess.check_output([CC, '-print-libgcc-file-name'], text=True).strip()]
    r = subprocess.run(cmd, capture_output=True, text=True)
    if r.returncode: print(r.stderr[-3000:]); sys.exit(1)
    rp = pefile.PE(rbdll)
    if hasattr(rp, 'DIRECTORY_ENTRY_IMPORT'): print('rb part has imports!'); sys.exit(1)
    syms = {}
    for e in rp.DIRECTORY_ENTRY_EXPORT.symbols:
        n = e.name.decode() if e.name else ''
        m = re.fullmatch(r'[_@]?rb_([0-9a-f]{8})(@\d+)?', n)
        if m: syms[int(m.group(1), 16)] = RB_BASE + e.address
    # Mid-entry hooks: if every bodyref mid-VA has an exported rb_<mid> symbol,
    # leave a 5-byte jmp-to-rb at that original VA (so vanilla .rdata scope
    # tables still land) and int3 the rest. Otherwise keep the original body.
    mid_hooks = {}
    for o in list(bodyref):
        mids = {rec[2] for rec in bodyref[o] if rec[0] == 'src'}
        if mids and all(v in syms for v in mids):
            mid_hooks[o] = mids
            del bodyref[o]
    # --- new .text
    st = {'jmp': 0, 'raw_uncovered': 0, 'raw_bodyref': 0, 'gapbytes': 0, 'rawbytes': 0, 'midjmp': 0}
    newt = bytearray(tbytes)   # gaps keep original bytes
    covered = bytearray(len(tbytes))
    nxt = {starts[i]: (starts[i + 1] if i + 1 < len(starts) else 1 << 32) for i in range(len(starts))}
    rawr = []
    for a, f in F.items():
        if f.maxaddr < a or not (tva <= a < tva + len(tbytes)): continue
        # v2: never fill past the next function start (noncontiguous fns like 0053a560 have maxaddr spanning others)
        lo, hi = a - tva, min(f.maxaddr - tva + 1, len(tbytes), nxt[a] - tva)
        # v6: tiny implemented fn (< 5 bytes, hooksafe v3): its entry jmp extends into the following padding
        if a in impl and a not in bodyref and hi - lo < 5: hi = min(lo + 5, nxt[a] - tva)
        for k in range(lo, hi): covered[k] = 1
        if a in impl and a not in bodyref:
            if a not in syms: print('no symbol for', hex(a)); sys.exit(1)
            newt[lo:hi] = b'\xcc' * (hi - lo)
            newt[lo:lo + 5] = b'\xe9' + struct.pack('<i', syms[a] - (a + 5))
            st['jmp'] += 1
            for v in sorted(mid_hooks.get(a, ())):
                if not (a + 5 <= v and v + 5 <= a + (hi - lo)):
                    print('mid-entry out of extent or overlaps entry', hex(a), hex(v)); sys.exit(1)
                mo = v - tva
                if newt[mo:mo + 5] != b'\xcc' * 5:
                    print('mid-entry jmp overlap', hex(a), hex(v)); sys.exit(1)
                if v not in syms: print('no symbol for mid', hex(v)); sys.exit(1)
                newt[mo:mo + 5] = b'\xe9' + struct.pack('<i', syms[v] - (v + 5))
                st['midjmp'] += 1
        else:
            st['raw_bodyref' if a in impl else 'raw_uncovered'] += 1; st['rawbytes'] += hi - lo
            rawr.append((lo, hi, a in impl))
            if a in impl:   # implemented but body referenced: still route the ENTRY to the rebuilt code
                newt[lo:lo + 5] = b'\xe9' + struct.pack('<i', syms[a] - (a + 5))
    for lo, hi, im in rawr:   # v2: raw bodies win over any int3 fill
        newt[lo:hi] = tbytes[lo:hi]
        if im:
            a = lo + tva; newt[lo:lo + 5] = b'\xe9' + struct.pack('<i', syms[a] - (a + 5))
    st['gapbytes'] = covered.count(0)
    # v5: every byte range still equal to the ORIGINAL .text (raw fns, gaps, entry-jmp-less tails) -> raw_ranges.tsv;
    #     SA_RAWSRC=<bin dir> replaces them with bytes assembled from src/rawtext (tools/gen_rawtext.py), verified equal.
    rr = []; k = 0; n = len(newt)
    keep = bytearray(n)
    for lo, hi, im in rawr:
        for j in range(lo, hi): keep[j] = 1
    for j in range(n):
        if not covered[j]: keep[j] = 1
    for lo, hi, im in rawr:
        if im:
            for j in range(lo, lo + 5): keep[j] = 0
    while k < n:
        if not keep[k]: k += 1; continue
        j = k
        while j < n and keep[j]: j += 1
        rr.append((k + tva, j + tva)); k = j
    with open(os.path.join(os.path.dirname(out), 'raw_ranges.tsv'), 'w') as f:
        for lo, hi in rr: f.write('%08x\t%08x\n' % (lo, hi))
    rs = os.environ.get('SA_RAWSRC')
    if rs:
        nb = 0
        for lo, hi in rr:
            b = open(os.path.join(rs, '%08x.bin' % lo), 'rb').read()
            if b != bytes(tbytes[lo - tva:hi - tva]): print('rawsrc MISMATCH', hex(lo)); sys.exit(1)
            newt[lo - tva:hi - tva] = b; nb += len(b)
        st['rawsrc_bytes'] = nb
    # --- assemble PE
    FA, SA = 0x200, 0x1000
    al = lambda x, n: (x + n - 1) // n * n
    secs = []   # (name, rva, vsize, data, chars)
    secs.append((b'.text', text.VirtualAddress, text.Misc_VirtualSize, bytes(newt), text.Characteristics))
    # SA_RDATA / SA_DATA / SA_RSRC = sourced section images (tools/gen_data.py,
    # tools/gen_rsrc.py). A vsize-length bin is zero-padded to rawsize. Must be
    # byte-identical to vanilla or the build aborts.
    src_bins = {b'.rdata': os.environ.get('SA_RDATA'),
                b'.data':  os.environ.get('SA_DATA'),
                b'.rsrc':  os.environ.get('SA_RSRC')}
    for s in pe.sections[1:]:
        data = s.get_data()[:s.SizeOfRawData]
        name = s.Name.rstrip(b'\0')
        src = src_bins.get(name)
        if src:
            b = open(src, 'rb').read()
            if len(b) == s.Misc_VirtualSize:
                b = b.ljust(s.SizeOfRawData, b'\0')
            if len(b) != s.SizeOfRawData:
                print('%s size mismatch sourced %d rawsize %d' % (name.decode(), len(b), s.SizeOfRawData)); sys.exit(1)
            if b != data:
                print('%s MISMATCH sourced != vanilla' % name.decode()); sys.exit(1)
            data = b
            st[name.decode().lstrip('.') + '_src_bytes'] = s.Misc_VirtualSize if name != b'.data' else s.SizeOfRawData
        secs.append((name, s.VirtualAddress, s.Misc_VirtualSize, data, s.Characteristics))
    # SA_PE: splice generated IAT + import directory into .rdata (must match vanilla).
    if os.environ.get('SA_PE') == '1':
        iat_b = open(os.path.join(R, 'src', 'pe', 'iat.bin'), 'rb').read()
        imp_b = open(os.path.join(R, 'src', 'pe', 'imports.bin'), 'rb').read()
        rva_r = 0x14d000
        found = False
        for i, (nm, rva, vs, data, ch) in enumerate(secs):
            if nm != b'.rdata':
                continue
            data = bytearray(data)
            if data[:len(iat_b)] != iat_b:
                print('SA_PE IAT mismatch vs src/pe/iat.bin'); sys.exit(1)
            ioff = (0x1536f0 - rva)
            if data[ioff:ioff+len(imp_b)] != imp_b:
                print('SA_PE import directory mismatch vs src/pe/imports.bin'); sys.exit(1)
            data[:len(iat_b)] = iat_b
            data[ioff:ioff+len(imp_b)] = imp_b
            secs[i] = (nm, rva, vs, bytes(data), ch)
            st['pe_iat_bytes'] = len(iat_b)
            st['pe_imports_bytes'] = len(imp_b)
            found = True
        if not found:
            print('SA_PE: no .rdata section'); sys.exit(1)
    for s in rp.sections:
        nm = s.Name.rstrip(b'\0')
        if nm in (b'.edata', b'.reloc'): continue
        rva = RB_BASE - 0x400000 + s.VirtualAddress
        data = s.get_data()[:s.SizeOfRawData] if s.SizeOfRawData else b''
        secs.append((b'.rb' + nm.lstrip(b'.')[:5], rva, s.Misc_VirtualSize, data, s.Characteristics))
    secs.sort(key=lambda t: t[1]); filled = []
    for t in secs:   # Windows loader wants contiguous sections: fill VA gaps with empty bss
        if filled:
            end = al(filled[-1][1] + filled[-1][2], SA)
            if t[1] > end: filled.append((b'.rbpad', end, t[1] - end, b'', 0xC0000080))
        filled.append(t)
    secs = filled
    if os.environ.get('SA_PE') == '1':
        gen = open(os.path.join(R, 'src', 'pe', 'header.bin'), 'rb').read()
        if gen != img[:len(gen)]:
            print('SA_PE header.bin != vanilla SizeOfHeaders'); sys.exit(1)
        hdr = bytearray(gen)
        st['pe_header_bytes'] = len(gen)
    else:
        hdr = bytearray(img[:pe.OPTIONAL_HEADER.SizeOfHeaders])
    lf = pe.DOS_HEADER.e_lfanew; sto = lf + 24 + pe.FILE_HEADER.SizeOfOptionalHeader
    if sto + 40 * len(secs) > len(hdr): print('header too small'); sys.exit(1)
    struct.pack_into('<H', hdr, lf + 6, len(secs))
    body = bytearray(); off = len(hdr)
    for i, (nm, rva, vs, data, ch) in enumerate(secs):
        raw = al(len(data), FA) if data else 0
        struct.pack_into('<8sIIIIIIHHI', hdr, sto + 40 * i, nm.ljust(8, b'\0')[:8], vs, rva, raw, off if raw else 0, 0, 0, 0, 0, ch)
        body += data.ljust(raw, b'\0'); off += raw
    for k in range(sto + 40 * len(secs), len(hdr)): hdr[k] = 0
    size_img = al(max(rva + vs for _, rva, vs, _, _ in secs), SA)
    oh = lf + 24
    struct.pack_into('<I', hdr, oh + 56, size_img)       # SizeOfImage
    struct.pack_into('<I', hdr, oh + 64, 0)              # CheckSum
    open(out, 'wb').write(bytes(hdr) + bytes(body))
    rep = os.path.join(os.path.dirname(out), 'report.txt')
    with open(rep, 'w') as f:
        f.write('hookset %s\nimplemented %d (%s)\nrb symbols %d\n%s\n' % (hs, len(impl), {d: list(impl.values()).count(d) for d in set(impl.values())}, len(syms), st))
        f.write('bodyref functions (kept original bytes, entry still jumps to rebuilt):\n')
        for o in sorted(bodyref):
            f.write('  %08x %s %s\n' % (o, 'impl:' + impl.get(o, '-'), sorted(bodyref[o])[:4]))
    print(open(rep).read()[:1500]); print('wrote', out, os.path.getsize(out))
if __name__ == '__main__': main()
