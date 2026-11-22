#!/usr/bin/env python3
"""dt_stubout.py (2026-11-13): stackpad_dt.py wrapper (difftest.py untouched). DT_STUBOUT=ADDR:ARGIDX:VALUE[,...]
makes the stub of callee ADDR (callee-cleanup, purge from lomdb) write dword VALUE through its stack arg ARGIDX
(an out-pointer such as 00478570's `int **slot`), in both the original and rebuilt runs.
v2: DT_STUBSTR=ADDR:ARGIDX:NARGS[,...] makes the stub write a NUL-terminated string "S<hash of its first NARGS stack args>"
through arg ARGIDX (sprintf-style output buffers, e.g. 0053a090), so later reads of the buffer are deterministic and
depend on the formatted arguments.
v3: DT_STUBOUT VALUE may be @SEQ: write the next dword of a scratch sequence (SEQ: dword index, then values) instead of a
constant (fread of a count, then types...). DT_STUBRET=ADDR:VALUE[,...] forces the stub's eax (ctors returning planted
objects). Same args as stackpad_dt."""
import os, sys, struct, runpy
sys.path.insert(0, '/workspace/lom_project/rebuild/tools')
import difftest
from unicorn.x86_const import UC_X86_REG_ESP, UC_X86_REG_EAX, UC_X86_REG_ECX
difftest_ecx = UC_X86_REG_ECX
SPEC = []
for it in os.environ.get('DT_STUBOUT', '').split(','):
    if it.strip():
        a, i, v = it.split(':'); SPEC.append((int(a, 16), i, v))   # v6: ARGIDX may be 'i+off' (write at the pointer + off bytes)
RSPEC = {}
for it in os.environ.get('DT_STUBRET', '').split(','):
    if it.strip():
        a, v = it.split(':')
        try: a = int(a, 16)
        except ValueError: pass   # v4: import name (GlobalLock)
        RSPEC[a] = [int(x, 16) for x in v.split('/')]   # v4: a/b/c = per-call sequence within a trial (last repeats)
_RCNT = {}
SSPEC = []
for it in os.environ.get('DT_STUBSTR', '').split(','):
    if it.strip():
        a, i, n = it.split(':'); SSPEC.append((int(a, 16), int(i), int(n)))
PURGE = {int(a, 16): int(v, 16) for a, v in (x.split(':') for x in os.environ.get('DT_PURGE', '').split(',') if x)}   # v4: purge override (thunks with unknown purge)
def _purge(a):
    return PURGE.get(a, difftest.lomdb.funcs()[a].purge)
LSPEC = {}   # v5: DT_STUBLIN=ADDR:c0/c1/...:ADD -> stub eax = sum(ci * stack_arg_i) + ADD (index-returning callees)
for it in os.environ.get('DT_STUBLIN', '').split(','):
    if it.strip():
        a, cs, ad = it.split(':'); LSPEC[int(a, 16)] = ([int(c, 0) for c in cs.split('/')], int(ad, 0))
RAWARG = {}   # v4: DT_RAWARG=ADDR:NBYTES[,..] -> the stub's event also records NBYTES behind every stack-pointer arg
RAWARGN = {}  # v8: DT_RAWARG=ADDR:NBYTES:NARGS — NARGS is a dword count; overrides purge so cdecl callees record pointees
for it in os.environ.get('DT_RAWARG', '').split(','):
    if it.strip():
        parts = it.split(':')
        a, n = parts[0], parts[1]
        try: key = int(a, 16)
        except ValueError: key = a   # g221: import name (RegisterClassA)
        RAWARG[key] = (-1 if n == 'fw' else int(n, 0))
        if len(parts) >= 3:
            RAWARGN[key] = int(parts[2], 0) * 4

ARGMASK = {}   # v5: DT_ARGMASK=ADDR:IDX:MASK[,..] -> mask a stub event's arg (caller leaves garbage in the upper bytes of a word param)
for it in os.environ.get('DT_ARGMASK', '').split(','):
    if it.strip():
        a, i, m = it.split(':'); ARGMASK.setdefault(int(a, 16), []).append((int(i), int(m, 0)))
TSPEC = {}   # v7: DT_STUBTHIS=ADDR:OFF:b0/b1/..[,..] -> after the stub of ADDR, write byte seq[call#] (last repeats) at ecx+OFF (ctor-style callees filling a flag in this)
for it in os.environ.get('DT_STUBTHIS', '').split(','):
    if it.strip():
        a, o, v = it.split(':'); TSPEC[int(a, 16)] = (int(o, 0), [int(x, 16) for x in v.split('/')])
DSPEC = {}  # g219: DT_STUBTHED=ADDR:OFF:v0/v1..[,ADDR:OFF2:w0/w1..] -> after the stub, write dword seq[call#] (last repeats) at ecx+OFF (thiscall out-object fields)
for it in os.environ.get('DT_STUBTHED', '').split(','):
    if it.strip():
        a, o, v = it.split(':')
        DSPEC.setdefault(int(a, 16), []).append((int(o, 0), [int(x, 16) for x in v.split('/')]))
ESPEC = {}   # v7: DT_RAWECX=ADDR:OFF:NBYTES[,..] -> the stub's event also records NBYTES at ecx+OFF (this-object field written by the caller)
for it in os.environ.get('DT_RAWECX', '').split(','):
    if it.strip():
        a, o, n = it.split(':'); ESPEC.setdefault(int(a, 16), []).append((int(o, 0), int(n, 0)))
_hc = difftest.Run.handle_call
def handle_call(self, kind, name, info):
    if name in PURGE and isinstance(info, tuple) and len(info) > 3 and info[2] != PURGE[name]:   # g218: DT_PURGE also fixes the stack purge of the stub return (callee with unknown lomdb purge)
        info = (info[0], max(info[1], PURGE[name] // 4)) + (PURGE[name],) + tuple(info[3:])
    _pre = None
    _ecx0 = self.uc.reg_read(difftest_ecx) if (name in TSPEC or name in ESPEC or name in DSPEC) else 0
    _epre = []
    if name in ESPEC:
        for o, n in ESPEC[name]:
            try: _epre.append(('ecx', o, bytes(self.uc.mem_read(_ecx0 + o, n))))
            except Exception: _epre.append(('ecx', o, None))
    if name in RAWARG:
        try:
            purge = RAWARGN[name] if name in RAWARGN else _purge(name); esp0 = self.uc.reg_read(UC_X86_REG_ESP)
            args = struct.unpack('<%dI' % (purge // 4), self.uc.mem_read(esp0 + 4, purge)) if purge else ()
            _pre = []
            if RAWARG[name] == -1:
                args = struct.unpack('<4I', self.uc.mem_read(esp0 + 4, 16))
                nb = min(args[1] * args[2], 0x400)
                _pre.append(('raw', 0, bytes(self.uc.mem_read(args[0], nb))))
                args = ()
            for i, a in enumerate(args):
                if difftest.STACK_LO <= a < difftest.STACK_HI:
                    w = struct.unpack('<%dI' % (RAWARG[name] // 4), bytes(self.uc.mem_read(a, RAWARG[name])))
                    _pre.append(('raw', i, tuple(self.norm(x) for x in w)))
        except Exception as e:
            sys.stderr.write('RAWARG fail %r\n' % (e,))
    ok = _hc(self, kind, name, info)
    if ok is not False and name in ARGMASK and self.events:
        ev = list(self.events[-1]); al = list(ev[2])
        for i, m in ARGMASK[name]:
            if i < len(al) and isinstance(al[i], int): al[i] &= m
        ev[2] = tuple(al); self.events[-1] = tuple(ev)
    if ok is not False and _pre is not None and self.events:
        self.events[-1] = tuple(self.events[-1]) + tuple(_pre)
    if ok is not False and _epre and self.events:
        self.events[-1] = tuple(self.events[-1]) + tuple(_epre)
    if ok is not False and name in TSPEC:
        if not hasattr(self, '_tcnt'): self._tcnt = {}
        c = self._tcnt.get(name, 0); self._tcnt[name] = c + 1
        o, vs = TSPEC[name]
        try: self.uc.mem_write(_ecx0 + o, bytes([vs[min(c, len(vs) - 1)]]))
        except Exception: pass
    if ok is not False and name in DSPEC:
        if not hasattr(self, '_dcnt'): self._dcnt = {}
        c = self._dcnt.get(name, 0); self._dcnt[name] = c + 1
        for o, vs in DSPEC[name]:
            try: self.uc.mem_write(_ecx0 + o, struct.pack('<I', vs[min(c, len(vs) - 1)] & 0xffffffff))
            except Exception: pass
    if ok is not False:
        for a, i, v in SPEC:
            if name == a:
                purge = _purge(a)
                esp = self.uc.reg_read(UC_X86_REG_ESP)
                try:
                    _o = 0
                    if isinstance(i, str):
                        _o = int(i.split('+')[1], 0) if '+' in i else 0
                        i = int(i.split('+')[0])
                    p = struct.unpack('<I', self.uc.mem_read(esp - purge + 4 * i, 4))[0] + _o
                    if v.startswith('@'):
                        q = int(v[1:], 16); k = struct.unpack('<I', self.uc.mem_read(q, 4))[0]
                        val = struct.unpack('<I', self.uc.mem_read(q + 4 + 4 * k, 4))[0]
                        self.uc.mem_write(q, struct.pack('<I', k + 1))
                    else:
                        val = int(v, 16)
                    self.uc.mem_write(p, struct.pack('<I', val))
                except Exception:
                    pass
        if name in LSPEC and self.events:
            ev = self.events[-1]; args = ev[2] if len(ev) > 2 and isinstance(ev[2], tuple) else ()
            cs, ad = LSPEC[name]
            v = ad + sum(c * (x if x < 0x80000000 else x - 0x100000000) for c, x in zip(cs, args) if isinstance(x, int))
            self.uc.reg_write(UC_X86_REG_EAX, v & 0xffffffff)
        if name in RSPEC:
            if not hasattr(self, '_rcnt'): self._rcnt = {}
            c = self._rcnt.get(name, 0); self._rcnt[name] = c + 1
            vs = RSPEC[name]
            self.uc.reg_write(UC_X86_REG_EAX, vs[min(c, len(vs) - 1)])
        for a, i, n in SSPEC:
            if name == a:
                purge = _purge(a)
                esp = self.uc.reg_read(UC_X86_REG_ESP)
                try:
                    base = esp - (purge if purge < 0x1000 else 0)
                    args = struct.unpack('<%dI' % n, self.uc.mem_read(base, 4 * n))
                    p = args[i]
                    if difftest.STACK_LO <= p < difftest.STACK_HI:
                        v = args[:i] + args[i + 1:]
                        # stack-pointer args other than the buffer: compare their offset from the buffer instead
                        v = tuple((x - p) if difftest.STACK_LO <= x < difftest.STACK_HI else x for x in v)
                        h = difftest.h32('stubstr', *v)
                        self.uc.mem_write(p, ('S%08x' % h).encode()[:1 + h % 9] + b'\0')
                except Exception:
                    pass
    return ok
difftest.Run.handle_call = handle_call

# g224: DT_ICMEM=ADDR:NBYTES[,..] -> every icall event also records NBYTES at scratch ADDR as read AT CALL TIME
# (state the callee could observe, e.g. a TLS field set just before an indirect handler call). Off unless the env var is set.
ICMEM = []
for it in os.environ.get('DT_ICMEM', '').split(','):
    if it.strip():
        a, n = it.split(':'); ICMEM.append((int(a, 16), int(n, 0)))
if ICMEM:
    _ti = difftest.Run.try_icall
    def try_icall(self, uc, addr):
        _pre = []
        for a, n in ICMEM:
            try: _pre.append(('icmem', a, bytes(uc.mem_read(a, n))))
            except Exception: _pre.append(('icmem', a, None))
        k = len(self.events)
        ok = _ti(self, uc, addr)
        if ok and len(self.events) > k:
            self.events[-1] = tuple(self.events[-1]) + tuple(_pre)
        return ok
    difftest.Run.try_icall = try_icall
if os.environ.get('DT_SHOW'):   # v4: dump events of one trial (debug)
    _show = int(os.environ['DT_SHOW']); _res = difftest.Run.result
    def _result(self, *a, **k):
        r = _res(self, *a, **k)
        if self.trial == _show:
            sys.stderr.write('RUN start=%x stop=%r\n' % (self.start, r.get('stop')))
            for e in r.get('events', [])[:int(os.environ.get('DT_SHOWN','40'))]: sys.stderr.write('   %r\n' % (e,))
        return r
    difftest.Run.result = _result
sys.argv = ['stackpad_dt.py'] + sys.argv[1:]
runpy.run_path('/workspace/lom_project/rebuild/tools/stackpad_dt.py', run_name='__main__')
