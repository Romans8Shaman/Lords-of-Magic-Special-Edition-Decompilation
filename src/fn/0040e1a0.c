/* Rebuilt from lomse.exe FUN_0040e1a0 @ 0x0040e1a0 (123 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0040dcd0 ((undefined4 (__fastcall *)(int))0x0040dcd0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0040e1a0 1
int __fastcall rb_0040e1a0(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x40);
    return iVar1;
  }
  iVar1 = Ordinal_401(0x48,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_0040dcd0(iVar1);
  return iVar1;
}
