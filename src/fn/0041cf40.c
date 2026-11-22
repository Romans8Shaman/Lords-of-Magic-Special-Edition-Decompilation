/* Rebuilt from lomse.exe FUN_0041cf40 @ 0x0041cf40 (176 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f1df0 ((int (__fastcall *)(int))0x004f1df0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_0041cf40 1
undefined4 __thiscall rb_0041cf40(void *this,int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar6 = param_1[10];
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  piVar4 = (int *)FUN_004f1df0((int)param_1);
  piVar1 = (int *)((int)this + iVar6 * 0x4c + 0xc4);
  uVar5 = FUN_00529180(piVar1);
  FUN_00521e00(piVar1);
  uVar2 = *(undefined4 *)(iVar3 + 0x18);
  if (piVar4 == (int *)0x0) {
    if (uVar5 == 0) {
      return 0;
    }
    return uVar2;
  }
  iVar3 = FUN_00427b80(*piVar4);
  if ((*(uint *)(iVar3 + 0x18) & 0x60000) == 0) {
    return 0;
  }
  FUN_00427b80(*piVar4);
  FUN_00427b80(*piVar4);
  return uVar2;
}
