/* Rebuilt from lomse.exe FUN_004237d0 @ 0x004237d0 (709 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define DAT_005ae9bc (*(int *)0x005ae9bc)
#define FUN_00413180 ((int (__thiscall *)(void *, int))0x00413180)
#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a6f60 ((int (__thiscall *)(void *, int, uint))0x004a6f60)
#define FUN_004a7d50 ((int (__thiscall *)(void *, int *, int))0x004a7d50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_0052bb10 ((undefined4 (__thiscall *)(void *, int, int))0x0052bb10)

#define LOM_SELF_004237d0 1
void __thiscall rb_004237d0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1 < 0) {
    return;
  }
  if ((*(uint *)((int)this + 0x30) & 0x1c00000) == 0) goto LAB_00423919;
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),2);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),3);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x28),1);
  if ((*(int *)((int)this + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
     ((*(byte *)((int)this + 0x30) & 0x20) != 0)) {
    local_4 = *(int *)((int)this + 0x28);
  }
  else {
    local_4 = -1;
  }
  iVar4 = FUN_00413180(this,*(int *)(DAT_005ae970 +
                                    ((*(int *)((int)this + 0x44) - 4U & 7) + param_1 * 8) * 4));
  if (uVar1 == 0) {
    if (uVar2 != 0) {
      *(undefined4 *)(uVar2 + 0x44) = 0;
      uVar1 = *(uint *)((int)this + 0x30) & 0xffbfffff;
      goto LAB_004238a9;
    }
    if (uVar3 != 0) {
      *(undefined4 *)(uVar3 + 0x58) = 0;
      uVar1 = *(uint *)((int)this + 0x30) & 0xfeffffff;
      goto LAB_004238a9;
    }
    iVar4 = param_1;
  }
  else {
    *(undefined4 *)(uVar1 + 0x48) = 0;
    uVar1 = *(uint *)((int)this + 0x30) & 0xff7fffff;
LAB_004238a9:
    *(uint *)((int)this + 0x30) = uVar1;
    iVar4 = FUN_004a7d50(&DAT_005ae958,this,iVar4);
  }
  if ((*(int *)((int)this + 0x5b4) != -1) &&
     (puVar5 = FUN_00485080(&DAT_005aa12c,*(int *)((int)this + 0x5b4),0x2f),
     puVar5 != (undefined4 *)0x0)) {
    puVar5[0x16c] = iVar4;
  }
  ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  if (-1 < local_4) {
    if (*(int *)((int)this + 0x4c) < 1) {
      iVar4 = -1;
    }
    else {
      iVar4 = *(int *)((int)this + 0x28);
    }
    FUN_0052bb10(&DAT_005a7d90 + DAT_005a7d8c * 0x400,local_4,iVar4);
  }
LAB_00423919:
  piVar6 = *(int **)(DAT_005ae9bc + param_1 * 8);
  if (piVar6 == (int *)0x0) {
    FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),param_1);
    iVar4 = DAT_005ae98c;
    if ((1 < *(int *)((int)this + 0x4c)) && (iVar8 = DAT_005ae998, DAT_005ae998 <= DAT_005ae98c)) {
      do {
        piVar6 = (int *)FUN_004f6000(&DAT_005ae974,iVar8);
        if ((iVar8 != *(int *)((int)this + 0x28)) &&
           (((piVar6 != (int *)0x0 && (piVar6[1] == 7)) &&
            (piVar6[0x11] == *(int *)((int)this + 0x28))))) {
          FUN_004a6dd0(&DAT_005ae958,piVar6,piVar6[7],param_1);
          ((undefined4 (__thiscall *)(__typeof__(piVar6)))(**(code **)(*piVar6 + 0x2c)))(piVar6);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar4);
      return;
    }
  }
  else {
    bVar9 = false;
    iVar4 = ((undefined4 (__thiscall *)(__typeof__(piVar6)))(**(code **)(*piVar6 + 0x3c)))(piVar6);
    iVar8 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x3c)))(this);
    if (iVar4 == iVar8) {
      iVar4 = piVar6[1];
      if (iVar4 == 1) {
        if ((piVar6[0x15] < 0) ||
           (puVar5 = FUN_00485080(&DAT_005aa12c,piVar6[10],0x2f), puVar5 != (undefined4 *)0x0)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
      }
      else if ((1 < iVar4) && (iVar4 < 4)) {
        puVar5 = FUN_00485080(&DAT_005aa12c,piVar6[10],0x2f);
        bVar9 = puVar5 == (undefined4 *)0x0;
      }
    }
    if (bVar9) {
      FUN_004225a0(this,piVar6,1);
      return;
    }
    iVar7 = FUN_004a6f60(&DAT_005ae958,param_1,0x40000);
    FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),iVar7);
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
    iVar8 = DAT_005ae98c;
    iVar4 = DAT_005ae998;
    if (1 < *(int *)((int)this + 0x4c)) {
      for (; iVar4 <= iVar8; iVar4 = iVar4 + 1) {
        piVar6 = (int *)FUN_004f6000(&DAT_005ae974,iVar4);
        if ((((iVar4 != *(int *)((int)this + 0x28)) && (piVar6 != (int *)0x0)) && (piVar6[1] == 7))
           && (piVar6[0x11] == *(int *)((int)this + 0x28))) {
          piVar6[7] = iVar7;
          ((undefined4 (__thiscall *)(__typeof__(piVar6)))(**(code **)(*piVar6 + 0x2c)))(piVar6);
        }
      }
    }
  }
  return;
#undef local_4
}
