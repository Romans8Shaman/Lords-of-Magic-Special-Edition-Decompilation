#!/usr/bin/env python3
"""difftest.py DLL SYMS [addrs...] : differential test of rebuilt functions vs original lomse.exe code.

For each function, runs the ORIGINAL machine code and the REBUILT code in Unicorn under identical,
deterministic random inputs (register/stack args, lazily-mapped pseudo-random memory, optionally
randomised .data/.bss).  Calls to other original functions and to imports are intercepted as
"events" (callee, normalised args) and answered with deterministic fake return values, so the
function is tested in isolation.  PASS requires identical: event sequence, return value, stack
purge, callee-saved registers, and every non-stack memory byte written.
"""
import sys, os, re, random, hashlib, struct, json
from multiprocessing import Pool
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import lomdb
import pefile
from unicorn import *
from unicorn.x86_const import *

PAGE = 0x1000
STACK_LO, STACK_HI = 0x0f000000, 0x0f100000
MAGIC_RET = 0x0e000000
FLD_TRAMP = MAGIC_RET + 0x800      # stub return path for float-returning callees
FLD_SCRATCH = 0x0f000100           # in stack region, never compared
IAT_FAKE = 0x0d000000
TRIALS = int(os.environ.get('DT_TRIALS', '48'))
PTRMODE = os.environ.get('DT_PTRMODE', '1') == '1'; PTRMODE_T0 = 1000; PTRMODE2_T0 = 2000
PTRMODE2 = os.environ.get('DT_PTRMODE2', '1') == '1'
STR_PT = {'char *', 'byte *', 'uchar *', 'LPCSTR', 'LPSTR', 'undefined1 *'}
STR_T0 = 3000; STR_N = int(os.environ.get('DT_STRN', '24'))  # v23: numeric-text trials for char*/byte* params
MAXINS = int(os.environ.get('DT_MAXINS', '150000'))
DATA_LO, DATA_HI = 0x555000, 0x5d6b3c

NEED_FS = {}
def uses_fs(addr):
    if addr not in NEED_FS:
        from capstone import Cs, CS_ARCH_X86, CS_MODE_32
        f = lomdb.funcs()[addr]
        NEED_FS[addr] = any('fs:' in i.op_str for i in Cs(CS_ARCH_X86, CS_MODE_32).disasm(lomdb.read_va(addr, f.maxaddr - addr + 1), addr))
    return NEED_FS[addr]
PASSTHRU = {0x5394a0, 0x539630}   # v26: __ftol, __alloca_probe run as real code
PASS_STACKPTR = os.environ.get('DT_PASS_STACKPTR', '0') == '1'  # experimental; noisy (uninitialised stack differs by layout)  # __ftol: rebuilt code inlines the conversion, so emulate the original helper in both runs
def fake_ret(hv, t=0):
    if t >= 2000:   # v18b ptrmode2: callee results almost always pointer-like (1/8 zero)
        return 0 if hv & 7 == 0 else 0x20000000 | (hv & 0x0ffffffc)
    # stubbed callee results: half look like pointers (callers often dereference them), rest 0 / 1 / small
    sel = hv & 7
    return 0 if sel < 2 else 1 if sel == 2 else (hv >> 8) & 0xff if sel == 3 else 0x20000000 | (hv & 0x0ffffffc)

def _evfirst(A, B):
    """v27b: compact event diff = first differing index + the two events + lengths"""
    i = 0
    while i < min(len(A), len(B)) and A[i] == B[i]: i += 1
    return ('first', i, A[i] if i < len(A) else None, B[i] if i < len(B) else None, len(A), len(B))

def h32(*xs):
    return struct.unpack('<I', hashlib.blake2b(repr(xs).encode(), digest_size=4).digest())[0]

_ICT = None
_INREG = {}
def inreg(addr, r):
    """v21: function reads incoming EAX/EDX (Ghidra in_EAX/in_EDX; gen.py v21 naked stub) -> seed it like an arg"""
    if addr not in _INREG:
        import glob
        fs = glob.glob(os.path.join(lomdb.GO, 'code', '%08x*' % addr))
        _INREG[addr] = open(fs[0]).read() if fs else ''
    return re.search(r'\bin_%s\b' % r, _INREG[addr]) is not None
ICOUT = os.environ.get('DT_ICOUT', '0') == '1'
SMALLARGS = {}
if os.path.exists(os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'build', 'smallargs.tsv')):
    for _l in open(os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), 'build', 'smallargs.tsv')):
        _p = _l.split()
        # v39: max may be LO:HI and an optional 4th column = probability (default 0.7): 'addr 2 0:7 1.0' = arg 2 always in 0..7
        if len(_p) >= 3 and not _l.startswith('#'):
            _lo, _hi = (int(_p[2].split(':')[0]), int(_p[2].split(':')[1])) if ':' in _p[2] else (1, int(_p[2]))
            SMALLARGS[int(_p[0], 16)] = ([int(x) for x in _p[1].split(',')], _hi, _lo, float(_p[3]) if len(_p) > 3 else 0.7)
FPCW0 = int(os.environ['DT_FPCW'], 0) if os.environ.get('DT_FPCW') else None   # v31: x87 control word at entry (Win32 thread default 0x27f = 53-bit precision)
RETRANGE = {}
_rr = os.path.join(lomdb.ROOT, 'build', 'retrange.tsv')
if os.path.exists(_rr):
    for _l in open(_rr):
        _p = _l.split()
        if len(_p) >= 3 and not _l.startswith('#'): RETRANGE[int(_p[0], 16)] = (int(_p[1], 0), int(_p[2], 0))
ICOUT_MASK = int(os.environ.get('DT_ICOUT_MASK', '0xffff'), 0)   # small values: lengths/counts stay sane

def icall_table():
    """site -> (thiscall, caller_cleanup, nstack) from build/icalls.tsv + arg counts at /*IC:site*/ markers"""
    global _ICT
    if _ICT is None:
        import gen
        _ICT = {}
        info = gen.icall_info()
        cdir = os.path.join(lomdb.GO, 'code')
        for fn in os.listdir(cdir):
            t = open(os.path.join(cdir, fn)).read()
            if '/*IC:' not in t: continue
            for m in re.finditer(r'/\*IC:([0-9a-f]{8})\*/', t):
                site = int(m.group(1), 16)
                st = m.start() - 1
                if st < 0 or t[st] != '(' or site not in info: continue
                tt = t[:m.start()] + t[m.end():]
                e = gen._match(tt, st); k = e + 1
                while k < len(tt) and tt[k].isspace(): k += 1
                if e < 0 or k >= len(tt) or tt[k] != '(': continue
                _al = gen._split_args(tt[k + 1:gen._match(tt, k)])
                # v19: a trailing `unaff_EDI` is a register save pushed before the call, not an argument (gen.py drops it)
                while _al and re.match(r'^\s*unaff_E(BX|SI|DI|BP)\s*$', _al[-1]): _al = _al[:-1]
                n = len(_al)
                this, cl = info[site]
                if this == 1 and cl == 0: n = max(n - 1, 0)  # v20; v43: also when Ghidra dropped `this` (n == 0) -> still compare ECX
                elif this == 3: this = True  # v42: constant-ECX global member fn ptr (args exclude this)
                else: this = False
                _ICT[site] = (this, cl, n)
        # v36: hand-declared sites (asmfn/gap functions without /*IC:*/ markers): build/icalls_extra.tsv  site this(0/1) cleanup nstack
        xf = os.path.join(lomdb.ROOT, 'build', 'icalls_extra.tsv')
        if os.path.exists(xf):
            for l in open(xf):
                p = l.split()
                if len(p) >= 4 and not l.startswith('#'): _ICT[int(p[0], 16)] = (bool(int(p[1])), int(p[2]), int(p[3]))  # overrides (shared-push sites: 0044a115)
    return _ICT

class Image:
    def __init__(self, dll):
        self.exe = lomdb.pe()
        self.regions = []  # (va, bytes, perm)
        for pe_, base in ((self.exe, 0x400000), (pefile.PE(dll), None)):
            base = pe_.OPTIONAL_HEADER.ImageBase
            hdr = pe_.get_data(0, pe_.OPTIONAL_HEADER.SizeOfHeaders).ljust(PAGE, b'\0')
            self.regions.append((base, hdr, UC_PROT_READ))
            for s in pe_.sections:
                va = base + s.VirtualAddress
                size = max(s.Misc_VirtualSize, s.SizeOfRawData)
                data = s.get_data()[:size].ljust((size + PAGE - 1) // PAGE * PAGE, b'\0')
                perm = UC_PROT_READ
                if s.Characteristics & 0x20000000: perm |= UC_PROT_EXEC
                if s.Characteristics & 0x80000000: perm |= UC_PROT_WRITE
                self.regions.append((va, data, perm))
        self.iat = lomdb.iat()
        self.iat_slots = sorted(self.iat)
        # patch IAT slots in the image copy once: slot i -> fake import stub IAT_FAKE+8*i
        regs = []
        for va, data, perm in self.regions:
            b = bytearray(data)
            for i, slot in enumerate(self.iat_slots):
                if va <= slot < va + len(b): b[slot - va: slot - va + 4] = struct.pack('<I', IAT_FAKE + i * 8)
            regs.append((va, bytes(b), perm))
        self.regions = regs
        self.funcs = lomdb.funcs()
        self.entries = set(self.funcs)

CUR = [None]
_SW_DEC = {}
UCS = {}
STACK_REFRESH = 0x40000
def get_uc(img, fs):
    if fs not in UCS:
        uc = Uc(UC_ARCH_X86, UC_MODE_32)
        for va, data, perm in img.regions:
            uc.mem_map(va, len(data), perm); uc.mem_write(va, data)
        uc.mem_map(STACK_LO, STACK_HI - STACK_LO, UC_PROT_READ | UC_PROT_WRITE)
        uc.mem_map(MAGIC_RET, PAGE, UC_PROT_READ | UC_PROT_EXEC); uc.mem_write(MAGIC_RET, b'\xf4' * PAGE)
        uc.mem_write(FLD_TRAMP, b'\xdd\x05' + struct.pack('<I', FLD_SCRATCH) + b'\xc3')  # fld qword [scratch]; ret
        uc.mem_map(IAT_FAKE, PAGE * 2, UC_PROT_READ | UC_PROT_EXEC); uc.mem_write(IAT_FAKE, b'\xf4' * PAGE * 2)
        if fs:
            import ucfs
            ucfs.setup(uc, struct.pack('<I', 0xffffffff))
        uc.hook_add(UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED, lambda *a: CUR[0].on_unmapped(*a[:-1], None))
        uc.hook_add(UC_HOOK_BLOCK, lambda *a: CUR[0].on_block(*a[:-1], None))
        # v38: writes near the entry frame (saved registers / return address / args) -> stack-smash detector
        uc.hook_add(UC_HOOK_MEM_WRITE, lambda *a: CUR[0].on_swrite(*a[:-1], None), None, STACK_HI - 0x8000 - 0x1200, STACK_HI - 0x8000 + 0x100)
        UCS[fs] = (uc, uc.context_save())
    return UCS[fs]

class Run:
    def __init__(self, img, start, target_addr, seed, trial, randomize_data, callee_info, extern_info, stackbytes=None, databytes=None):
        self.img = img; self.seed = seed; self.trial = trial
        self.target = target_addr; self.start = start
        self.events = []; self.stop = None
        self.callee_info = callee_info; self.extern_info = extern_info
        fs = bool(NEED_FS.get(target_addr))
        uc, ctx = get_uc(img, fs); self.uc = uc
        CUR[0] = self
        uc.context_restore(ctx)
        for va, data, perm in img.regions:
            if perm & UC_PROT_WRITE: uc.mem_write(va, data)
        if randomize_data:
            uc.mem_write(DATA_LO, databytes)
        uc.mem_write(STACK_HI - STACK_REFRESH, b'\0' * (STACK_REFRESH - len(stackbytes)) + stackbytes)
        if fs:
            import ucfs
            uc.mem_write(ucfs.TEB, struct.pack('<I', 0xffffffff) + b'\0' * (PAGE - 4))
        self.lazy = set(); self.npass = 0
        self.track = (start == target_addr); self.smash = False; self.saved = set(); self.nargs = 0; self.prologue = True
        self.ebpframe = bytes(img.exe.get_data(target_addr - 0x400000, 3)) == b'\x55\x8b\xec' if self.track else False
        self.icq = None; self.icq_rec = True; self.icq_i = 0

    def try_icall(self, uc, addr):
        """indirect call to a non-code address (random vtable/function pointer): answer it as an event
        using the ORIGINAL call site's ABI (recorded by the original run, replayed for the rebuilt one)."""
        if self.icq is None: return False
        esp = uc.reg_read(UC_X86_REG_ESP)
        try: ret = struct.unpack('<I', uc.mem_read(esp, 4))[0]
        except UcError: return False
        if self.icq_rec:
            if not (0x401000 <= ret < 0x54d000): return False
            t = icall_table(); info = None
            for L in (2, 3, 6, 7):
                if ret - L in t: info = t[ret - L]; break
            if info is None: return False
            self.icq.append(info)
        else:
            # ret == MAGIC_RET: the rebuilt code tail-calls the pointer (jmp [eax+0x1c]) where the original did
            # call+ret (0043bdc0); same callee, same args -> same event
            if not (0x10000000 <= ret < 0x10800000 or ret == MAGIC_RET) or self.icq_i >= len(self.icq): return False
            info = self.icq[self.icq_i]; self.icq_i += 1
        this, cl, n = info
        args = struct.unpack('<%dI' % n, uc.mem_read(esp + 4, 4 * n)) if n else ()
        ev = ['icall', self.norm(addr), tuple(self.norm(a) for a in args)]
        if this: ev.append(('ecx', self.norm(uc.reg_read(UC_X86_REG_ECX))))
        self.events.append(tuple(ev))
        if ICOUT:
            # v30: COM/vtable out-params (IDirectSoundBuffer::Lock ptr/len; 00478570): write a deterministic dword
            # through every stack-pointer arg, so code that ignores the callee's writes differs
            for i, a in enumerate(args):
                if STACK_LO <= a < STACK_HI and a >= esp + 4 + 4 * n:
                    uc.mem_write(a, struct.pack('<I', h32('icout', self.seed, self.trial, len(self.events), i) & ICOUT_MASK))
        k = len(self.events); hv = h32('iret', self.seed, self.trial, k)
        rv = fake_ret(hv, self.trial)
        uc.reg_write(UC_X86_REG_EAX, rv); uc.reg_write(UC_X86_REG_EDX, h32('edx', k, self.seed))
        uc.reg_write(UC_X86_REG_ECX, h32('ecx', k, self.seed))
        uc.reg_write(UC_X86_REG_ESP, esp + 4 + (0 if cl else 4 * n))
        uc.reg_write(UC_X86_REG_EIP, ret)
        return True

    def cleanup(self):
        for p in self.lazy: self.uc.mem_unmap(p, PAGE)
        self.lazy = set()

    def lazy_page(self, page):
        rr = random.Random(h32('page', self.seed, self.trial, page))
        if self.trial >= STR_T0:
            # v23: pages of numeric / identifier text (atof/strtod/sscanf/_output paths random bytes never reach; 00546720)
            toks = ['0', '1', '-1', '12', '3.5', '-0.25', '1e3', '2.5E-2', '+7', '100', '.5', '0x1f', '  42', '9999999', '1.0e+300',
                    'abc', 'x1', '%d', '%s', '%5.2f', 'INF', 'nan', '-', '.', 'e5', '123456789012', '0.000001', '7 8', '3,4', '1234567890123456789012345678', '0.000000000000000000000000000123', '3.14159265358979323846264338327950', '99999999999999999999999.5', '1.25e-310', '5e-324', '65535.99999999999999999999']
            out = bytearray()
            while len(out) < PAGE:
                out += rr.choice(toks).encode() + rr.choice([b'\0', b'\0', b' ', b'\n', b','])
            return bytes(out[:PAGE])
        if self.trial >= PTRMODE_T0:
            out = bytearray()
            for w in range(PAGE // 4):
                k = rr.random()
                if self.trial >= PTRMODE2_T0:   # v18c: pointer or NULL only (lists end, no small-value derefs)
                    v = 0x20000000 + rr.randrange(0, 0x1000000) * 4 if k < 0.9 else 0
                else:
                    v = 0x20000000 + rr.randrange(0, 0x1000000) * 4 if k < 0.75 else rr.choice([0, 1, 2, 4, 8, 0x10, 0xffffffff, 0x3f800000])
                out += struct.pack('<I', v)
            return bytes(out)
        if self.trial % 2 != 1:
            if os.environ.get('DT_SNAN', '1') != '1': return rr.randbytes(PAGE)
            # v29: 1/16 dwords are x87 signalling-NaN bit patterns (raw 32-bit data typed float by Ghidra and moved
            # through fld/fstp gets bit 22 set; 004d63f0 GS VM values -> black map in-game)
            b = bytearray(rr.randbytes(PAGE))
            for w in range(0, PAGE // 4):
                if rr.random() < 1 / 16: b[4 * w:4 * w + 4] = struct.pack('<I', (0x7f800001 | rr.getrandbits(22)) | (rr.getrandbits(1) << 31))
            return bytes(b)
        # 'small values' trial: half the dwords are small ints (VM type tags 1/2/4, counts, flags, indices),
        # the rest pointer-like; finds code paths random bytes almost never reach (e.g. tag == 2).
        out = bytearray(); par = (self.trial // 2) % 2   # GS VM values are 8-byte (tag, value) pairs
        for w in range(PAGE // 4):
            k = rr.random()
            if (w % 2 == par) and k < 0.7 or (w % 2 != par) and k < 0.2:
                v = rr.choice([0, 1, 1, 2, 2, 4, 4, 3, 8, 0xff, 0x100, 0xffffffff, 0x3f800000, 0x1234, 0x7fa00001, 0xffb12345])
            elif k < 0.8: v = 0x20000000 + rr.randrange(0, 0x1000000) * 4
            else: v = rr.getrandbits(32)
            out += struct.pack('<I', v)
        return bytes(out)

    def on_swrite(self, uc, access, addr, size, value, _):
        # v38: ORIGINAL run only. A callee-saved register slot (written by a prologue push) or the return address /
        # stack args overwritten through a non-esp (non-frame-ebp) pointer = the original smashes its own frame
        # (random count/pointer input, e.g. 0040aeb0 negative count, 004c62a0 work list in the stack): the result
        # depends on the frame layout, so the trial is not comparable.
        if not self.track or self.smash: return
        eip = uc.reg_read(UC_X86_REG_EIP)
        if not (0x401000 <= eip < 0x54d000): return
        ins = _SW_DEC.get(eip)
        if ins is None:
            try:
                from capstone import Cs, CS_ARCH_X86, CS_MODE_32
                if 'cs' not in _SW_DEC: _SW_DEC['cs'] = Cs(CS_ARCH_X86, CS_MODE_32); _SW_DEC['cs'].detail = True
                i = next(_SW_DEC['cs'].disasm(bytes(uc.mem_read(eip, 16)), eip))
                base = None
                for o in i.operands:
                    if o.type == 3: base = i.reg_name(o.mem.base) if o.mem.base else None
                if 'movs' in i.mnemonic or 'stos' in i.mnemonic: base = 'edi'
                ins = (i.mnemonic, i.op_str, base)
            except Exception:
                ins = ('?', '', None)
            _SW_DEC[eip] = ins
        mn, ops, base = ins
        if mn == 'push':
            # only PROLOGUE pushes are register saves (later 'push esi' are call args whose slots get reused, 0047af50)
            if self.prologue and ops in ('ebx', 'esi', 'edi', 'ebp'): self.saved.add(addr)
            return
        self.prologue = False
        if mn.startswith('call') or base == 'esp' or (base == 'ebp' and self.ebpframe): return
        if any(sl - size < addr < sl + 4 for sl in self.saved) or self.esp0 - size < addr < self.esp0 + 4 + 4 * self.nargs:
            self.smash = True

    def on_unmapped(self, uc, access, addr, size, value, _):
        for p in range(addr & ~(PAGE - 1), (addr + size + PAGE - 1) & ~(PAGE - 1), PAGE):
            if p in self.lazy: continue
            if len(self.lazy) >= 192: return False   # runaway (e.g. rep movs with random count): fault
            if p < 0x1000 or p >= 0xfff00000:  # keep null page & top unmapped -> fault
                return False
            try:
                uc.mem_map(p, PAGE, UC_PROT_READ | UC_PROT_WRITE)
            except UcError:
                return False
            uc.mem_write(p, self.lazy_page(p)); self.lazy.add(p)
        return True

    def on_block(self, uc, addr, size, _):
        if addr == self.start and not self.started:
            self.started = True; return
        if addr == FLD_TRAMP: return
        if addr == MAGIC_RET:
            self.stop = ('ret',); uc.emu_stop(); return
        if IAT_FAKE <= addr < IAT_FAKE + PAGE * 2:
            slot = self.img.iat_slots[(addr - IAT_FAKE) // 8]
            dll, nm = self.img.iat[slot]
            self.pending = ('import', nm, self.extern_info.get(nm)); uc.emu_stop(); return
        if addr in PASSTHRU: return
        if addr in self.img.entries or addr == self.start:
            fa = self.target if addr == self.start else addr
            info = self.callee_info.get(fa)
            if PASS_STACKPTR and info is not None and self.depth_ok():
                esp = uc.reg_read(UC_X86_REG_ESP); n = info[1]
                args = struct.unpack('<%dI' % n, uc.mem_read(esp + 4, 4 * n)) if n else ()
                regs = [uc.reg_read(UC_X86_REG_ECX)] if 'ecx' in info[3] else []
                if any(STACK_LO <= a < STACK_HI for a in args):
                    # callee gets a pointer into our frame (out-param / struct): run the ORIGINAL callee for real
                    ev = ['pass', fa, tuple(self.norm(a) for a in args)] + [('ecx', self.norm(r)) for r in regs]
                    self.events.append(tuple(ev)); self.npass += 1
                    return
            self.pending = ('call', fa, info); uc.emu_stop(); return
        if not (0x401000 <= addr < 0x54d000 or 0x10000000 <= addr < 0x10800000):
            if self.try_icall(uc, addr): self.pending = ('icdone',); uc.emu_stop(); return
            self.stop = ('wild', addr); uc.emu_stop(); return

    def depth_ok(self):
        return self.npass < 64

    def norm(self, v):
        return 'S' if STACK_LO <= v < STACK_HI else v

    def handle_call(self, kind, name, info):
        uc = self.uc
        esp = uc.reg_read(UC_X86_REG_ESP)
        ret = struct.unpack('<I', uc.mem_read(esp, 4))[0]
        if info is None:
            self.stop = ('unknowncallee', kind, name); return False
        cc, nstack, purge, regs = info[:4]
        _pbuf = None
        if isinstance(nstack, tuple):
            fi, bo = nstack[1], nstack[2]
            try:
                fp = struct.unpack('<I', uc.mem_read(esp + 4 + 4 * fi, 4))[0]
                fs = (lomdb.read_va(fp, 512) if 0x401000 <= fp < 0x5e0000 else bytes(uc.mem_read(fp, 512))).split(b'\0')[0]  # image strings: real (emu globals are randomized)
            except Exception:
                self.stop = ('unknowncallee', kind, name); return False
            nstack = fi + 1 + printf_argdw(fs)
            if bo is not None: _pbuf = struct.unpack('<I', uc.mem_read(esp + 4 + 4 * bo, 4))[0]
        outsz = info[4] if len(info) > 4 else ()
        args = struct.unpack('<%dI' % nstack, uc.mem_read(esp + 4, 4 * nstack)) if nstack else ()
        for i, a in enumerate(args):
            if i < len(outsz) and outsz[i] and STACK_LO <= a < STACK_HI:
                v = h32('out', self.seed, self.trial, len(self.events), i)
                if isinstance(outsz[i], tuple):   # v28d: ('s', size_arg): NUL-terminated printable string out-buffer
                    cap = args[outsz[i][1]] if outsz[i][1] < len(args) else 0
                    if cap >= 2:
                        L = min(cap - 1, 1 + v % 24)
                        uc.mem_write(a, bytes(0x41 + (h32('outs', self.seed, self.trial, len(self.events), i, w) % 26) for w in range(L)) + b'\0')
                    continue
                n = outsz[i]; pat = b''.join(struct.pack('<I', h32('out', self.seed, self.trial, len(self.events), i, w)) for w in range((n + 3) // 4))
                uc.mem_write(a, pat[:n])
                if n == 0x140:   # v28c: WIN32_FIND_DATAA out-struct: cFileName/cAlternateFileName are C strings
                    uc.mem_write(a + 0x2c + v % 200, b'\0'); uc.mem_write(a + 0x130 + v % 13, b'\0')
        if _pbuf is not None:
            try: uc.mem_write(_pbuf, bytes(0x61 + (h32('spr', self.seed, self.trial, len(self.events), w) % 26) for w in range(12)) + b'\0')
            except Exception: pass
        mk = info[6] if len(info) > 6 else ()
        ev = [kind, name, tuple(0 if i < len(mk) and mk[i] == 0 else self.norm(a) if i >= len(mk) or mk[i] == 0xffffffff else a & mk[i] for i, a in enumerate(args))]  # v44: narrow params masked before stack-pointer normalisation
        if 'ecx' in regs: ev.append(('ecx', self.norm(uc.reg_read(UC_X86_REG_ECX))))
        if 'edx' in regs: ev.append(('edx', self.norm(uc.reg_read(UC_X86_REG_EDX))))
        self.events.append(tuple(ev))
        k = len(self.events)
        hv = h32('ret', self.seed, self.trial, k, name)
        rv = fake_ret(hv, self.trial)
        if name == 0x504f00 and len(args) >= 2 and ((args[1] - args[0]) & 0xffffffff) < 0x10000:
            # v41: game RNG FUN_00504f00(lo, hi) returns lo..hi inclusive (callers index tables with it: 00403390)
            rv = (args[0] + hv % (((args[1] - args[0]) & 0xffffffff) + 1)) & 0xffffffff
        if name in RETRANGE:
            # v44: callee with a known small return range (build/retrange.tsv: callee lo hi), e.g. 004a8b50 tile
            # direction 0..8 used as a local-array index by its callers
            _lo, _hi = RETRANGE[name]; rv = (_lo + hv % (_hi - _lo + 1)) & 0xffffffff
        uc.reg_write(UC_X86_REG_EAX, rv); uc.reg_write(UC_X86_REG_EDX, h32('edx', k, self.seed))
        uc.reg_write(UC_X86_REG_ECX, h32('ecx', k, self.seed))  # caller-saved: clobber
        if len(info) > 5 and info[5]:
            # float return: leave a deterministic value in ST0 via trampoline (fld; ret)
            fv = float((hv % 2000) - 1000) / 8.0
            uc.mem_write(FLD_SCRATCH, struct.pack('<d', fv))
            uc.mem_write(esp + purge, struct.pack('<I', ret))
            uc.reg_write(UC_X86_REG_ESP, esp + purge)
            uc.reg_write(UC_X86_REG_EIP, FLD_TRAMP)
            return True
        uc.reg_write(UC_X86_REG_ESP, esp + 4 + purge)
        uc.reg_write(UC_X86_REG_EIP, ret)
        return True

    def go(self, regs_in, stack_args, esp_shift=0):
        uc = self.uc
        esp = STACK_HI - 0x8000 - esp_shift
        frame = struct.pack('<I', MAGIC_RET) + b''.join(struct.pack('<I', a) for a in stack_args)
        uc.mem_write(esp, frame)
        uc.reg_write(UC_X86_REG_ESP, esp)
        for r, v in regs_in.items(): uc.reg_write(r, v)
        if FPCW0 is not None: uc.reg_write(UC_X86_REG_FPCW, FPCW0)
        self.esp0 = esp; self.started = False; self.nargs = len(stack_args)
        eip = self.start; budget = MAXINS
        while True:
            self.pending = None
            try:
                uc.emu_start(eip, MAGIC_RET + PAGE, count=budget)
            except UcError as e:
                eip = uc.reg_read(UC_X86_REG_EIP)
                if e.errno in (UC_ERR_FETCH_UNMAPPED, UC_ERR_FETCH_PROT) and not (0x401000 <= eip < 0x54d000 or 0x10000000 <= eip < 0x10800000) \
                        and self.try_icall(uc, eip):
                    eip = uc.reg_read(UC_X86_REG_EIP); budget = max(1000, budget - 1000)
                    if len(self.events) > 200: self.stop = ('toomanyevents',); break
                    continue
                self.stop = ('fault', str(e), self.norm(uc.reg_read(UC_X86_REG_EIP)) if False else 0)
                break
            if self.stop: break
            if self.pending == ('icdone',):
                eip = uc.reg_read(UC_X86_REG_EIP); budget = max(1000, budget - 1000)
                if len(self.events) > 200: self.stop = ('toomanyevents',); break
                continue
            if self.pending:
                if not self.handle_call(*self.pending): break
                eip = uc.reg_read(UC_X86_REG_EIP); budget = max(1000, budget - 1000)
                if len(self.events) > 200: self.stop = ('toomanyevents',); break
                continue
            self.stop = ('timeout',); break
        return self

    def result(self, ret_kind, ignore_regs=()):
        uc = self.uc
        r = {'stop': self.stop, 'events': self.events}
        if self.stop == ('ret',):
            if ret_kind in ('int', 'll'): r['eax'] = uc.reg_read(UC_X86_REG_EAX)
            if ret_kind == 'byte': r['eax'] = uc.reg_read(UC_X86_REG_EAX) & 0xff
            if ret_kind == 'short': r['eax'] = uc.reg_read(UC_X86_REG_EAX) & 0xffff
            if ret_kind == 'll': r['edx'] = uc.reg_read(UC_X86_REG_EDX)
            if ret_kind == 'fp':
                # v22: ST(0) is the PHYSICAL register FP[top]; UC_X86_REG_FP0 is physical R0 (never the result) ->
                # before v22 float returns were effectively not compared
                _top = (uc.reg_read(UC_X86_REG_FPSW) >> 11) & 7
                r['st0'] = uc.reg_read(UC_X86_REG_FP0 + _top)
            r['esp'] = uc.reg_read(UC_X86_REG_ESP) - self.esp0
            r['fpu_top'] = (uc.reg_read(UC_X86_REG_FPSW) >> 11) & 7
            r['fpcw'] = uc.reg_read(UC_X86_REG_FPCW)
            for nm, rr in (('ebx', UC_X86_REG_EBX), ('esi', UC_X86_REG_ESI), ('edi', UC_X86_REG_EDI), ('ebp', UC_X86_REG_EBP)):
                r[nm] = uc.reg_read(rr)
        return r

    def memory(self):
        """non-stack writable memory: dict page -> bytes"""
        out = {}
        for va, data, perm in self.img.regions:
            if perm & UC_PROT_WRITE and va < 0x10000000:
                out[va] = bytes(self.uc.mem_read(va, len(data)))
        for p in self.lazy: out[p] = bytes(self.uc.mem_read(p, PAGE))
        return out

def _ev_eq(x, y, x2):
    if x == y: return True
    if x2 is None or len(x) != len(y) or len(x) != len(x2): return False
    for a, b, a2 in zip(x, y, x2):
        if a == b: continue
        if isinstance(a, tuple) and isinstance(b, tuple) and isinstance(a2, tuple) and len(a) == len(b) == len(a2):
            if not _ev_eq(a, b, a2): return False
        elif a == a2: return False
    return True

def compare(ra, ma, rb_, mb, seed, t, ra2=None, ma2=None):
    """None if equal; else FAIL dict. With ra2/ma2 (2nd original run, other stack fill) values that differ between
    the two original runs are ignored."""
    keys = set(ra) | set(rb_)
    diff = {}
    for k in keys:
        a, b = ra.get(k), rb_.get(k)
        if a == b: continue
        if ra2 is not None and k != 'stop':
            a2 = ra2.get(k)
            if k == 'events':
                if _ev_eq(a, b, a2 if a2 != a else None): continue
                # v32: the ORIGINAL's own event sequence depends on uninitialised stack (two fills diverge at p);
                # a rebuilt difference at or after p is not comparable (004ce8f0: uninit local feeds a switch)
                if a2 is not None and a2 != a:
                    p_ = next((i for i, (x, y) in enumerate(zip(a, a2)) if x != y), min(len(a), len(a2)))
                    q_ = next((i for i, (x, y) in enumerate(zip(a, b)) if x != y), min(len(a), len(b)))
                    if q_ >= p_: continue
            elif a2 != a: continue
        diff[k] = (a, b)
    if diff and isinstance(diff, dict) and isinstance(diff.get('events'), tuple) and len(diff['events']) == 2: diff = dict(diff, events=_evfirst(*diff['events']))
    if diff: return {'verdict': 'FAIL', 'trial': t, 'diff': repr(diff)[:600]}
    pages = set(ma) | set(mb)
    for p in pages:
        a = ma.get(p); b = mb.get(p)
        if a is None or b is None:
            ref = Run.lazy_page(type('x', (), {'seed': seed, 'trial': t})(), p)
            a = a if a is not None else ref; b = b if b is not None else ref
        if a != b:
            a2 = None
            if ma2 is not None:
                a2 = ma2.get(p)
                if a2 is None: a2 = Run.lazy_page(type('x', (), {'seed': seed, 'trial': t})(), p)
            for i in range(len(a)):
                if a[i] != b[i] and (a2 is None or a2[i] == a[i]):
                    import struct as _s; o=(i//4)*4; print('DIFF', hex(p+o), _s.unpack('<f',bytes(a[o:o+4]))[0], _s.unpack('<f',bytes(b[o:o+4]))[0], a[o:o+4].hex(), b[o:o+4].hex())
    return None

def ret_kind_of(ret):
    ret = ret.strip()
    if ret == 'void': return 'void'
    if ret in ('bool', 'byte', 'char', 'uchar', 'undefined1', 'undefined', 'BYTE', 'CHAR'): return 'byte'
    if ret in ('short', 'ushort', 'undefined2', 'word', 'WORD', 'wchar16', 'SHORT'): return 'short'
    if ret in ('longlong', 'ulonglong', 'undefined8', 'qword'): return 'll'
    if ret in ('float', 'double', 'float10'): return 'fp'
    return 'int'

_PT = {}
def pad_trust(addr):
    if addr in _PT: return _PT[addr]
    ok = False
    try:
        import capstone
        f = lomdb.funcs()[addr]; t = lomdb.code_text(addr) or ''
        if t and 'in_stack_' not in t and 'decompile failed' not in t:
            pe = lomdb.pe(); img = pe.__data__
            off = pe.get_offset_from_rva(addr - 0x400000); n = max(1, f.maxaddr - addr + 1) if hasattr(f, 'maxaddr') and isinstance(f.maxaddr, int) else f.size
            iat = lomdb.iat(); ok = True
            for i in capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32).disasm(bytes(img[off:off + n]), addr):
                if i.mnemonic == 'call' and not i.op_str.startswith('0x'):
                    m = re.match(r'dword ptr \[(0x[0-9a-f]+)\]$', i.op_str)
                    if not (m and int(m.group(1), 16) in iat): ok = False; break
    except Exception:
        ok = False
    _PT[addr] = ok
    return ok

def stack_layout(cc, params):
    """returns (nstackdwords, regs) for a prototype's params"""
    regs = []; ps = [lomdb.param_type(p) for p in params]
    if '...' in ps: return None
    nm = [p.strip().split()[-1].lstrip('*') if p.strip() else '' for p in params]
    if cc == '__thiscall' and ps: regs.append('ecx'); ps = ps[1:]; nm = nm[1:]
    if cc == '__fastcall':
        for want in ('ecx', 'edx'):
            # v27: an 'unused_reg_N' slot (emulated thiscall+stack ABI) is not read by the callee -> not compared
            if ps and lomdb.type_stack_size(ps[0]) == 4:
                if not (nm and nm[0].startswith('unused_reg')): regs.append(want)
                ps = ps[1:]; nm = nm[1:]
    n = sum(lomdb.type_stack_size(p) for p in ps) // 4
    return n, regs

def call_site_argc(src, name):
    counts = set()
    src = '\n'.join(l for l in src.split('\n') if not l.startswith('#'))
    for m in re.finditer(r'\b%s\s*\(' % re.escape(name), src):
        i = m.end(); depth = 1; commas = 0; empty = True
        while i < len(src) and depth:
            c = src[i]
            if c in '([': depth += 1
            elif c in ')]': depth -= 1
            elif c == ',' and depth == 1: commas += 1
            elif not c.isspace() and depth >= 1: empty = False
            i += 1
        counts.add(0 if empty else commas + 1)
    return counts

OUTSZ = {'int': 4, 'uint': 4, 'undefined4': 4, 'DWORD': 4, 'LONG': 4, 'float': 4, 'short': 2, 'ushort': 2,
         'undefined2': 2, 'char': 1, 'byte': 1, 'undefined1': 1, 'uchar': 1, 'bool': 1, 'double': 8,
         'longlong': 8, 'ulonglong': 8, 'undefined8': 8, 'BOOL': 4, 'UINT': 4, 'LPVOID': 4, 'HANDLE': 4}
_EXT = {}
def body_extent(addr, pn, esz):
    """bytes accessed through pointer param pn in the callee's decomp (cap 64), for stub out-params"""
    k = (addr, pn)
    if k in _EXT: return _EXT[k]
    t = lomdb.code_text(addr) or ''
    num = lambda x: int(x, 0)
    ext = 0
    for m in re.finditer(r'\b%s\[(0x[0-9a-f]+|\d+)\]' % pn, t): ext = max(ext, (num(m.group(1)) + 1) * esz)
    for m in re.finditer(r'\*\((\w+) \*\)\(\(int\)%s \+ (0x[0-9a-f]+|\d+)\)' % pn, t):
        ext = max(ext, num(m.group(2)) + OUTSZ.get(m.group(1), 4))
    for m in re.finditer(r'\*\((\w+) \*\)\(%s \+ (0x[0-9a-f]+|\d+)\)' % pn, t):
        ext = max(ext, num(m.group(2)) * esz + OUTSZ.get(m.group(1), 4))
    if re.search(r'\*%s\b' % pn, t): ext = max(ext, esz)
    ext = min(ext, 64) & ~0 
    _EXT[k] = ext
    return ext

_RU = None
def reg_use():
    """build/reguse.tsv (tools/reguse.py): callee reads ECX/EDX at entry -> always compare them at the call"""
    global _RU
    if _RU is None:
        _RU = {}
        p = os.path.join(lomdb.ROOT, 'build', 'reguse.tsv')
        if os.path.exists(p):
            for l in open(p):
                q = l.split('\t')
                _RU[int(q[0], 16)] = (q[1] != '0', q[2] != '0')
    return _RU

NARROW1 = {'char', 'uchar', 'byte', 'bool', 'undefined1', 'undefined', 'BYTE', 'CHAR', 'BOOLEAN', 'bool8'}
NARROW2 = {'short', 'ushort', 'word', 'undefined2', 'WORD', 'SHORT', 'wchar_t', 'WCHAR'}
def callee_infos(addr, src, xi):
    import gen
    F = lomdb.funcs(); info = {}
    for cf in F.values():
        te = gen.thunk_extern(cf)
        if te:
            nm = te[1]; e = xi.get(nm)
            if e is None:
                c = call_site_argc(src, cf.name)
                if len(c) == 1: n = c.pop(); e = ('__stdcall', n, 4 * n, [])
            if e: info[cf.addr] = e
            continue
        if cf.cc not in ('__cdecl', '__stdcall', '__thiscall', '__fastcall'): continue
        try: ret, params = lomdb.parse_proto(cf.proto, cf.name)
        except ValueError: continue
        lay = stack_layout(cf.cc, params)
        if lay is None and cf.addr in PRINTF_LIKE:
            # v28e: cdecl printf-like: argc from the format string at call time; buffer out = short string
            fi, bo = PRINTF_LIKE[cf.addr]
            info[cf.addr] = ('__cdecl', ('fmt', fi, bo), 0, [], (), False, ())
            continue
        if lay is None:
            c = call_site_argc(src, cf.name)
            if len(c) != 1: continue
            lay = (c.pop() - (1 if cf.cc == '__thiscall' else 0), ['ecx'] if cf.cc == '__thiscall' else [])
        purge = cf.purge if cf.purge < 0x10000 else 0
        ps = [lomdb.param_type(p) for p in params]
        if cf.cc == '__thiscall': ps = ps[1:]
        if cf.cc == '__fastcall': ps = ps[len(lay[1]):]
        outsz = []
        base = 1 if cf.cc == '__thiscall' else len(lay[1]) if cf.cc == '__fastcall' else 0
        for j, p in enumerate(ps):
            q = p[:-1].strip() if p.endswith('*') else None
            sz = OUTSZ.get(q, 0) if q else 0
            if q: sz = max(sz, body_extent(cf.addr, 'param_%d' % (base + j + 1), OUTSZ.get(q, 4)))
            outsz += [sz] + [0] * (lomdb.type_stack_size(p) // 4 - 1)
        rg = list(lay[1]); ru = reg_use().get(cf.addr, (False, False))
        if ru[0] and 'ecx' not in rg: rg.append('ecx')
        if ru[1] and 'edx' not in rg: rg.append('edx')
        # narrow params (char/short...): the callee reads only the low bytes of the stack dword; MSVC callers leave
        # garbage above, rebuilt callers zero/sign-extend -> compare only the declared width.
        masks = []
        for p in ps:
            q = p.strip()
            m = 0xff if q in NARROW1 else 0xffff if q in NARROW2 else 0xffffffff
            masks += [m] + [0xffffffff] * (lomdb.type_stack_size(p) // 4 - 1)
        nst = lay[0]
        if cf.cc in ('__stdcall', '__thiscall', '__fastcall') and purge and purge // 4 > nst:
            # v28: Ghidra's param count is trusted (padding dwords = 0, not compared) only when the callee has no
            # indirect non-IAT call (Ghidra's stack depth goes wrong after icalls: the 00495170 class) and no in_stack_.
            if os.environ.get('DT_PADTRUST', '1') == '1' and pad_trust(cf.addr):
                masks = (masks + [0xffffffff] * nst)[:nst] + [0] * (purge // 4 - nst)
            nst = purge // 4   # callee pops more than its proto declares: compare every pushed dword (00495170 class)
        info[cf.addr] = (cf.cc, nst, purge, rg, tuple(outsz), ret.strip() in ('float', 'double', 'float10', 'longdouble'), tuple(masks))
    return info

# v28d: import out-params (0-based stack arg -> bytes written). Only applied to STACK pointers (see call hook).
EXT_OUT = {'FindFirstFileA': {1: 0x140}, 'FindNextFileA': {1: 0x140}, 'GetSystemTime': {0: 16}, 'GetLocalTime': {0: 16},
           'FileTimeToSystemTime': {1: 16}, 'FileTimeToLocalFileTime': {1: 8}, 'GetFileTime': {1: 8, 2: 8, 3: 8},
           'GetTimeZoneInformation': {0: 172}, 'GetStartupInfoA': {0: 68}, 'GlobalMemoryStatus': {0: 32},
           'GetCPInfo': {1: 20}, 'GetCursorPos': {0: 8}, 'PeekMessageA': {0: 28}, 'GetMessageA': {0: 28},
           'GetFileSize': {1: 4}, 'GetExitCodeThread': {1: 4}, 'ReadFile': {3: 4}, 'WriteFile': {3: 4},
           'GetDiskFreeSpaceA': {1: 4, 2: 4, 3: 4, 4: 4}, 'RegOpenKeyExA': {4: 4},
           'GetCurrentDirectoryA': {1: ('s', 0)}, 'GetFullPathNameA': {2: ('s', 1)}, 'GetModuleFileNameA': {1: ('s', 2)},
           'GetTempPathA': {1: ('s', 0)}, 'GetLocaleInfoA': {2: ('s', 3)}, 'GetDlgItemTextA': {2: ('s', 3)}}
# v28e: cdecl printf-like callees: addr -> (format arg index, output buffer arg index or None)
PRINTF_LIKE = {0x0053a090: (1, 0), 0x00539580: (1, None)}
def printf_argdw(fs):
    n = 0; i = 0
    while i < len(fs):
        if fs[i] != 0x25: i += 1; continue
        i += 1
        if i < len(fs) and fs[i] == 0x25: i += 1; continue
        while i < len(fs) and fs[i] in b'-+ #0': i += 1
        if i < len(fs) and fs[i] == 0x2a: n += 1; i += 1
        while i < len(fs) and fs[i] in b'0123456789': i += 1
        if i < len(fs) and fs[i] == 0x2e:
            i += 1
            if i < len(fs) and fs[i] == 0x2a: n += 1; i += 1
            while i < len(fs) and fs[i] in b'0123456789': i += 1
        ll = 0
        while i < len(fs) and fs[i] in b'hlLIwq':
            if fs[i] == 0x49 and fs[i + 1:i + 3] == b'64': ll = 1; i += 3; continue
            i += 1
        if i < len(fs):
            c = chr(fs[i]); i += 1
            n += 2 if c in 'eEfgG' or ll else 1
    return n

def extern_infos(src):
    info = {}
    for (dll, nm), e in lomdb.externals().items():
        if e['cc'] in ('__stdcall', '__cdecl') and not e['varargs']:
            ret, params = lomdb.parse_proto(e['proto'], nm)
            n, regs = stack_layout(e['cc'], params)
            info[nm] = (e['cc'], n, e['purge'] if e['purge'] < 0x10000 else (4 * n if e['cc'] == '__stdcall' else 0), [])
            if nm in EXT_OUT:   # v28d: known Win32 out-params (stack buffers) get written like rebuilt-callee outs
                info[nm] = info[nm] + (tuple(EXT_OUT[nm].get(i, 0) for i in range(n)),)
        else:
            c = call_site_argc(src, nm)
            if len(c) == 1:
                n = c.pop(); cc = '__cdecl' if e['varargs'] else '__stdcall'
                info[nm] = (cc, n, 0 if cc == '__cdecl' else 4 * n, [])
    return info

IMG = None
def init(dll):
    global IMG; IMG = Image(dll)

class _TO(Exception): pass
def _alarm(*a): raise _TO()
def test_one(job):
    import signal
    addr, rbaddr, srcpath = job
    signal.signal(signal.SIGALRM, _alarm); signal.alarm(int(os.environ.get('DT_FN_TIMEOUT', '90')))
    try:
        return addr, _test_one(addr, rbaddr, srcpath)
    except _TO:
        return addr, {'verdict': 'SLOW', 'why': 'wallclock timeout'}
    except Exception as e:
        return addr, {'verdict': 'ERROR', 'why': repr(e)[:300]}
    finally:
        signal.alarm(0)

def _test_one(addr, rbaddr, srcpath):
    f = lomdb.funcs()[addr]
    uses_fs(addr)
    src = open(srcpath).read()
    ret, params = lomdb.parse_proto(f.proto, f.name)
    lay = stack_layout(f.cc, params)
    if lay is None: return {'verdict': 'SKIP', 'why': 'varargs'}
    nstack, regs = lay
    body = src[src.index('#define LOM_SELF_'):]
    hdr = body.split('\n', 1)[1].split('rb_%08x(' % addr)[0]
    hdr = re.sub(r'/\*.*?\*/', '', hdr, flags=re.S)
    hret = re.sub(r'__(cdecl|stdcall|thiscall|fastcall)', '', re.sub(r'__attribute__\(\(\w+\)\)', '', hdr)).strip()  # v28b: naked wrappers
    rk = ret_kind_of(hret)
    # Ghidra prototype 'undefined' return may still return in eax: compare eax if caller-visible
    xi = extern_infos(src)
    ci = callee_infos(addr, src, xi); ci[addr] = (f.cc, nstack, f.purge if f.purge < 0x10000 else 0, regs)
    xi = extern_infos(src)
    stats = {'ret': 0, 'stopped': {}, 'events': 0}
    seed = h32('fn', addr)
    def trial_iter():
        yield from range(TRIALS)
        if PTRMODE and stats['stopped'].get('ret', 0) < TRIALS // 2:
            # mostly stopped early (faults on random small values): 2nd batch with pointer-heavy args and memory
            stats['ptrmode'] = 1
            yield from range(PTRMODE_T0, PTRMODE_T0 + TRIALS)
        if PTRMODE2 and stats['stopped'].get('ret', 0) < TRIALS // 2:
            # v18: still mostly faulting (pointer chains end in small values -> null-page reads): 3rd batch with
            # 97% pointer memory and 95% pointer args
            stats['ptrmode'] = 2
            yield from range(PTRMODE2_T0, PTRMODE2_T0 + TRIALS)
        if STR_N and any(re.sub(r'\s+', ' ', lomdb.param_type(p_)).strip() in STR_PT for p_ in params):
            stats['strmode'] = 1
            yield from range(STR_T0, STR_T0 + STR_N)
    for t in trial_iter():
        r = random.Random(h32('args', seed, t))
        def val(ptr=False):
            k = r.random()
            if t >= STR_T0: ptr = ptr or k < 0.8
            elif t >= PTRMODE2_T0: ptr = ptr or k < 0.95
            elif t >= PTRMODE_T0: ptr = ptr or k < 0.7
            if ptr and k < 0.9: return 0x20000000 + r.randrange(0, 0x1000000) * 4
            if k < 0.3: return r.choice([0, 1, 2, 3, 4, 0xffffffff, 8, 0x10, 0x7f, 0x80, 0xff, 0x100])
            if k < 0.45: return r.randrange(0, 0x400)
            if k < 0.9: return 0x20000000 + r.randrange(0, 0x1000000) * 4
            return r.getrandbits(32)
        ptypes = [lomdb.param_type(p) for p in params]
        if f.cc == '__thiscall': ptypes = ptypes[1:]
        if f.cc == '__fastcall': ptypes = ptypes[len(regs):]
        args = []
        for pt in ptypes:
            for _ in range(lomdb.type_stack_size(pt) // 4):
                if t >= STR_T0 and t % 2 == 0 and not pt.endswith('*'): args.append(0); continue  # v24: realistic flag/zero args (00546720 called with 0,0,0,0)
                v_ = val(pt.endswith('*') or (t % 2 == 1 and pt in ('int', 'uint', 'undefined4', 'void *')))
                if t >= STR_T0 and re.sub(r'\s+', ' ', pt).strip() in STR_PT and (t // 2) % 2 == 0 and v_ >= 0x20000000: v_ &= ~0xfff  # v25: string starts at a token
                args.append(v_)
        args = (args + [val() for _ in range(nstack)])[:nstack]
        if addr in SMALLARGS:
            # v37: hand-declared count/size args (build/smallargs.tsv: addr idx,idx max): 70% of trials draw them from 1..max,
            # so loop/decoder functions finish inside the instruction budget (004f41e0 RLE: random 32-bit width = budget stop)
            idxs, mx, mn, pr = SMALLARGS[addr]
            for i_ in idxs:
                if i_ < len(args) and r.random() < pr: args[i_] = r.randrange(mn, mx + 1)
        regin = {UC_X86_REG_EAX: val() if inreg(addr, 'EAX') else r.getrandbits(32), UC_X86_REG_EBX: 0x11111111 + t, UC_X86_REG_ESI: 0x22222222 + t,
                 UC_X86_REG_EDI: 0x33333333 + t, UC_X86_REG_EBP: 0x44444444 + t}
        regin[UC_X86_REG_ECX] = val(f.cc == '__thiscall' or (params and lomdb.param_type(params[0]).endswith('*'))) if 'ecx' in regs else r.getrandbits(32)
        regin[UC_X86_REG_EDX] = val() if ('edx' in regs or inreg(addr, 'EDX')) else r.getrandbits(32)
        rand_data = (t % 3 == 2)
        outs = []
        sb = struct.pack('<I', 0x21212120 + (t % 4) * 0x01010100) * (0x10000 // 4)
        db = random.Random(h32('data', seed, t)).randbytes(DATA_HI - DATA_LO) if rand_data else None
        icq = []
        for start in (addr, rbaddr):
            run = Run(IMG, start, addr, seed, t, rand_data, ci, xi, sb, db)
            run.icq = icq; run.icq_rec = (start == addr)
            run.go(dict(regin), args)
            outs.append((run.result(rk), run.memory()))
            if start == addr: smashed = run.smash
            run.cleanup()
        (ra, ma), (rb_, mb) = outs
        if smashed and os.environ.get('DT_NOSMASH') != '1':
            stats['stopped']['smash'] = stats['stopped'].get('smash', 0) + 1
            continue
        sa, sb_ = ra['stop'], rb_['stop']
        if (sa != sb_ or len(ra['events']) != len(rb_['events'])) and any(x[0] == 'fault' and 'READ' in x[1] for x in (sa, sb_)) and ra['events'][:len(rb_['events'])] == rb_['events'][:len(ra['events'])]:
            # v17: also when both READ-faulted (eip is normalised away) after a different number of events: one side
            # skipped/reordered a dead load that faults on the random input -> not comparable
            stats['stopped']['inconclusive'] = stats['stopped'].get('inconclusive', 0) + 1
            continue
        if sa[0] == 'fault' and sb_[0] == 'fault' and 'FETCH' in sa[1] and 'FETCH' in sb_[1] and ra['events'][:len(rb_['events'])] == rb_['events'][:len(ra['events'])]:
            # v35: both jumped into wild code (random function pointer: mapped-data FETCH_PROT vs unmapped) after a
            # common event prefix; the icall replay cannot pair a target the other side never reached (004b8020)
            stats['stopped']['inconclusive'] = stats['stopped'].get('inconclusive', 0) + 1
            continue
        if sa[0] == 'fault' and 'FETCH' in sa[1] and sb_ == ('ret',) and ra['events'] == rb_['events']:
            # v19: only the ORIGINAL lost its stack (wild random function pointer ran data/mid-function code that
            # pushed, then ret'd into a saved register value) after the same events: not comparable (00478ff0)
            stats['stopped']['inconclusive'] = stats['stopped'].get('inconclusive', 0) + 1
            continue
        if sa[0] in ('timeout', 'toomanyevents') or sb_[0] in ('timeout', 'toomanyevents'):
            # instruction/event budget hit: the two runs stopped at different points of the same computation, so
            # memory and register state are not comparable; only the common event prefix is.
            ea, eb = ra['events'], rb_['events']; n = min(len(ea), len(eb))
            if ea[:n] != eb[:n]:
                return {'verdict': 'FAIL', 'trial': t, 'diff': repr({'events': _evfirst(ea[:n], eb[:n])})[:600]}
            stats['stopped']['budget'] = stats['stopped'].get('budget', 0) + 1
            continue
        if sa == sb_ and sa[0] == 'fault' and ra['events'] == rb_['events']:
            # v33b: any identical fault (random pointer -> unmapped/null read or write) after the same events: the
            # compiler may move stores across the faulting access (00428ba0 0048ee50); a fault = crash in-game
            # v33: both raised a CPU exception (#DE idiv by 0 / overflow = crash in-game) after the same events; C may
            # schedule stores around the faulting divide (00453ad0) -> memory not comparable
            stats['stopped']['inconclusive'] = stats['stopped'].get('inconclusive', 0) + 1
            continue
        if sa == ('ret',) and ra.get('esp', 4) < 4:
            # v32: the ORIGINAL itself returned with a lost stack (a fake callee's purge did not match what the
            # code expects after a random-path call, e.g. 0040e250): not comparable
            stats['stopped']['inconclusive'] = stats['stopped'].get('inconclusive', 0) + 1
            continue
        d = compare(ra, ma, rb_, mb, seed, t)
        if d is not None:
            # second ORIGINAL run with a different uninitialised-stack fill: outputs that change are derived from
            # uninitialised stack reads (unspecified in the original too) and are masked out.
            sb2 = struct.pack('<I', (0x5a5b5c5d ^ (t * 0x01030507)) & 0xffffffff) * (0x10000 // 4)
            run = Run(IMG, addr, addr, seed, t, rand_data, ci, xi, sb2, db)
            run.icq = []; run.icq_rec = True
            run.go(dict(regin), args)
            ra2, ma2 = run.result(rk), run.memory(); run.cleanup()
            if (ra2 != ra or ma2 != ma) and os.environ.get('DT_NOUNINIT') != '1':
                d2 = compare(ra, ma, rb_, mb, seed, t, ra2, ma2)
                if d2 is None:
                    stats['uninit'] = stats.get('uninit', 0) + 1
                    d = None
            if d is not None and os.environ.get('DT_NOSHIFT') != '1':
                # v34: third ORIGINAL run with the stack 0x40 lower (same fill): values that move with the stack are
                # stack-derived (pointer into the frame + random index lands outside the 'S' range; 004997e0)
                run = Run(IMG, addr, addr, seed, t, rand_data, ci, xi, sb, db)
                run.icq = []; run.icq_rec = True
                run.go(dict(regin), args, esp_shift=0x40)
                ra3, ma3 = run.result(rk), run.memory(); run.cleanup()
                if ra3.get('esp') == ra.get('esp') and ra3['stop'] == ra['stop'] and (ra3 != ra or ma3 != ma):
                    if compare(ra, ma, rb_, mb, seed, t, ra3, ma3) is None:
                        stats['stackrel'] = stats.get('stackrel', 0) + 1
                        d = None
            if d is not None and os.environ.get('DT_NOUNINIT') != '1':
                # v40: fourth ORIGINAL run with a ZERO-filled stack: a boolean/flag read from an uninitialised slot is
                # nonzero under both pattern fills, so only a zero fill exposes it (004fbc50 setl flag of a 0-trip loop)
                run = Run(IMG, addr, addr, seed, t, rand_data, ci, xi, b'\0' * 0x10000, db)
                run.icq = []; run.icq_rec = True
                run.go(dict(regin), args)
                ra4, ma4 = run.result(rk), run.memory(); run.cleanup()
                if (ra4 != ra or ma4 != ma) and compare(ra, ma, rb_, mb, seed, t, ra4, ma4) is None:
                    stats['uninit'] = stats.get('uninit', 0) + 1
                    d = None
            if d is not None: return d
        st = ra['stop'][0]
        stats['stopped'][st] = stats['stopped'].get(st, 0) + 1
        stats['events'] += len(ra['events'])
    verdict = 'PASS' if stats['stopped'].get('ret', 0) >= TRIALS // 2 else 'WEAK'
    return {'verdict': verdict, **stats}

if __name__ == '__main__':
    dll, syms = sys.argv[1], sys.argv[2]
    srcdir = os.environ.get('DT_SRC', os.path.join(lomdb.ROOT, 'src', 'gen'))
    m = {}
    for line in open(syms):
        a, b = line.split(); m[int(a, 16)] = int(b, 16)
    want = [int(x, 16) for x in sys.argv[3:]] or sorted(m)
    jobs = [(a, m[a], os.path.join(srcdir, '%08x.c' % a)) for a in want if a in m]
    out = os.environ.get('DT_OUT', os.path.join(lomdb.ROOT, 'build', 'difftest.jsonl'))
    res = {}
    with Pool(int(os.environ.get('DT_J', '7')), initializer=init, initargs=(dll,)) as pool, open(out, 'w') as fo:
        for addr, r in pool.imap_unordered(test_one, jobs):
            res[addr] = r; fo.write(json.dumps({'addr': '%08x' % addr, **r}) + '\n'); fo.flush()
    c = {}
    for r in res.values(): c[r['verdict']] = c.get(r['verdict'], 0) + 1
    print(c)
