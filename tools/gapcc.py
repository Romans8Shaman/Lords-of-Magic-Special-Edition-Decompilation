import sys; sys.path.insert(0,'tools'); import lomdb
from capstone import *; from capstone.x86 import *
md=Cs(CS_ARCH_X86,CS_MODE_32); md.detail=True
F=lomdb.funcs(); new=[int(l,16) for l in open('/tmp/gap_new620.txt') if l.strip()]
out=open('/tmp/gap_cc.tsv','w'); from collections import Counter; c=Counter()
def regs_read(i):
    r,w=i.regs_access(); return set(md.reg_name(x) for x in r), set(md.reg_name(x) for x in w)
for a in new:
    f=F[a]; code=lomdb.read_va(a,f.maxaddr-a+1)
    rets=set(); ecx=edx=None; ins=list(md.disasm(code,a))
    for i in ins:
        if i.mnemonic=='ret': rets.add(i.operands[0].imm if i.operands else 0)
    for i in ins:
        if ecx is not None and edx is not None: break
        r,w=regs_read(i)
        if i.mnemonic=='xor' and len(i.operands)==2 and i.op_str.split(',')[0].strip()==i.op_str.split(',')[1].strip(): r=set()
        if i.mnemonic in ('call',): 
            if ecx is None: ecx='w'
            if edx is None: edx='w'
            continue
        if i.mnemonic.startswith('j') or i.mnemonic=='ret': break
        for nm,grp in (('ecx',{'ecx','cx','cl','ch'}),('edx',{'edx','dx','dl','dh'})):
            v=ecx if nm=='ecx' else edx
            if v is None:
                if r&grp: v='r'
                elif w&grp: v='w'
            if nm=='ecx': ecx=v
            else: edx=v
    purge=max(rets) if rets else -1
    if not rets and ins and ins[-1].mnemonic=='jmp' and ins[-1].op_str.startswith('0x'):
        t=int(ins[-1].op_str,16); g=F.get(t)
        if g is not None and g.cc!='unknown' and g.purge<0x10000: purge=g.purge
        elif g is not None: purge=0
    if len(rets)>1: cc='custom'
    elif edx=='r': cc='custom'
    elif ecx=='r': cc='__thiscall'
    elif purge>0: cc='__stdcall'
    elif purge==0: cc='__cdecl'
    else: cc='custom'   # no ret (jmp tail / noreturn)
    if f.thunk: cc='thunk'
    c[cc]+=1; out.write('%08x\t%s\t%d\n'%(a,cc,purge))
print(c)
