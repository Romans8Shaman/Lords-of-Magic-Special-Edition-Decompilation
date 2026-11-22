/* Rebuilt from lomse.exe FUN_0045cea0 @ 0x0045cea0 (197 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_0044ea50 ((undefined4 (__thiscall *)(void *, int))0x0044ea50)
#define FUN_00478920 ((undefined4 (__fastcall *)(int *))0x00478920)
#define FUN_0052bb10 ((undefined4 (__thiscall *)(void *, int, int))0x0052bb10)
#define _DAT_005867a0 (*(undefined4 *)0x005867a0)

#define LOM_SELF_0045cea0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __stdcall rb_0045cea0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 0;
  }
  _DAT_005867a0 = param_2[10];
  FUN_00478920(&DAT_00585408);
  iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
  if (iVar2 == iVar1) {
    iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
    iVar2 = ((undefined4 (__thiscall *)(__typeof__(param_2)))(**(code **)(*param_2 + 0x3c)))(param_2);
    if ((iVar2 != iVar1) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) {
      FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,param_1[10],-1);
    }
  }
  if (param_3 == 0) {
    FUN_004225a0(param_2,param_1,0);
    return 1;
  }
  FUN_0044ea50(param_1,param_2[0x12]);
  FUN_004225a0(param_2,param_1,1);
  return 1;
}
