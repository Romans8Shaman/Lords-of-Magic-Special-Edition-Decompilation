/* Rebuilt from lomse.exe FUN_0044c430 @ 0x0044c430 (128 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00526bf0 ((undefined4 (__fastcall *)(int))0x00526bf0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0044c430 1
int __fastcall rb_0044c430(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    return iVar1;
  }
  iVar1 = Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00526bf0(iVar1);
  return iVar1;
}
