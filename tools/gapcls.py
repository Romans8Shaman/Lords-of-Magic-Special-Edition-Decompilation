import sys, re, json; sys.path.insert(0,'tools'); import lomdb, pefile, struct, bisect
from capstone import *
F=lomdb.funcs()
pe=pefile.PE('/workspace/lom_project/game/LoM/English/lomse.exe'); t=pe.sections[0]; tva=0x401000
tb=t.get_data()[:t.Misc_VirtualSize]
cov=bytearray(len(tb))
for a,f in F.items():
    if f.maxaddr>=a and tva<=a<tva+len(tb):
        for k in range(a-tva, min(f.maxaddr-tva+1,len(tb))): cov[k]=1
runs=[];k=0
while k<len(tb):
    if cov[k]: k+=1; continue
    j=k
    while j<len(tb) and not cov[j]: j+=1
    if not all(x in (0xcc,0x90,0) for x in tb[k:j]): runs.append((k+tva,j+tva))
    k=j
st=[a for a,_ in runs]
def run_of(v):
    i=bisect.bisect_right(st,v)-1
    return runs[i] if i>=0 and runs[i][0]<=v<runs[i][1] else None
kinds={}  # run -> set of (kind, target)
md=Cs(CS_ARCH_X86,CS_MODE_32)
def scan(code,a):
    for i in md.disasm(code,a):
        ops=i.op_str
        for m in re.finditer(r'0x([0-9a-f]+)',ops):
            v=int(m.group(1),16); r=run_of(v)
            if not r: continue
            if (i.mnemonic=='call' or i.mnemonic.startswith('j')) and ops.startswith('0x'): k='branch'
            elif '[' in ops and ops.find('[')<m.start(): k='membase'
            else: k='imm'
            kinds.setdefault(r,set()).add((k,v))
for a,f in F.items():
    if f.maxaddr>=a: scan(tb[a-tva:f.maxaddr-tva+1],a)
for s in pe.sections[1:3]:
    d=s.get_data(); base=0x400000+s.VirtualAddress
    for k in range(0,len(d)-3,4):
        v=struct.unpack_from('<I',d,k)[0]; r=run_of(v)
        if r: kinds.setdefault(r,set()).add(('data',v))
code=[];table=[];unref=[]
for r in runs:
    ks=kinds.get(r)
    if not ks: unref.append(r); continue
    if any(k in ('branch','imm','data') for k,_ in ks): code.append(r)
    else: table.append(r)
sz=lambda L: sum(b-a for a,b in L)
print('code-like runs',len(code),sz(code),'table-only',len(table),sz(table),'unref',len(unref),sz(unref))
ents=set()
for r in code:
    for k,v in kinds[r]:
        if k in ('branch','imm','data'): ents.add(v)
print('distinct entry candidates',len(ents))
json.dump({'code':code,'table':table,'unref':unref,'ents':sorted(ents),'kinds':{'%x'%r[0]:sorted(kinds[r]) for r in kinds}},open('/tmp/gapcls.json','w'))
