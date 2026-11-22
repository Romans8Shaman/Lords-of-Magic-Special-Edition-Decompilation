/* Rebuilt from lomse.exe FUN_004b98f0 @ 0x004b98f0 (73 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b98f0 1
void __fastcall rb_004b98f0(int *param_1)

{
  int arg1;
  
  for (arg1 = *param_1; arg1 != 0; arg1 = *(int *)(arg1 + 0x14)) {
    if (*(int *)(arg1 + 8) != 0) {
      Ordinal_403(*(int *)(arg1 + 8),s_C__lomse_source_storm_h_00555130,0x3f6,0);
    }
    if (arg1 != 0) {
      Ordinal_403(arg1,s_C__lomse_source_storm_h_00555130,0x3eb,0);
    }
  }
  *param_1 = 0;
  return;
}
