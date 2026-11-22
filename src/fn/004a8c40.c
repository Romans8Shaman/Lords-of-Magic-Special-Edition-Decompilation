/* Rebuilt from lomse.exe FUN_004a8c40 @ 0x004a8c40 (1133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004fbf80 ((undefined4 (__thiscall *)(void *, int, int))0x004fbf80)
#define FUN_00517a50 ((undefined4 (__thiscall *)(void *, int, int))0x00517a50)
#define _DAT_0054dae8 (*(double *)0x0054dae8)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004a8c40 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004a8c40(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_60;
  typedef int _t_iStack_5c;
  typedef int _t_iStack_58;
  typedef int _t_iStack_54;
  typedef int _t_iStack_50;
  typedef int _t_iStack_4c;
  typedef int _t_iStack_40;
  typedef int _t_iStack_3c;
  typedef int _t_iStack_38;
  typedef int _t_iStack_20;
#define iStack_60 (*(_t_iStack_60 *)(_fr + 0x0))
#define iStack_5c (*(_t_iStack_5c *)(_fr + 0x4))
#define iStack_58 (*(_t_iStack_58 *)(_fr + 0x8))
#define iStack_54 (*(_t_iStack_54 *)(_fr + 0xc))
#define iStack_50 (*(_t_iStack_50 *)(_fr + 0x10))
#define iStack_4c (*(_t_iStack_4c *)(_fr + 0x14))
#define iStack_40 (*(_t_iStack_40 *)(_fr + 0x20))
#define iStack_3c (*(_t_iStack_3c *)(_fr + 0x24))
#define iStack_38 (*(_t_iStack_38 *)(_fr + 0x28))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x40))
  
  iVar2 = ((undefined4 (__thiscall *)(__typeof__(param_3)))(**(code **)(*param_3 + 0x38)))(param_3);
  if (0 < iVar2) {
    iVar7 = *(int *)((int)this + 0x6c);
    iVar10 = param_2 % iVar7;
    iVar3 = param_2 / iVar7;
    iVar12 = iVar2 + *(int *)((int)this + 0x50);
    uVar4 = ((undefined4 (__thiscall *)(__typeof__(param_3)))(**(code **)(*param_3 + 0x3c)))(param_3);
    iStack_50 = param_1 % iVar7 - iVar10;
    uVar11 = 1 << ((byte)uVar4 & 0x1f) & 0xff;
    iStack_60 = param_1 / iVar7 - iVar3;
    if (iStack_50 < -1) {
      iStack_50 = 1;
    }
    else if (1 < iStack_50) {
      iStack_50 = -1;
    }
    if (iStack_60 < -1) {
      iStack_60 = 1;
    }
    else if (1 < iStack_60) {
      iStack_60 = -1;
    }
    if ((iStack_50 != 0) || (iStack_60 != 0)) {
      iStack_20 = -iVar12;
      if (iStack_50 < 0) {
        iVar7 = iStack_20 + -1;
        iStack_38 = iVar12;
      }
      else {
        iStack_38 = iVar12 + 1;
        iVar7 = iStack_20;
      }
      if (iStack_60 < 0) {
        iStack_20 = iStack_20 + -1;
        iStack_3c = iVar12;
      }
      else {
        iStack_3c = iVar12 + 1;
      }
      for (; iVar7 <= iStack_38; iVar7 = iVar7 + 1) {
        if (iStack_20 <= iStack_3c) {
          iVar8 = iVar10 + iVar7;
          iStack_40 = iStack_20 + iVar3;
          iStack_4c = iStack_20;
          do {
            iVar13 = *(int *)((int)this + 0x5c);
            iVar1 = iVar13;
            if (iVar8 < 0) {
LAB_004a8db0:
              iStack_54 = iVar8 + iVar1;
            }
            else {
              iStack_54 = iVar8;
              if (iVar13 <= iVar8) {
                iVar1 = -iVar13;
                goto LAB_004a8db0;
              }
            }
            if (iStack_40 < 0) {
              iVar1 = *(int *)((int)this + 0x60);
LAB_004a8dca:
              param_2 = iVar1 + iStack_40;
            }
            else {
              param_2 = iStack_40;
              if (*(int *)((int)this + 0x60) <= iStack_40) {
                iVar1 = -*(int *)((int)this + 0x60);
                goto LAB_004a8dca;
              }
            }
            iVar13 = param_2 * iVar13 + iStack_54;
            lVar14 = __ftol(SQRT((float10)(iStack_4c * iStack_4c + iVar7 * iVar7)) -
                            (float10)_DAT_0054dae8);
            if (iVar2 < (int)lVar14) {
              if (iVar2 < iVar12) {
                iVar1 = *(int *)((int)this + 0x48);
                param_1 = (((int)lVar14 - iVar2) * iVar1) / (iVar12 - iVar2);
                if (iVar1 < param_1) {
                  param_1 = iVar1;
                }
                if (param_1 < 0) {
                  param_1 = 0;
                }
              }
            }
            else {
              param_1 = 0;
              *(uint *)(*(int *)((int)this + 100) + 4 + iVar13 * 8) =
                   *(uint *)(*(int *)((int)this + 100) + 4 + iVar13 * 8) | uVar11;
            }
            iVar1 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
            iVar5 = ((undefined4 (__thiscall *)(__typeof__(param_3)))(**(code **)(*param_3 + 0x3c)))(param_3);
            if (iVar5 == iVar1) {
              lVar14 = __ftol(SQRT((float10)((iVar7 - iStack_50) * (iVar7 - iStack_50) +
                                            (iStack_4c - iStack_60) * (iStack_4c - iStack_60))) -
                              (float10)_DAT_0054dae8);
              if (iVar2 < (int)lVar14) {
                if (iVar2 < iVar12) {
                  iVar1 = *(int *)((int)this + 0x48);
                  iStack_5c = (((int)lVar14 - iVar2) * iVar1) / (iVar12 - iVar2);
                  if (iVar1 < iStack_5c) {
                    iStack_5c = iVar1;
                  }
                  if (iStack_5c < 0) goto LAB_004a8ec7;
                }
              }
              else {
LAB_004a8ec7:
                iStack_5c = 0;
              }
              iVar1 = iVar13 * 8;
              if ((*(uint *)(*(int *)((int)this + 100) + 4 + iVar1) & uVar11) != 0) {
                if (*(int *)((int)this + 0x4c) < param_1) {
                  param_1 = *(int *)((int)this + 0x4c);
                }
              }
              if (iStack_5c < param_1) {
                this_00 = (int *)FUN_004fbf80((void *)((int)this + 0x1c),
                                              *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400),0);
                while ((this_00 != (int *)0x0 && (0 < param_1))) {
                  if ((this_00 != param_3) &&
                     ((iVar5 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x38)))(this_00), iVar5 != 0 &&
                      (iVar6 = FUN_004a8960(this,this_00[7],iVar13), iVar6 <= iVar5)))) {
                    iVar9 = this_00[7] % *(int *)((int)this + 0x6c) - iStack_54;
                    iVar6 = this_00[7] / *(int *)((int)this + 0x6c) - param_2;
                    lVar14 = __ftol(SQRT((float10)(iVar9 * iVar9 + iVar6 * iVar6)) -
                                    (float10)_DAT_0054dae8);
                    iVar6 = iVar5 + *(int *)((int)this + 0x50);
                    if (iVar5 < (int)lVar14) {
                      if (iVar5 < iVar6) {
                        iVar9 = *(int *)((int)this + 0x48);
                        iStack_58 = (((int)lVar14 - iVar5) * iVar9) / (iVar6 - iVar5);
                        if (iVar9 < iStack_58) {
                          iStack_58 = iVar9;
                        }
                        if (iStack_58 < 0) goto LAB_004a8fd6;
                      }
                    }
                    else {
LAB_004a8fd6:
                      iStack_58 = 0;
                    }
                    if (iStack_58 < param_1) {
                      param_1 = iStack_58;
                    }
                  }
                  this_00 = (int *)FUN_004fbf80((void *)((int)this + 0x1c),
                                                *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400),
                                                (int)this_00);
                }
                if (*(short *)(*(int *)((int)this + 0x54) + 2 + iVar1) != param_1) {
                  *(short *)(*(int *)((int)this + 0x54) + 2 + iVar1) = (short)param_1;
                  goto LAB_004a905e;
                }
              }
              else if (param_1 < *(short *)(*(int *)((int)this + 0x54) + 2 + iVar1)) {
                *(short *)(*(int *)((int)this + 0x54) + 2 + iVar1) = (short)param_1;
LAB_004a905e:
                FUN_00517a50(&DAT_005876d0,iStack_54,param_2);
              }
            }
            iStack_4c = iStack_4c + 1;
            iStack_40 = iStack_40 + 1;
          } while (iStack_4c <= iStack_3c);
        }
      }
    }
  }
  return;
#undef iStack_60
#undef iStack_5c
#undef iStack_58
#undef iStack_54
#undef iStack_50
#undef iStack_4c
#undef iStack_40
#undef iStack_3c
#undef iStack_38
#undef iStack_20
}
