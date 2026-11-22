/* Rebuilt from lomse.exe FUN_0052b560 @ 0x0052b560 (67 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0052b560 1
undefined4 __thiscall rb_0052b560(void *this,int param_1)

{
  int *arg1;
  
  arg1 = *(int **)this;
  if (arg1 == (int *)0x0) {
    return 0;
  }
  do {
    if (*arg1 == param_1) {
      *(int *)this = arg1[3];
      if (arg1 != (int *)0x0) {
        Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
      }
      return 1;
    }
    this = arg1 + 3;
    arg1 = (int *)arg1[3];
  } while (arg1 != (int *)0x0);
  return 0;
}
