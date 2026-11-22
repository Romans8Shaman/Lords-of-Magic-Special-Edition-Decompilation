/* Rebuilt from lomse.exe FUN_004eba40 @ 0x004eba40 (933 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7ac8 (*(int *)0x005a7ac8)
#define DAT_005a7acc (*(int *)0x005a7acc)
#define FUN_00495f90 ((undefined4 (__thiscall *)(void *, int *, int, int, int, int))0x00495f90)
#define FUN_004960f0 ((undefined4 (__thiscall *)(void *, int *, int, int, int, int))0x004960f0)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_004eb680 ((undefined4 (__thiscall *)(void *, int, int))0x004eb680)
#define _DAT_0054dd60 (*(double *)0x0054dd60)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004eba40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004eba40(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_2 + DAT_005a7ac8 != *(int *)((int)this + 0x150)) ||
     (DAT_005a7acc + param_3 != *(int *)((int)this + 0x154))) {
    FUN_004eb680(this,param_2 + DAT_005a7ac8,DAT_005a7acc + param_3);
  }
  FUN_00496340(param_1,*(int **)((int)this + 0x2c),*(int *)((int)this + 0x150) - DAT_005a7ac8,
               *(int *)((int)this + 0x154) - DAT_005a7acc,0);
  if ((*(byte *)((int)this + 0xd4) & 1) == 0) {
    iVar7 = 0;
    if (0 < *(int *)this + 1) {
      do {
        iVar6 = *(int *)((int)this + iVar7 * 4 + 0xb0);
        lVar8 = __ftol((float10)*(int *)((int)this + iVar7 * 4 + 0x14) *
                       (float10)*(double *)((int)this + 0x70) - (float10)_DAT_0054dd60);
        iVar5 = *(int *)((int)this + iVar7 * 4 + 0x78) + (int)lVar8 / 2 + iVar6;
        if (iVar7 == 0) {
          iVar2 = -*(int *)((int)this + 0xa8);
        }
        else {
          if (iVar7 == *(int *)this) {
            iVar1 = *(int *)((int)this + 0xa8);
            iVar4 = *(int *)(*(int *)((int)this + 0x30) + 0xc);
            iVar2 = -iVar1;
          }
          else {
            iVar1 = *(int *)((int)this + 0xa8);
            iVar4 = *(int *)(*(int *)((int)this + 0x30) + 0xc);
            iVar2 = iVar4;
          }
          iVar6 = iVar6 - iVar1;
          iVar5 = iVar5 + iVar4;
        }
        param_2 = (int)lVar8 + iVar2;
        if (0 < param_2) {
          piVar3 = *(int **)((int)this + iVar7 * 4 + 0x34);
          if (piVar3 != (int *)0x0) {
            FUN_00495f90(param_1,piVar3,iVar6 - DAT_005a7ac8,
                         (*(int *)((int)this + 8) - DAT_005a7acc) + *(int *)((int)this + 0x154),
                         param_2,(iVar6 - *(int *)((int)this + 4)) - *(int *)((int)this + 0x150));
          }
          *(int *)((int)this + iVar7 * 0x10 + 0xd8) = iVar6;
          *(int *)((int)this + iVar7 * 0x10 + 0xdc) =
               *(int *)((int)this + 8) + *(int *)((int)this + 0x154);
          *(int *)((iVar7 + 0xe) * 0x10 + (int)this) = iVar6 + param_2;
          iVar4 = *(int *)((int)this + 0x154) + *(int *)((int)this + 8);
          *(int *)((int)this + iVar7 * 0x10 + 0xe4) = iVar4;
          iVar6 = *(int *)((int)this + iVar7 * 4 + 0x34);
          if (iVar6 != 0) {
            *(int *)((int)this + iVar7 * 0x10 + 0xe4) = *(int *)(iVar6 + 0x10) + iVar4;
          }
        }
        *(int *)((int)this + iVar7 * 4 + 0x138) = iVar5;
        piVar3 = *(int **)((int)this + iVar7 * 4 + 0x4c);
        if (piVar3 != (int *)0x0) {
          FUN_00496340(param_1,piVar3,iVar5 - DAT_005a7ac8,
                       *(int *)((int)this + iVar7 * 4 + 0x90) - DAT_005a7acc,0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)this + 1);
    }
    iVar7 = 0;
    if (0 < *(int *)this) {
      piVar3 = (int *)((int)this + 0xb4);
      do {
        FUN_00496340(param_1,*(int **)((int)this + 0x30),*piVar3 - DAT_005a7ac8,
                     *(int *)((int)this + 0xac) - DAT_005a7acc,0);
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar7 < *(int *)this);
    }
  }
  else {
    iVar7 = 0;
    if (0 < *(int *)this + 1) {
      do {
        iVar6 = *(int *)((int)this + iVar7 * 4 + 0xb0);
        lVar8 = __ftol((float10)*(int *)((int)this + iVar7 * 4 + 0x14) *
                       (float10)*(double *)((int)this + 0x70) - (float10)_DAT_0054dd60);
        iVar5 = *(int *)((int)this + iVar7 * 4 + 0x78) + (int)lVar8 / 2 + iVar6;
        if (iVar7 == 0) {
          iVar2 = -*(int *)((int)this + 0xa8);
        }
        else {
          if (iVar7 == *(int *)this) {
            iVar1 = *(int *)((int)this + 0xa8);
            iVar4 = *(int *)(*(int *)((int)this + 0x30) + 0x10);
            iVar2 = -iVar1;
          }
          else {
            iVar1 = *(int *)((int)this + 0xa8);
            iVar4 = *(int *)(*(int *)((int)this + 0x30) + 0x10);
            iVar2 = iVar4;
          }
          iVar6 = iVar6 - iVar1;
          iVar5 = iVar5 + iVar4;
        }
        param_2 = (int)lVar8 + iVar2;
        if (0 < param_2) {
          piVar3 = *(int **)((int)this + iVar7 * 4 + 0x34);
          if (piVar3 != (int *)0x0) {
            FUN_004960f0(param_1,piVar3,
                         (*(int *)((int)this + 4) - DAT_005a7ac8) + *(int *)((int)this + 0x150),
                         iVar6 - DAT_005a7acc,param_2,
                         (iVar6 - *(int *)((int)this + 8)) - *(int *)((int)this + 0x154));
          }
          *(int *)((int)this + iVar7 * 0x10 + 0xd8) =
               *(int *)((int)this + 4) + *(int *)((int)this + 0x150);
          *(int *)((int)this + iVar7 * 0x10 + 0xdc) = iVar6;
          piVar3 = (int *)((iVar7 + 0xe) * 0x10 + (int)this);
          *piVar3 = *(int *)((int)this + 4) + *(int *)((int)this + 0x150);
          *(int *)((int)this + iVar7 * 0x10 + 0xe4) = iVar6 + param_2;
          iVar6 = *(int *)((int)this + iVar7 * 4 + 0x34);
          if (iVar6 != 0) {
            *piVar3 = *piVar3 + *(int *)(iVar6 + 0xc);
          }
        }
        *(int *)((int)this + iVar7 * 4 + 0x138) = iVar5;
        piVar3 = *(int **)((int)this + iVar7 * 4 + 0x4c);
        if (piVar3 != (int *)0x0) {
          FUN_00496340(param_1,piVar3,*(int *)((int)this + iVar7 * 4 + 0x90) - DAT_005a7ac8,
                       iVar5 - DAT_005a7acc,0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)this + 1);
    }
    iVar7 = 0;
    if (0 < *(int *)this) {
      piVar3 = (int *)((int)this + 0xb4);
      do {
        FUN_00496340(param_1,*(int **)((int)this + 0x30),*(int *)((int)this + 0xac) - DAT_005a7ac8,
                     *piVar3 - DAT_005a7acc,0);
        iVar7 = iVar7 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar7 < *(int *)this);
      return;
    }
  }
  return;
}
