#!/usr/bin/env python3
"""dt_tz.py: stackpad_dt wrapper for 0053b220 (GetSystemTime / TZ cache). After the stubbed GetTimeZoneInformation returns,
force its result to cycle through {0xffffffff, 2, 2, 1, 0} and (for some trials) zero TIME_ZONE_INFORMATION DaylightDate.wMonth
(+0x9a) / DaylightBias (+0xa8) so every DVar1 / Daylight branch of the function is exercised. Same args as stackpad_dt."""
import sys, runpy, struct
sys.path.insert(0, '/workspace/lom_project/rebuild/tools')
import difftest
from unicorn.x86_const import *
_h = difftest.Run.handle_call
def hc(self, kind, name, info):
    uc = self.uc
    ptr = None
    if name == 'GetTimeZoneInformation' or (isinstance(name, str) and 'GetTimeZoneInformation' in name):
        esp = uc.reg_read(UC_X86_REG_ESP); ptr = struct.unpack('<I', uc.mem_read(esp + 4, 4))[0]
    r = _h(self, kind, name, info)
    if ptr is not None and r:
        k = self.trial
        uc.reg_write(UC_X86_REG_EAX, (0xffffffff, 2, 2, 1, 0, 2, 2, 2)[k % 8])
        try:
            if (k // 8) % 2: uc.mem_write(ptr + 0x9a, b'\0\0')
            if (k // 16) % 2: uc.mem_write(ptr + 0xa8, b'\0\0\0\0')
        except Exception: pass
    return r
difftest.Run.handle_call = hc
sys.argv = ['stackpad_dt.py'] + sys.argv[1:]
runpy.run_path('/workspace/lom_project/rebuild/tools/stackpad_dt.py', run_name='__main__')
