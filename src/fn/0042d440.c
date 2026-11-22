/* Rebuilt from lomse.exe FUN_0042d440 @ 0x0042d440 (128 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00427b50 ((undefined4 (__fastcall *)(int))0x00427b50)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0042d440 1
int __fastcall rb_0042d440(int *param_1)

{
  int iVar1;

  iVar1 = *param_1;
  if (iVar1 != 0) {
    *param_1 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return iVar1;
  }
  iVar1 = Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00427b50(iVar1);
  return iVar1;
}
