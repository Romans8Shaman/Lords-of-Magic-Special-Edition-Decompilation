"""unicorn: orig vs rebuilt FUN_004026a0 (GS VM value -> int/fixed/float) on tagged inputs; prints mismatches."""
import sys,os,struct,random
os.chdir('/workspace/lom_project/rebuild'); sys.path.insert(0,'tools')
import difftest as D
from unicorn import *; from unicorn.x86_const import *
img=D.Image('build/test_gen.dll')
syms={l.split()[0]:int(l.split()[1],16) for l in open('build/test_gen.syms') if len(l.split())>=2}
uc=Uc(UC_ARCH_X86,UC_MODE_32)
for va,data,perm in img.regions: uc.mem_map(va,len(data),perm); uc.mem_write(va,data)
uc.mem_map(0x30000000,0x100000); uc.mem_map(0x7f000000,0x100000); uc.mem_map(0x7e000000,0x1000); uc.mem_write(0x7e000000,b'\xf4'*0x1000)
def run(fn,tag,val):
    uc.mem_write(0x30000000, struct.pack('<II',tag,val)+b'\xcc'*12)
    esp=0x7f080000; uc.mem_write(esp, struct.pack('<5I',0x7e000000,0x30000000,0x30000008,0x3000000c,0x30000010))
    uc.reg_write(UC_X86_REG_ESP,esp)
    uc.emu_start(fn,0x7e000000,count=100000)
    return uc.reg_read(UC_X86_REG_EAX), bytes(uc.mem_read(0x30000008,12)).hex()
r=random.Random(1); bad=0
for tag in (1,2,4):
    for i in range(300):
        v=r.choice([r.getrandbits(32), r.randrange(0,5000), struct.unpack('<I',struct.pack('<f',r.uniform(-5000,5000)))[0], struct.unpack('<I',struct.pack('<f',float(r.randrange(0,3000))))[0]])
        a=run(0x4026a0,tag,v); b=run(syms['004026a0'],tag,v)
        if a!=b:
            bad+=1
            if bad<6: print('tag',tag,hex(v),a,b)
print('bad',bad)
