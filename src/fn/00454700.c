/* Rebuilt from lomse.exe FUN_00454700 @ 0x00454700 (123 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004546e0 ((undefined4 (__fastcall *)(undefined4 *))0x004546e0)
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_00454700 1
undefined4 * __fastcall rb_00454700(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  *param_1 = 8;
  param_1[1] = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x1c0,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    iVar3 = 8;
    puVar2 = puVar1;
    do {
      FUN_004546e0(puVar2);
      puVar2 = puVar2 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[2] = puVar1;
  return param_1;
}
