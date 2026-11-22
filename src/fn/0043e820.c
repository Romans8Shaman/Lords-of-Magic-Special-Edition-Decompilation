/* Rebuilt from lomse.exe FUN_0043e820 @ 0x0043e820 (234 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd31c (*(undefined *)0x005cd31c)
#define FUN_0043d300 ((int * (__thiscall *)(void *, int, int, int))0x0043d300)
#define FUN_0043e7b0 ((undefined4 (__fastcall *)(int))0x0043e7b0)

#define LOM_SELF_0043e820 1
undefined4 __thiscall
rb_0043e820(void *this,undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  if ((param_4 < 0) || (0xf < param_4)) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_005af194 + param_4 * 0x1d84;
  }
  this_00 = (int *)FUN_0043e7b0((int)this);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this);
  if (iVar1 != iVar2) {
    return 0;
  }
  piVar3 = FUN_0043d300(&DAT_005cd31c,param_2,this_00[0x20],param_3);
  *param_1 = piVar3;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (this_00[0x38] * 0x100 < piVar3[3]) {
    return 0;
  }
  if (*(int *)(puVar4 + 0xcfc) < piVar3[4]) {
    return 0;
  }
  if (*(int *)(puVar4 + 0xd04) < piVar3[5]) {
    return 0;
  }
  return (uint)(piVar3[6] <= *(int *)(puVar4 + 0xd08));
}
