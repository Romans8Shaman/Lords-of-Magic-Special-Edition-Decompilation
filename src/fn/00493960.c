/* Rebuilt from lomse.exe FUN_00493960 @ 0x00493960 (157 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)

#define LOM_SELF_00493960 1
undefined4 __thiscall rb_00493960(void *this,int *param_1,int param_2,int param_3)

{
  void *this_00;
  int iVar1;
  
  this_00 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x10));
  if (this_00 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_00491910(this_00,param_1,param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = param_2 + *(int *)this;
  if (param_2 + *(int *)this <= *param_1) {
    iVar1 = *param_1;
  }
  *param_1 = iVar1;
  iVar1 = param_3 + *(int *)((int)this + 4);
  if (iVar1 <= param_1[1]) {
    iVar1 = param_1[1];
  }
  param_1[1] = iVar1;
  iVar1 = *(int *)((int)this + 8) + param_2 + -1 + *(int *)this;
  if (param_1[2] < iVar1) {
    iVar1 = param_1[2];
  }
  param_1[2] = iVar1;
  iVar1 = *(int *)((int)this + 0xc) + param_3 + -1 + *(int *)((int)this + 4);
  if (param_1[3] < iVar1) {
    iVar1 = param_1[3];
  }
  param_1[3] = iVar1;
  return 1;
}
