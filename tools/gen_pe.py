#!/usr/bin/env python3
"""gen_pe.py: source the vanilla lomse.exe PE header and import directory.

NEXT_PHASE step 8. Rebuilds, without memcpy of the vanilla header or
import tables:

  * a 1024-byte PE header (DOS stub, MSVC 6 Rich header, COFF/optional
    header, four section table entries) from documented fields
  * the IAT at 0x0054d000 (888 bytes) and the import directory / ILT /
    hint-name stream at 0x005536f0 (4268 bytes at the end of .rdata)
    from src/imports/iat.tsv + src/pe/import_order.tsv
  * iat_symbols.s and thunks.s so the 33 .text jmp*IAT thunks can drop
    their hand-written .set VAs

Then byte-compares header, IAT, import blob, data directories, and the
assembled thunk encodings to vanilla lomse.exe (md5 92a0d830...).

Layout (MSVC 6, verified against vanilla):
  * ImageBase 0x400000, entry 0x0053c2c0, SizeOfHeaders 0x400
  * IAT groups (and the ILT) packed in ASCII order of the stored DLL name
  * import descriptors in link order (KERNEL32, USER32, GDI32, ADVAPI32,
    SHELL32, ole32, smackw32, DDRAW, DPLAYX, DSOUND, STORM, WINMM)
  * hint/name stream at 0x00553b6c, 2-byte aligned; KERNEL32 names are
    split around the other DLL name blocks (47, then the rest of the
    DLLs, then 66 CRT KERNEL32 names)
  * unbound IAT == ILT (hint/name RVA, or 0x80000000|ordinal)

Usage:
  python3 tools/gen_pe.py              # rebuild + compare to vanilla
  python3 tools/gen_pe.py --no-thunks  # skip assembling thunks.s
"""
import os, sys, struct, hashlib, subprocess
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
R = lomdb.ROOT
SRC = os.path.join(R, 'src', 'pe')
IMP = os.path.join(R, 'src', 'imports')
ORIG = '/workspace/lom_project/game/LoM/English/lomse.exe'
BIN = '/opt/llvm-mingw/bin/'
CC = BIN + 'i686-w64-mingw32-clang'

IMAGE_BASE = 0x00400000
ENTRY_VA   = 0x0053c2c0
IAT_VA     = 0x0054d000
IAT_SIZE   = 0x378          # 888
IMPORT_DIR_VA = 0x005536f0
IMPORT_DIR_SZ = 0x104       # 260 = 13 * 20
HINTNAME_VA   = 0x00553b6c
RDATA_VA   = 0x0054d000
RDATA_VSIZE = 30620
RDATA_RAW  = 30720
TEXT_VA    = 0x00401000
TEXT_VSIZE = 1357109
TEXT_RAW   = 1357312
DATA_VA    = 0x00555000
DATA_VSIZE = 531260
DATA_RAW   = 143872
RSRC_VA    = 0x005d7000
RSRC_VSIZE = 2432
RSRC_RAW   = 2560
RSRC_DIR_SZ = 0x980
SIZE_OF_HEADERS = 0x400
SECTION_ALIGN = 0x1000
FILE_ALIGN = 0x200
# MSVC 6 TimeDateStamp (1998-12-16 00:52:17 UTC)
TIME_DATE_STAMP = 0x36767ec1
# MSVC 6 Rich records (decoded) and XOR key, documented so the header
# is generated rather than copied. product 19 build 8034 x11; a zero
# product with count 531; product 6 build 1668 x1.
RICH_RECORDS = [(19, 8034, 11), (0, 0, 531), (6, 1668, 1)]
RICH_KEY = 0x99071d88

# Standard 128-byte Microsoft DOS stub (MZ header + "This program cannot
# be run in DOS mode."), with e_lfanew = 0xC0 to leave room for Rich.
DOS_STUB = bytes.fromhex(
    '4d5a90000300000004000000ffff0000'
    'b8000000000000004000000000000000'
    '00000000000000000000000000000000'
    '000000000000000000000000c0000000'
    '0e1fba0e00b409cd21b8014ccd215468'
    '69732070726f6772616d2063616e6e6f'
    '742062652072756e20696e20444f5320'
    '6d6f64652e0d0d0a2400000000000000'
)

# Descriptor order (link order), not IAT ASCII order.
DESC_ORDER = [
    'KERNEL32.dll', 'USER32.dll', 'GDI32.dll', 'ADVAPI32.dll',
    'SHELL32.dll', 'ole32.dll', 'smackw32.DLL', 'DDRAW.dll',
    'DPLAYX.dll', 'DSOUND.dll', 'STORM.dll', 'WINMM.dll',
]


def al(x, n):
    return (x + n - 1) // n * n


def load_iat():
    rows = []
    path = os.path.join(IMP, 'iat.tsv')
    for line in open(path):
        if not line.strip() or line.startswith('iat_va') or line.startswith('#'):
            continue
        a = line.rstrip('\n').split('\t')
        while len(a) < 6:
            a.append('')
        va = int(a[0], 16)
        dll, sym, name, ordinal, thunk = a[1], a[2], a[3], a[4], a[5]
        ordn = int(ordinal) if ordinal else None
        thunk_va = int(thunk, 16) if thunk else None
        rows.append(dict(va=va, dll=dll, sym=sym, name=name, ordinal=ordn, thunk_va=thunk_va))
    return rows


def load_order():
    rows = []
    path = os.path.join(SRC, 'import_order.tsv')
    for line in open(path):
        if not line.strip() or line.startswith('kind') or line.startswith('#'):
            continue
        a = line.rstrip('\n').split('\t')
        while len(a) < 6:
            a.append('')
        kind, dll, sym, hint, ordinal, va = a
        rows.append(dict(
            kind=kind, dll=dll, sym=sym,
            hint=int(hint) if hint else None,
            ordinal=int(ordinal) if ordinal else None,
            va=int(va, 16) if va else None,
        ))
    return rows


def pack_hintnames(order):
    """Return (blob starting at HINTNAME_VA, dict (dll,sym)->hintname RVA,
    dict dll->name RVA)."""
    buf = bytearray()
    rva0 = HINTNAME_VA - IMAGE_BASE
    loc = {}
    dll_name_rva = {}
    for rec in order:
        va = IMAGE_BASE + rva0 + len(buf)
        if rec['kind'] == 'dll':
            raw = rec['dll'].encode('ascii') + b'\0'
            if va & 1:
                raise SystemExit('dll name unaligned at %08x' % va)
            buf += raw
            if len(buf) & 1:
                buf += b'\0'
            dll_name_rva[rec['dll']] = va - IMAGE_BASE
        elif rec['kind'] == 'imp':
            raw = struct.pack('<H', rec['hint']) + rec['sym'].encode('ascii') + b'\0'
            if va & 1:
                raise SystemExit('hint/name unaligned at %08x' % va)
            buf += raw
            if len(buf) & 1:
                buf += b'\0'
            loc[(rec['dll'], rec['sym'])] = va - IMAGE_BASE
        else:
            raise SystemExit('bad kind %s' % rec['kind'])
        if rec['va'] is not None and rec['va'] != va:
            raise SystemExit('import_order VA mismatch %s %s expected %08x got %08x' % (
                rec['kind'], rec['sym'] or rec['dll'], rec['va'], va))
    expect_len = (RDATA_VA + RDATA_VSIZE) - HINTNAME_VA
    if len(buf) != expect_len:
        raise SystemExit('hint/name stream length %d, expected %d' % (len(buf), expect_len))
    return bytes(buf), loc, dll_name_rva


def pack_iat_ilt(iat_rows, hn_rva):
    """IAT groups in ASCII DLL-name order. Returns iat.bin, ilt.bin,
    list of (dll, iat_rva, ilt_rva, count)."""
    from collections import OrderedDict
    groups = OrderedDict()
    for r in iat_rows:
        groups.setdefault(r['dll'], []).append(r)
    # ASCII order of the stored DLL name (MSVC 6).
    dlls = sorted(groups)
    iat = bytearray()
    ilt = bytearray()
    meta = []
    iat_rva = IAT_VA - IMAGE_BASE
    # ILT starts immediately after the import directory (12 desc + null).
    ilt_rva = (IMPORT_DIR_VA - IMAGE_BASE) + IMPORT_DIR_SZ
    for dll in dlls:
        slots = groups[dll]
        meta.append((dll, iat_rva, ilt_rva, len(slots)))
        chunk = bytearray()
        for r in slots:
            if r['ordinal'] is not None:
                val = 0x80000000 | r['ordinal']
            else:
                val = hn_rva[(dll, r['sym'])]
            chunk += struct.pack('<I', val)
        chunk += b'\x00\x00\x00\x00'
        # verify iat.tsv VAs
        if slots[0]['va'] != IMAGE_BASE + iat_rva:
            raise SystemExit('IAT VA mismatch %s expected %08x got %08x' % (
                dll, slots[0]['va'], IMAGE_BASE + iat_rva))
        iat += chunk
        ilt += chunk
        iat_rva += len(chunk)
        ilt_rva += len(chunk)
    if len(iat) != IAT_SIZE:
        raise SystemExit('IAT size %d, expected %d' % (len(iat), IAT_SIZE))
    return bytes(iat), bytes(ilt), meta


def pack_descriptors(meta, dll_name_rva):
    """Import directory in DESC_ORDER. meta is IAT-group list."""
    bydll = {d: (iat, ilt, n) for d, iat, ilt, n in meta}
    buf = bytearray()
    for dll in DESC_ORDER:
        iat_rva, ilt_rva, n = bydll[dll]
        name_rva = dll_name_rva[dll]
        buf += struct.pack('<IIIII', ilt_rva, 0, 0, name_rva, iat_rva)
    buf += b'\x00' * 20
    if len(buf) != IMPORT_DIR_SZ:
        raise SystemExit('import dir size %d, expected %d' % (len(buf), IMPORT_DIR_SZ))
    return bytes(buf)


def build_rich():
    recs = b'DanS' + b'\x00' * 12
    for prod, build, count in RICH_RECORDS:
        recs += struct.pack('<II', (prod << 16) | build, count)
    key = RICH_KEY
    kb = struct.pack('<I', key)
    masked = bytes(b ^ kb[i % 4] for i, b in enumerate(recs))
    block = masked + b'Rich' + kb
    return block.ljust(0xC0 - len(DOS_STUB), bytes(1))


def build_header():
    size_code = TEXT_RAW
    # MSVC 6: .rdata raw + FileAlign(.data vsize) + .rsrc raw
    size_idata = RDATA_RAW + al(DATA_VSIZE, FILE_ALIGN) + RSRC_RAW
    size_image = al((RSRC_VA - IMAGE_BASE) + RSRC_VSIZE, SECTION_ALIGN)
    entry_rva = ENTRY_VA - IMAGE_BASE
    base_of_code = TEXT_VA - IMAGE_BASE
    base_of_data = RDATA_VA - IMAGE_BASE

    # Data directories: only IMPORT, RESOURCE, IAT are non-zero.
    dirs = [(0, 0)] * 16
    dirs[1] = (IMPORT_DIR_VA - IMAGE_BASE, IMPORT_DIR_SZ)
    dirs[2] = (RSRC_VA - IMAGE_BASE, RSRC_DIR_SZ)
    dirs[12] = (IAT_VA - IMAGE_BASE, IAT_SIZE)

    opt = struct.pack(
        '<HBBIIIIIIIIIHHHHHHIIIIHHIIIIII',
        0x10B,          # Magic PE32
        5, 10,          # linker 5.10 (MSVC 6)
        size_code,
        size_idata,
        0,              # SizeOfUninitializedData
        entry_rva,
        base_of_code,
        base_of_data,
        IMAGE_BASE,
        SECTION_ALIGN,
        FILE_ALIGN,
        4, 0,           # OS version
        1, 0,           # image version
        4, 0,           # subsystem version
        0,              # Win32VersionValue
        size_image,
        SIZE_OF_HEADERS,
        0,              # CheckSum
        2,              # IMAGE_SUBSYSTEM_WINDOWS_GUI
        0,              # DllCharacteristics
        0x100000, 0x1000,   # stack reserve/commit
        0x100000, 0x1000,   # heap reserve/commit
        0,              # LoaderFlags
        16,             # NumberOfRvaAndSizes
    )
    for rva, sz in dirs:
        opt += struct.pack('<II', rva, sz)
    if len(opt) != 224:
        raise SystemExit('optional header length %d' % len(opt))

    filehdr = struct.pack(
        '<HHIIIHH',
        0x14C,          # IMAGE_FILE_MACHINE_I386
        4,              # NumberOfSections
        TIME_DATE_STAMP,
        0, 0,           # PointerToSymbolTable, NumberOfSymbols
        224,            # SizeOfOptionalHeader
        0x10F,          # RELOCS_STRIPPED|EXECUTABLE|LINE_NUMS_STRIPPED|
                        # LOCAL_SYMS_STRIPPED|32BIT_MACHINE
    )

    # Section table. PointerToRawData starts at SizeOfHeaders.
    sections = [
        (b'.text',  TEXT_VSIZE,  TEXT_VA  - IMAGE_BASE, TEXT_RAW,  0x60000020),
        (b'.rdata', RDATA_VSIZE, RDATA_VA - IMAGE_BASE, RDATA_RAW, 0x40000040),
        (b'.data',  DATA_VSIZE,  DATA_VA  - IMAGE_BASE, DATA_RAW,  0xC0000040),
        (b'.rsrc',  RSRC_VSIZE,  RSRC_VA  - IMAGE_BASE, RSRC_RAW,  0x40000040),
    ]
    raw_ptr = SIZE_OF_HEADERS
    sectab = b''
    for name, vsize, rva, rawsize, chars in sections:
        sectab += struct.pack('<8sIIIIIIHHI',
                              name.ljust(8, b'\0'), vsize, rva, rawsize, raw_ptr,
                              0, 0, 0, 0, chars)
        raw_ptr += rawsize

    rich = build_rich()
    hdr = DOS_STUB + rich + b'PE\0\0' + filehdr + opt + sectab
    if len(hdr) > SIZE_OF_HEADERS:
        raise SystemExit('header too large %d' % len(hdr))
    hdr = hdr.ljust(SIZE_OF_HEADERS, b'\0')
    return hdr


def dll_stem(dll):
    return dll.split('.')[0].upper()


def imp_sym(dll, sym):
    return '__imp_%s_%s' % (dll_stem(dll), sym)


def write_symbols_and_thunks(iat_rows):
    lines = [
        '/* Generated by tools/gen_pe.py. IAT slot symbols at vanilla VAs.',
        ' * The 33 .text thunks jmp through these; no per-thunk .set. */',
        '',
    ]
    # Use a .s file (gas), not a C TU, so the linker/assembler sees
    # absolute .set symbols and 6-byte jmp * encodings.
    slines = ['/* IAT symbols: generated, do not edit. */', '']
    tlines = ['/* 33 lomse.exe jmp*IAT thunks: generated, do not edit. */', '']
    nsym = 0
    nthunk = 0
    for r in iat_rows:
        name = imp_sym(r['dll'], r['sym'])
        slines.append('.global %s' % name)
        slines.append('.set %s, 0x%08x' % (name, r['va']))
        nsym += 1
        if r['thunk_va']:
            tlines.append('.global rb_%08x' % r['thunk_va'])
            tlines.append('rb_%08x:' % r['thunk_va'])
            tlines.append('    jmp *%s' % name)
            tlines.append('')
            nthunk += 1
    slines.append('')
    open(os.path.join(SRC, 'iat_symbols.s'), 'w').write('\n'.join(slines))
    open(os.path.join(SRC, 'thunks.s'), 'w').write('\n'.join(tlines))
    return nsym, nthunk


def assemble_thunks(iat_rows):
    """Assemble thunks.s + iat_symbols.s and compare 6-byte encodings to vanilla .text."""
    build = os.path.join(R, 'build', 'pe_src')
    os.makedirs(build, exist_ok=True)
    src_t = os.path.join(SRC, 'thunks.s')
    src_s = os.path.join(SRC, 'iat_symbols.s')
    obj = os.path.join(build, 'thunks.o')
    # mingw clang, i686, no .seh, intel syntax already in the file
    cmd = [CC, '-c', '-m32', '-o', obj, src_t, src_s]
    # gas will take both? clang -c with two sources doesn't work.
    # Concatenate into one TU.
    combo = os.path.join(build, 'thunks_all.s')
    open(combo, 'w').write(open(src_s).read() + '\n' + open(src_t).read())
    r = subprocess.run([CC, '-c', '-m32', '-o', obj, combo], capture_output=True, text=True)
    if r.returncode:
        raise SystemExit('thunk assemble failed:\n%s\n%s' % (r.stdout, r.stderr))
    # objdump or parse the object with capstone? Easier: use objdump -d
    objdump = BIN + 'llvm-objdump'
    if not os.path.exists(objdump):
        objdump = 'llvm-objdump'
    d = subprocess.run([objdump, '-d', obj], capture_output=True, text=True)
    if d.returncode:
        raise SystemExit('objdump failed:\n%s' % d.stderr)
    # map symbol -> raw bytes from hex dump. Fallback: parse ELF/COFF with capstone? 
    # Use objcopy -O binary of each? Simpler: pefile/lief, or read with llvm-objdump -s -j .text
    s = subprocess.run([objdump if 'llvm' in objdump else objdump, '-s', obj],
                       capture_output=True, text=True)
    # Parse disassembly for "ff 25 xx xx xx xx"
    import re
    encodings = {}  # thunk_va -> 6 bytes
    current = None
    for line in d.stdout.splitlines():
        m = re.search(r'<rb_([0-9a-f]{8})>:', line)
        if m:
            current = int(m.group(1), 16)
            continue
        if current is not None:
            #  0: ff 25 10 d0 54 00 jmp DWORD PTR
            hm = re.search(r'\b((?:[0-9a-f]{2} ){5}[0-9a-f]{2})\b', line)
            if hm:
                raw = bytes(int(x, 16) for x in hm.group(1).split())
                encodings[current] = raw
                current = None
    img = open(ORIG, 'rb').read()
    import pefile
    pe = pefile.PE(data=img, fast_load=True)
    mism = []
    for r in iat_rows:
        if not r['thunk_va']:
            continue
        va = r['thunk_va']
        off = pe.get_offset_from_rva(va - IMAGE_BASE)
        want = img[off:off + 6]
        got = encodings.get(va)
        if got != want:
            mism.append((va, want.hex() if want else None, got.hex() if got else None, r['sym']))
    return encodings, mism, d.stdout


def vanilla_slices():
    import pefile
    img = open(ORIG, 'rb').read()
    pe = pefile.PE(data=img, fast_load=True)
    hdr = img[:SIZE_OF_HEADERS]
    rdata_s = pe.sections[1]
    rdata = rdata_s.get_data()[:RDATA_VSIZE]
    iat = rdata[:IAT_SIZE]
    # import blob: descriptors through end of vsize
    off = (IMPORT_DIR_VA - RDATA_VA)
    imports = rdata[off:]
    return img, pe, hdr, iat, imports


def compare(name, a, b):
    if a == b:
        print('  MATCH %s %d bytes md5 %s' % (name, len(a), hashlib.md5(a).hexdigest()))
        return True
    n = min(len(a), len(b))
    first = next((i for i in range(n) if a[i] != b[i]), n)
    print('  MISMATCH %s got %d md5 %s vanilla %d md5 %s first_diff off=%d' % (
        name, len(a), hashlib.md5(a).hexdigest(),
        len(b), hashlib.md5(b).hexdigest(), first))
    return False


def main():
    no_thunks = '--no-thunks' in sys.argv
    os.makedirs(SRC, exist_ok=True)
    os.makedirs(os.path.join(R, 'build', 'pe_src'), exist_ok=True)

    iat_rows = load_iat()
    order = load_order()
    hn_blob, hn_rva, dll_name_rva = pack_hintnames(order)
    iat, ilt, meta = pack_iat_ilt(iat_rows, hn_rva)
    descs = pack_descriptors(meta, dll_name_rva)
    imports = descs + ilt + hn_blob
    expect_imports = (RDATA_VA + RDATA_VSIZE) - IMPORT_DIR_VA
    if len(imports) != expect_imports:
        raise SystemExit('import blob %d, expected %d' % (len(imports), expect_imports))
    hdr = build_header()

    open(os.path.join(SRC, 'header.bin'), 'wb').write(hdr)
    open(os.path.join(SRC, 'iat.bin'), 'wb').write(iat)
    open(os.path.join(SRC, 'imports.bin'), 'wb').write(imports)
    nsym, nthunk = write_symbols_and_thunks(iat_rows)
    print('emitted header.bin %d  iat.bin %d  imports.bin %d  symbols %d  thunks %d' % (
        len(hdr), len(iat), len(imports), nsym, nthunk))

    img, pe, vhdr, viat, vimp = vanilla_slices()
    ok = True
    ok &= compare('header', hdr, vhdr)
    ok &= compare('IAT', iat, viat)
    ok &= compare('imports', imports, vimp)

    # structure: ImageBase, entry, data directories
    def u32(buf, off):
        return struct.unpack_from('<I', buf, off)[0]
    lf = struct.unpack_from('<I', hdr, 0x3C)[0]
    # optional header starts lf+24
    oh = lf + 24
    checks = [
        ('ImageBase', oh + 28, IMAGE_BASE),
        ('AddressOfEntryPoint', oh + 16, ENTRY_VA - IMAGE_BASE),
        ('IAT dir RVA', oh + 96 + 12 * 8, IAT_VA - IMAGE_BASE),
        ('IAT dir size', oh + 96 + 12 * 8 + 4, IAT_SIZE),
        ('IMPORT dir RVA', oh + 96 + 1 * 8, IMPORT_DIR_VA - IMAGE_BASE),
        ('IMPORT dir size', oh + 96 + 1 * 8 + 4, IMPORT_DIR_SZ),
        ('RESOURCE dir RVA', oh + 96 + 2 * 8, RSRC_VA - IMAGE_BASE),
        ('RESOURCE dir size', oh + 96 + 2 * 8 + 4, RSRC_DIR_SZ),
    ]
    for name, off, want in checks:
        got = u32(hdr, off)
        if got != want:
            print('  MISMATCH field %s got %#x want %#x' % (name, got, want))
            ok = False
        else:
            print('  MATCH field %s %#x' % (name, got))
        # also vs vanilla
        if u32(vhdr, off) != got:
            print('  MISMATCH field %s vs vanilla %#x' % (name, u32(vhdr, off)))
            ok = False

    if not no_thunks:
        encodings, mism, _ = assemble_thunks(iat_rows)
        if mism:
            ok = False
            print('  MISMATCH thunk encodings (%d):' % len(mism))
            for va, want, got, sym in mism[:8]:
                print('    %08x %s want %s got %s' % (va, sym, want, got))
        else:
            print('  MATCH 33 thunk encodings (jmp *__imp_*, no hand .set) vs vanilla .text')
        if len(encodings) != 33:
            print('  WARNING assembled %d/33 thunks' % len(encodings))
            if len(encodings) != 33:
                ok = False

    if not ok:
        print('FAIL')
        sys.exit(1)
    print('PASS step 8 header + IAT + import directory + thunk encodings MATCH vanilla')


if __name__ == '__main__':
    main()
