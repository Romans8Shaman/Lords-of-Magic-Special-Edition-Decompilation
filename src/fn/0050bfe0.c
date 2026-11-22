/* Rebuilt from lomse.exe FUN_0050bfe0 @ 0x0050bfe0 (128 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00509f40 ((undefined4 (__fastcall *)(undefined4 *))0x00509f40)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0050bfe0 1
int __fastcall rb_0050bfe0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  iVar2 = *param_1;
  if (iVar2 != 0) {
    *param_1 = *(int *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x14) = 0;
    return iVar2;
  }
  puVar1 = (undefined4 *)Ordinal_401(0x18,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = FUN_00509f40(puVar1);
  return iVar2;
}
