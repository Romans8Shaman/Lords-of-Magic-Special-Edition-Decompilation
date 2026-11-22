import sys,os,struct,random
os.chdir('/workspace/lom_project/rebuild'); sys.path.insert(0,'tools')
import difftest as D
from unicorn import *; from unicorn.x86_const import *
img=D.Image('build/test_gen.dll')
syms={l.split()[0]:int(l.split()[1],16) for l in open('build/test_gen.syms') if len(l.split())>=2}
def run(fn,n,seed):
    uc=Uc(UC_ARCH_X86,UC_MODE_32)
    for va,data,perm in img.regions: uc.mem_map(va,len(data),perm); uc.mem_write(va,data)
    uc.mem_map(0x30000000,0x100000); uc.mem_map(0x7f000000,0x100000); uc.mem_map(0x7e000000,0x1000); uc.mem_write(0x7e000000,b'\xf4'*0x1000)
    r=random.Random(seed); arr=0x30000000; objs=0x30010000
    ptrs=[objs+i*16 for i in range(n)]; r.shuffle(ptrs)
    for i in range(n): uc.mem_write(objs+i*16+8, struct.pack('<f', r.choice([r.random()*100, float(r.randrange(5))])))
    uc.mem_write(arr, b''.join(struct.pack('<I',p) for p in ptrs))
    esp=0x7f080000; uc.mem_write(esp, struct.pack('<5I',0x7e000000,arr,n,4,0x4f6160))
    uc.reg_write(UC_X86_REG_ESP,esp)
    try: uc.emu_start(fn,0x7e000000,count=5000000)
    except UcError as e: return 'ERR %s eip=%x'%(e,uc.reg_read(UC_X86_REG_EIP))
    return [struct.unpack('<f',uc.mem_read(p+8,4))[0] for p in struct.unpack('<%dI'%n,uc.mem_read(arr,4*n))]
bad=0
for n in [2,5,9,10,17,33,100,300,1000]:
  for s in range(5):
    a=run(0x53a320,n,s); b=run(syms['0053a320'],n,s)
    if a!=b: bad+=1; print('DIFF n=%d s=%d'%(n,s), str(a)[:80], str(b)[:80])
print('bad',bad)
