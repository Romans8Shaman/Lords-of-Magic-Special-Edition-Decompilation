#!/usr/bin/env python3
"""x87sim.py EXE START STOP : symbolic x87 stack simulation of a straight-line range (Intel-syntax objdump),
prints every float store / ftol call as a C float10 expression with explicit rounding points:
R32(x)=round to float (fst DWORD), R64(x)=round to double (fst QWORD). Memory loads: F32[..], F64[..], I32[..].
Branches are ignored (straight-line view); use per basic block. 2026-11-12."""
import sys, re, subprocess
exe, a, b = sys.argv[1], sys.argv[2], sys.argv[3]
out = subprocess.run(['objdump','-d','-M','intel','--no-show-raw-insn','--start-address=0x'+a,'--stop-address=0x'+b,exe],capture_output=True,text=True).stdout
st=[]; mem={}
def m(arg):
    mm=re.search(r'(DWORD|QWORD|TBYTE) PTR \[(.*)\]',arg); return (mm.group(1), mm.group(2)) if mm else None
def load(kind,addr,isint=False):
    if addr in mem: return mem[addr]
    return ('I32[%s]' if isint else ('F64[%s]' if kind=='QWORD' else 'F32[%s]')) % addr
def sti(s): return int(re.search(r'st\((\d)\)',s).group(1)) if 'st(' in s else 0
for line in out.splitlines():
    p=line.split('\t')
    if len(p)<2: continue
    ins=p[-1].strip(); addr=p[0].strip().rstrip(':')
    op,_,arg=ins.partition(' '); arg=arg.strip()
    if not op.startswith('f') and not op.startswith('call'):
        continue
    mo=m(arg)
    try:
        if op=='fild': st.insert(0, load(*mo,isint=True))
        elif op=='fld':
            st.insert(0, load(*mo) if mo else st[sti(arg)])
        elif op in('fst','fstp'):
            if mo:
                v='R32(%s)'%st[0] if mo[0]=='DWORD' else ('R64(%s)'%st[0] if mo[0]=='QWORD' else st[0])
                mem[mo[1]]=v; print('%s  [%s] = %s'%(addr,mo[1],v))
            else: st[sti(arg)]=st[0]
            if op=='fstp': st.pop(0)
        elif op=='fxch': i=sti(arg) if arg else 1; st[0],st[i]=st[i],st[0]
        elif op in('fsqrt','fabs','fchs','fsin','fcos'): st[0]='%s(%s)'%(op[1:],st[0])
        elif op in ('fadd','fsub','fsubr','fmul','fdiv','fdivr','faddp','fsubp','fsubrp','fmulp','fdivp','fdivrp'):
            base=op.rstrip('p') if op.endswith('p') and op not in('fsubrp',) else op
            if op=='fsubrp': base='fsubr'
            sym={'fadd':'+','fsub':'-','fsubr':'-','fmul':'*','fdiv':'/','fdivr':'/'}[base]
            rev=base in('fsubr','fdivr')
            if mo:
                x=st[0]; y=load(*mo); st[0]='(%s %s %s)'%((y,sym,x) if rev else (x,sym,y))
            else:
                regs=[r.strip() for r in arg.split(',')] if arg else ['st(1)','st']
                d=sti(regs[0]) if regs[0]!='st' else 0; s_=sti(regs[1]) if len(regs)>1 and regs[1]!='st' else 0
                x=st[d]; y=st[s_]; st[d]='(%s %s %s)'%((y,sym,x) if rev else (x,sym,y))
                if op.endswith('p'): st.pop(0)
        elif op=='fcomp' or op=='fcompp' or op=='fcom' or op=='fucomp' or op=='fucompp':
            y=load(*mo) if mo else st[sti(arg) if arg else 1]; print('%s  compare %s ? %s'%(addr,st[0],y))
            if op.endswith('pp'): st.pop(0); st.pop(0)
            elif op.endswith('p'): st.pop(0)
        elif op.startswith('call'):
            if '5394a0' in arg: print('%s  ftol(%s)'%(addr,st[0])); st.pop(0)
            else: print('%s  call %s  (stack depth %d)'%(addr,arg,len(st)))
        elif op in ('fnstsw','fldz','fld1'):
            if op=='fldz': st.insert(0,'0.0')
            if op=='fld1': st.insert(0,'1.0')
        else: print('%s  ?? %s'%(addr,ins))
    except IndexError:
        print('%s  STACK UNDERFLOW at %s'%(addr,ins)); st=['?']*8
print('final stack:',st)
