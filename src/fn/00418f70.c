/* Rebuilt from lomse.exe FUN_00418f70 @ 0x00418f70 (803 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005af174 (*(undefined4 *)0x005af174)
#define FUN_00415fd0 ((undefined4 (__thiscall *)(void *, int *))0x00415fd0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00418f30 ((uint (__fastcall *)(int))0x00418f30)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a6d70 ((undefined4 (__thiscall *)(void *, int, int))0x004a6d70)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0052b6f0 ((undefined4 (__thiscall *)(void *, int, uint))0x0052b6f0)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_00418f70 1
undefined4 __thiscall rb_00418f70(void *this, void *param_1, uint volatile param_2)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  bVar1 = true;
  puVar3 = FUN_004c6fc0();
  uVar2 = param_2;
  iVar4 = FUN_004a8300(puVar3,param_2,3);
  puVar3 = FUN_004c6fc0();
  param_2 = FUN_004a8300(puVar3,uVar2,0);
  puVar3 = FUN_004c6fc0();
  iVar5 = FUN_004a8300(puVar3,uVar2,1);
  puVar3 = FUN_004c6fc0();
  iVar6 = FUN_004a8300(puVar3,uVar2,2);
  if (*(uint *)((int)param_1 + 0x548) != uVar2) {
    return 0;
  }
  iVar7 = FUN_00420560((int)param_1);
  if ((iVar7 != 0) && (*(int *)((int)param_1 + 0x48) != *(int *)((int)this + 0x228a8))) {
    bVar1 = false;
  }
  uVar8 = FUN_00482ac0(this,iVar4,3);
  uVar9 = FUN_00482ac0(this,iVar6,2);
  piVar10 = (int *)FUN_00482ac0(this,param_2,0);
  uVar11 = FUN_00482ac0(this,iVar5,1);
  if ((piVar10 != (int *)0x0) && (*(int *)((int)param_1 + 0x28) != piVar10[10])) {
    switch((&DAT_005a8078)[DAT_005a7d8c * 0x100]) {
    case 2:
    case 5:
    case 6:
      if (*(int *)((int)param_1 + 0x48) != piVar10[0x12]) {
        if (bVar1) {
          *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x40000;
          return 1;
        }
        return 1;
      }
      iVar5 = FUN_0052d140((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
      iVar4 = *(int *)((int)param_1 + 0x28);
      iVar6 = FUN_00415fd0(param_1,piVar10);
      if (iVar6 == 0) {
        FUN_004176d0(param_1,0);
        return 1;
      }
      if (iVar5 == iVar4) {
        FUN_0052b6f0(&DAT_005a7d90 + DAT_005a7d8c * 0x400,piVar10[10],0);
        return 1;
      }
      return 1;
    case 3:
      return 1;
    default:
    }
  }
  if (uVar11 != 0) {
    if (-1 < *(int *)(uVar11 + 0x54)) {
      switch((&DAT_005a8078)[DAT_005a7d8c * 0x100]) {
      case 2:
      case 5:
      case 6:
        if (bVar1) {
          *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x40000;
        }
        break;
      case 3:
        if ((((*(byte *)(uVar11 + 0x30) & 0x40) != 0) &&
            (uVar12 = FUN_00418f30((int)param_1), uVar12 != 0)) &&
           ((*(int *)((int)this + 0x4798) < 0 ||
            (*(int *)((int)this + 0x4798) == *(int *)(uVar11 + 0x28))))) {
          *(undefined4 *)((int)this + 0x4798) = *(undefined4 *)(uVar11 + 0x28);
          FUN_004176d0(param_1,0);
          *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x4000000;
          DAT_005af174 = 0;
          iVar4 = FUN_004f6000(&DAT_005ae974,*(int *)((int)param_1 + 0x28));
          if (iVar4 != 0) {
            FUN_004a6d70(&DAT_005ae958,iVar4,*(int *)((int)param_1 + 0x1c));
          }
        }
      }
    }
    iVar4 = FUN_004a9a60((void *)((int)this + 0x482c),&param_2,uVar2);
    if (iVar4 == 0) {
      return 1;
    }
    if ((param_2 & 0xa00000) == 0) {
      return 1;
    }
  }
  if (uVar8 != 0) {
    iVar4 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
    if (iVar4 == 2) goto LAB_0041926d;
    if ((4 < iVar4) && (iVar4 < 7)) {
      if (bVar1) {
        *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x40000;
        return 1;
      }
      return 1;
    }
  }
  if ((uVar9 == 0) ||
     ((iVar4 = (&DAT_005a8078)[DAT_005a7d8c * 0x100], iVar4 != 2 && ((iVar4 < 5 || (6 < iVar4))))))
  {
    return 0;
  }
LAB_0041926d:
  if (bVar1) {
    *(uint *)((int)param_1 + 0x30) = *(uint *)((int)param_1 + 0x30) | 0x40000;
  }
  return 1;
}
