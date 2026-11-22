#!/usr/bin/env python3
"""stackpad_dt.py DLL SYMS ADDR [ADDR...]
Wrap difftest so the dwords above the initial return address are also MAGIC_RET.
Lets originals that do `push eax; call helper; add esp, 8` (one extra dword) still
ret to MAGIC_RET instead of fetch-faulting on the 0x21212121 stack fill."""
import os, sys, struct, json
from multiprocessing import Pool
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import difftest

def _patch():
    if getattr(difftest.Run.go, '_stackpad', False):
        return
    _go = difftest.Run.go
    def go(self, regs_in, stack_args, esp_shift=0):
        esp = difftest.STACK_HI - 0x8000 - esp_shift
        self.uc.mem_write(esp, struct.pack('<%dI' % 12, *([difftest.MAGIC_RET] * 12)))
        return _go(self, regs_in, stack_args, esp_shift)
    go._stackpad = True
    difftest.Run.go = go


def _apply_ignore():
    ignore = {x.strip() for x in os.environ.get('DT_IGNORE_REGS', '').split(',') if x.strip()}
    if not ignore:
        return
    _compare = difftest.compare
    def compare(ra, ma, rb_, mb, seed, t, ra2=None, ma2=None):
        if ignore:
            ra = {k: v for k, v in ra.items() if k not in ignore}
            rb_ = {k: v for k, v in rb_.items() if k not in ignore}
            if ra2 is not None:
                ra2 = {k: v for k, v in ra2.items() if k not in ignore}
        return _compare(ra, ma, rb_, mb, seed, t, ra2, ma2)
    difftest.compare = compare


def _apply_fakeptr():
    """DT_FAKEPTR=addr:base:stride:add  -> stub of addr returns base+arg0*stride+add."""
    spec = os.environ.get('DT_FAKEPTR', '').strip()
    if not spec:
        return
    addr, base, stride, add = spec.split(':')
    addr, base, stride, add = int(addr, 16), int(base, 16), int(stride, 16), int(add, 16) if add[:1] != '-' else -int(add[1:], 16)
    from unicorn.x86_const import UC_X86_REG_EAX
    _hc = difftest.Run.handle_call
    def handle_call(self, kind, name, info):
        ok = _hc(self, kind, name, info)
        if ok is not False and name == addr and self.events:
            ev = self.events[-1]
            # ev: (kind, name, args, ...)
            args = ev[2] if len(ev) > 2 and isinstance(ev[2], tuple) else ()
            a0 = args[0] if args else 0
            if isinstance(a0, int):
                self.uc.reg_write(UC_X86_REG_EAX, (base + a0 * stride + add) & 0xffffffff)
        return ok
    difftest.Run.handle_call = handle_call

def init(dll):
    _patch()
    _apply_ignore()
    _apply_fakeptr()
    difftest.init(dll)

_patch()
_apply_ignore()
_apply_fakeptr()
dll, syms = sys.argv[1], sys.argv[2]
srcdir = os.environ.get('DT_SRC', os.path.join(difftest.lomdb.ROOT, 'src', 'gen'))
m = {}
for line in open(syms):
    a, b = line.split(); m[int(a, 16)] = int(b, 16)
want = [int(x, 16) for x in sys.argv[3:]] or sorted(m)
jobs = [(a, m[a], os.path.join(srcdir, '%08x.c' % a)) for a in want if a in m]
out = os.environ.get('DT_OUT', os.path.join(difftest.lomdb.ROOT, 'build', 'difftest.jsonl'))
res = {}
with Pool(int(os.environ.get('DT_J', '7')), initializer=init, initargs=(dll,)) as pool, open(out, 'w') as fo:
    for addr, r in pool.imap_unordered(difftest.test_one, jobs):
        res[addr] = r; fo.write(json.dumps({'addr': '%08x' % addr, **r}) + '\n'); fo.flush()
c = {}
for r in res.values(): c[r['verdict']] = c.get(r['verdict'], 0) + 1
print(c)
