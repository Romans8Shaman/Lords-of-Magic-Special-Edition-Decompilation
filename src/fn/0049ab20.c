/* Rebuilt from lomse.exe FUN_0049ab20 @ 0x0049ab20 (103 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583718 (*(int *)0x00583718)
#define FUN_004f5800 ((undefined4 (__fastcall *)(int))0x004f5800)
#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0049ab20 1
void __fastcall rb_0049ab20(int *param_1)

{
  if (*param_1 != 0) {
    DAT_00583718 = DAT_00583718 - *(int *)(*param_1 + 0x18);
    FUN_004f5800(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    Ordinal_403(param_1[1],s_C__lomse_source_storm_h_00555130,0x3f6,0);
    param_1[1] = 0;
    DAT_00583718 = DAT_00583718 + param_1[2] * -4;
  }
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}
