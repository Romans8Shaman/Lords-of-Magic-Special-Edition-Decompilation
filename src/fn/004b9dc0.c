/* Rebuilt from lomse.exe FUN_004b9dc0 @ 0x004b9dc0 (49 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004b9dc0 1
void __fastcall rb_004b9dc0(int *param_1)

{
  if (*param_1 != 0) {
    Ordinal_403(*param_1,s_C__lomse_source_storm_h_00555130,0x3f6,0);
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}
