/* Rebuilt from lomse.exe FUN_0041cdf0 @ 0x0041cdf0 (322 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_004287c0 ((undefined4 (__thiscall *)(void *, int))0x004287c0)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f1df0 ((int (__fastcall *)(int))0x004f1df0)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_0041cdf0 1
undefined4 __thiscall rb_0041cdf0(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
#define local_c (*(_t_local_c *)(_fr + 0x4))
  
  iVar1 = FUN_004efe80(&DAT_005aee6c,*param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = param_1[10];
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  piVar2 = (int *)FUN_004f1df0((int)param_1);
  this_00 = (int *)((int)this + iVar6 * 0x4c + 0xc4);
  uVar3 = FUN_00529180(this_00);
  iVar4 = FUN_00521e00(this_00);
  iVar6 = 0;
  local_c = *(int *)(iVar1 + 0x18);
  if (piVar2 == (int *)0x0) {
    if (uVar3 == 0) {
      return 0;
    }
    iVar6 = *(int *)(uVar3 + 0x14);
  }
  else {
    iVar5 = FUN_00427b80(*piVar2);
    if ((*(uint *)(iVar5 + 0x18) & 0x60000) == 0) {
      local_c = 0;
    }
    else {
      iVar5 = FUN_00427b80(*piVar2);
      if (((*(uint *)(iVar5 + 0x18) & 0x20000) != 0) && (uVar3 != 0)) {
        iVar6 = *(int *)(uVar3 + 0x14);
      }
      iVar5 = FUN_00427b80(*piVar2);
      if ((*(uint *)(iVar5 + 0x18) & 0x40000) != 0) {
        iVar6 = iVar6 + piVar2[2];
      }
    }
  }
  if (iVar6 < local_c) {
    return 0;
  }
  if (piVar2 == (int *)0x0) {
    if (*(int *)(uVar3 + 0xc) < *(int *)(iVar1 + 0x38)) {
      return 0;
    }
    if (*(int *)(iVar4 + 0x1c) != *(int *)(iVar1 + 8)) {
      iVar1 = FUN_004287c0(this_00,*param_1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
#undef local_c
}
