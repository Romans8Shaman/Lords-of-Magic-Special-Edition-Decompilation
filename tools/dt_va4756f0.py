#!/usr/bin/env python3
"""dt_va4756f0.py: stackpad_dt.py wrapper (difftest) that registers the varargs cdecl logger FUN_004756f0(hr, msg) as a
2-arg cdecl callee (Ghidra proto is `int param_1, ...`, so difftest had no callee info -> unknowncallee). Same args as stackpad_dt."""
import sys, runpy
sys.path.insert(0, '/workspace/lom_project/rebuild/tools')
import difftest
_ci = difftest.callee_infos
def ci(addr, src, xi):
    info = _ci(addr, src, xi)
    info[0x4756f0] = ('__cdecl', 2, 0, [], (0, 0), False, (0xffffffff, 0xffffffff))
    return info
difftest.callee_infos = ci
sys.argv = ['stackpad_dt.py'] + sys.argv[1:]
runpy.run_path('/workspace/lom_project/rebuild/tools/stackpad_dt.py', run_name='__main__')
