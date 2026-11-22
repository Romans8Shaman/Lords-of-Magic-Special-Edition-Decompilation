/* Rebuilt from lomse.exe FUN_00493ea0 @ 0x00493ea0 (176 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005cd34c (*(undefined *)0x005cd34c)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_004935c0 ((undefined4 (__thiscall *)(void *, int *, uint, int, int, int))0x004935c0)
#define FUN_004b9e00 ((undefined4 (__thiscall *)(void *, int))0x004b9e00)

#define LOM_SELF_00493ea0 1
undefined4 __thiscall
rb_00493ea0(void *this,int *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *this_00;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  this_00 = (int *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 4));
  if (this_00 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_004b9e00(&DAT_005cd34c,*(int *)this);
  if (iVar2 == 0) {
    return 0;
  }
  if (*this_00 == 4) {
    if (*(int *)this_00[1] != 0) {
      piVar4 = (int *)(*(int *)this_00[1] + 0x10);
      goto LAB_00493f18;
    }
  }
  else {
    if (*this_00 != 7) {
      piVar4 = (int *)0x0;
      goto LAB_00493f18;
    }
    if (((this_00[1] != 0) && (piVar4 = *(int **)(this_00[1] + 0x14), piVar4 != (int *)0x0)) &&
       (iVar1 = *piVar4, iVar1 != 0)) {
      piVar4 = (int *)(iVar1 + 0x10);
      if (*(int *)(iVar1 + 0x10) == 0) {
        piVar4 = (int *)0x0;
      }
      goto LAB_00493f18;
    }
  }
  piVar4 = (int *)0x0;
LAB_00493f18:
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar1 = *piVar4;
  *piVar4 = iVar2;
  uVar3 = FUN_004935c0(this_00,param_1,param_2,param_3,param_4,param_5);
  *piVar4 = iVar1;
  return uVar3;
}
