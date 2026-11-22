/* Rebuilt from lomse.exe FUN_004c3bf0 @ 0x004c3bf0 (142 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_004c3ba0 (*(undefined *)0x004c3ba0) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_004c3bf0 1
undefined4 * __fastcall rb_004c3bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;

  *param_1 = 0x96;
  param_1[2] = 0;
  puVar1 = (undefined4 *)Ordinal_401(0x4b4,s_C__lomse_source_storm_h_00555130,0x3fa,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x96;
    FUN_00539ff0(puVar2,8,0x96,&LAB_004c3ba0,op_sunlight);
  }
  param_1[2] = puVar2;
  param_1[1] = 0;
  return param_1;
}
