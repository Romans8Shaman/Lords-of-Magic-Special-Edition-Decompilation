/* Rebuilt from lomse.exe FUN_004f5410 @ 0x004f5410 (46 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f5300 ((undefined4 (__fastcall *)(int))0x004f5300)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f5410 1
void __cdecl rb_004f5410(int *param_1)

{
  int arg1;
  
  arg1 = *param_1;
  if (arg1 != 0) {
    FUN_004f5300(arg1);
    Ordinal_403(arg1,s_c__NEWERSTORM_H_storm_h_00573258,0x3eb,0);
    *param_1 = 0;
  }
  return;
}
