#!/usr/bin/env python3
"""comstub_dt.py DLL SYMS ADDR CPATH SNAPDIR [OUT.jsonl]
Wrap difftest so CreateSurface writes a fake IDirectDrawSurface into *out, and Lock
fills desc.lpSurface / desc.lPitch. Lets 004f3810-style COM blit paths reach ret."""
import os, sys, struct, json
dll, syms, addr, cpath, snapdir = sys.argv[1:6]
outp = sys.argv[6] if len(sys.argv)>6 else None
os.environ['DT_SNAP']=snapdir
os.environ.setdefault('DT_SNAPK','1')
os.environ.setdefault('DT_SNAPONLY','1')
os.environ.setdefault('DT_FPCW','0x27f')
os.environ.setdefault('DT_MAXINS','5000000')
os.environ.setdefault('DT_TRIALS','8')
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import difftest
from unicorn.x86_const import UC_X86_REG_ESP
from unicorn import UcError
SURF, SURF_VT, PIXBUF, ICALL = 0x20009000, 0x20009100, 0x2000A000, 0x0B000000
orig = difftest.Run.try_icall
def wrapped(self, uc, addr_):
    esp = uc.reg_read(UC_X86_REG_ESP)
    raw=()
    try:
        ret = struct.unpack('<I', uc.mem_read(esp, 4))[0]
        t = difftest.icall_table(); info=None
        for L in (2,3,6,7):
            if ret-L in t: info=t[ret-L]; break
        if info is None and (not self.icq_rec) and self.icq:
            info=self.icq[min(self.icq_i, len(self.icq)-1)]
        n = info[2] if info else 0
        raw = struct.unpack('<%dI'%n, uc.mem_read(esp+4, 4*n)) if n else ()
    except Exception:
        pass
    ok = orig(self, uc, addr_)
    if ok and raw:
        slot = addr_-ICALL if addr_>=ICALL else -1
        if slot==0x18 and len(raw)>=3:
            try:
                uc.mem_write(raw[2], struct.pack('<I', SURF))
                vt=bytearray(0x90)
                for s in (0x18,0x64,0x6c,0x74,0x80):
                    struct.pack_into('<I', vt, s, ICALL+s)
                uc.mem_write(SURF_VT, bytes(vt)); uc.mem_write(SURF, struct.pack('<I', SURF_VT))
            except UcError:
                pass
        if slot==0x64 and len(raw)>=3:
            try:
                uc.mem_write(raw[2]+0x24, struct.pack('<I', PIXBUF))
                uc.mem_write(raw[2]+0x10, struct.pack('<I', 16))
                uc.mem_write(PIXBUF, b'\0'*0x200)
            except UcError:
                pass
    return ok
difftest.Run.try_icall = wrapped
difftest.init(dll)
rb=[int(l.split()[1],16) for l in open(syms) if int(l.split()[0],16)==int(addr,16)][0]
r=difftest.test_one((int(addr,16), rb, cpath))
rec=r[1] if isinstance(r, tuple) else r
print(rec)
if outp:
    open(outp,'w').write(json.dumps({'addr': addr if len(addr)==8 else '%08x'%int(addr,16), **rec})+'\n')
