/* Rebuilt from lomse.exe FUN_0047ea50 @ 0x0047ea50 (202 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058341c (*(int *)0x0058341c)
#define FUN_0047f510 ((undefined4 (__stdcall *)(void))0x0047f510)
#define FUN_00495290 ((undefined4 * (__thiscall *)(void *, byte *))0x00495290)
#define FUN_00539ff0 ((undefined4 (__stdcall *)(undefined4, undefined4, int, undefined *, undefined4))0x00539ff0)
#define LAB_0047f4e0 (*(undefined *)0x0047f4e0) /* code label used as address */
#define Ordinal_401 ((undefined4 (__stdcall *)(undefined4, undefined4, undefined4, undefined4))0x00533864) /* thunk -> STORM.DLL!Ordinal_401 */
#define s_C__lomse_source_storm_h_00555130 (*(char (*)[])0x00555130)

#define LOM_SELF_0047ea50 1
undefined4 * __fastcall
rb_0047ea50(undefined4 *param_1,undefined4 unused_reg_1,byte *unused_stack_0,
            undefined4 unused_stack_4,undefined4 unused_stack_8,undefined4 unused_stack_12)

{
  void *this;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;

  puVar2 = param_1 + 4;
  FUN_00539ff0(puVar2,0x1c,0x100,&LAB_0047f4e0,FUN_0047f510);
  DAT_0058341c = DAT_0058341c + 0x1c14;
  this = (void *)Ordinal_401(0x20,s_C__lomse_source_storm_h_00555130,0x3ef,0);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_00495290(this,unused_stack_0);
  }
  *param_1 = puVar1;
  param_1[2] = unused_stack_8;
  param_1[3] = unused_stack_12;
  param_1[1] = unused_stack_4;
  param_1[0x704] = 1;
  iVar3 = 0x100;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}
