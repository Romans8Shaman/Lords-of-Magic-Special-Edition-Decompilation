#!/usr/bin/env python3
"""ddmin.py CANDS OUT_LOG : find a minimal set of hooks that kills the smoke test (handles interactions).
Each test writes lomrb_only.txt in LoM_rb and runs smoke.sh. Never deletes anything except its own lomrb_only.txt."""
import sys, subprocess, os, time
G='/workspace/lom_project/game/LoM_rb/English'
cands=[l.split()[0] for l in open(sys.argv[1]) if l.strip()]
log=open(sys.argv[2],'a'); n=[0]
def dead(s):
    open(G+'/lomrb_only.txt','w').write('\n'.join(s)+'\n'); n[0]+=1
    out=subprocess.run(['/workspace/lom_project/smoke.sh','dd%d'%n[0]],capture_output=True,text=True).stdout
    r=out.split('\n')[0].strip()=='DEAD'
    log.write('%s test %d (%d fns) -> %s %s\n'%(time.strftime('%H:%M'),n[0],len(s),'DEAD' if r else 'ALIVE',' '.join(s) if len(s)<=8 else '')); log.flush()
    return r
def find(fixed, S):
    # minimal subset M of S such that fixed+M is DEAD (assumes fixed+S DEAD)
    if len(S)==1: return S
    k=len(S)//2; A,B=S[:k],S[k:]
    if dead(fixed+A): return find(fixed,A)
    if dead(fixed+B): return find(fixed,B)
    return find(fixed+B,A)+find(fixed+find(fixed+B,A) if False else fixed+A,B) if False else (lambda ma: ma+find(fixed+ma,B))(find(fixed+B,A))
if '--noconfirm' not in sys.argv:
    if not dead(cands): log.write('set not DEAD -> flaky?\n'); sys.exit(1)
m=find([],cands)
log.write('MINIMAL %s\n'%' '.join(m)); log.flush()
os.rename(G+'/lomrb_only.txt', G+'/lomrb_only_ddmin_last.txt')
