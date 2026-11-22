/* Rebuilt from lomse.exe FUN_004f3740 @ 0x004f3740 (72 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define Ordinal_403 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x0053385e) /* thunk -> STORM.DLL!Ordinal_403 */
#define s_c__NEWERSTORM_H_storm_h_00573258 (*(char (*)[])0x00573258)

#define LOM_SELF_004f3740 1
void __fastcall rb_004f3740(ushort *param_1)

{
  if (((*param_1 & 8) == 0) && ((*param_1 & 0x10) != 0)) {
    if (*(int *)(param_1 + 6) != 0) {
      Ordinal_403(*(int *)(param_1 + 6),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
    if ((*(char *)((int)param_1 + 1) != '\0') && (*(int *)(param_1 + 4) != 0)) {
      Ordinal_403(*(int *)(param_1 + 4),s_c__NEWERSTORM_H_storm_h_00573258,0x3f6,0);
    }
  }
  return;
}
