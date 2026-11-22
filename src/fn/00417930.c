/* Rebuilt from lomse.exe FUN_00417930 @ 0x00417930 (5595 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579078 (*(uint *)0x00579078)
#define DAT_0057907c (*(int * *)0x0057907c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7c04 (*(uint *)0x005a7c04)
#define DAT_005a7c08 (*(int * *)0x005a7c08)
#define DAT_005a7c0c (*(uint *)0x005a7c0c)
#define DAT_005a7c10 (*(int * *)0x005a7c10)
#define DAT_005a7c14 (*(uint *)0x005a7c14)
#define DAT_005a7c18 (*(int * *)0x005a7c18)
#define DAT_005a7c1c (*(uint *)0x005a7c1c)
#define DAT_005a7c20 (*(int * *)0x005a7c20)
#define DAT_005a7c24 (*(uint *)0x005a7c24)
#define DAT_005a7c28 (*(int * *)0x005a7c28)
#define DAT_005a7c2c (*(uint *)0x005a7c2c)
#define DAT_005a7c30 (*(int * *)0x005a7c30)
#define DAT_005a7c34 (*(uint *)0x005a7c34)
#define DAT_005a7c38 (*(int * *)0x005a7c38)
#define DAT_005a7c54 (*(uint *)0x005a7c54)
#define DAT_005a7c58 (*(int * *)0x005a7c58)
#define DAT_005a7cd4 (*(uint *)0x005a7cd4)
#define DAT_005a7cd8 (*(int * *)0x005a7cd8)
#define DAT_005a7cfc (*(uint *)0x005a7cfc)
#define DAT_005a7d00 (*(int * *)0x005a7d00)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_004225a0 ((undefined4 (__thiscall *)(void *, void *, int))0x004225a0)
#define FUN_00446610 ((undefined4 (__fastcall *)(int *))0x00446610)
#define FUN_00451bc0 ((undefined4 (__fastcall *)(int))0x00451bc0)
#define FUN_00451bd0 ((undefined4 (__fastcall *)(int))0x00451bd0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00484e10 ((undefined4 (__fastcall *)(int))0x00484e10)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004bb100 ((undefined4 (__thiscall *)(void *, int))0x004bb100)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ecd20 ((undefined4 (__stdcall *)(int, undefined4))0x004ecd20)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)

#define LOM_SELF_00417930 1
void __fastcall rb_00417930(void *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  void *pvVar10;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = FUN_00484e10((int)param_1);
  if (iVar3 != 0) {
    return;
  }
  pvVar10 = (void *)((int)param_1 + 0x4848);
  piVar4 = (int *)FUN_004fbe60(pvVar10,0,0);
  if (piVar4 == (int *)0x0) {
LAB_0041798c:
    iVar3 = *(int *)((int)param_1 + 0x228a8);
    if ((iVar3 < 0) || (0xf < iVar3)) {
      local_4 = 0;
    }
    else {
      local_4 = (int)param_1 + iVar3 * 0x1d84 + 0x5068;
    }
    piVar4 = (int *)FUN_004fbe60(pvVar10,0,3);
    do {
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_004fbe60(pvVar10,0,2);
        if (piVar4 == (int *)0x0) {
          return;
        }
        while (iVar3 = FUN_00446610(piVar4), pvVar2 = DAT_005a7b78, iVar3 == 0) {
          piVar4 = (int *)FUN_004fbe60(pvVar10,(int)piVar4,2);
          if (piVar4 == (int *)0x0) {
            return;
          }
        }
        iVar3 = piVar4[10];
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
          iVar5 = *(int *)((int)pvVar2 + 0x50);
          *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
        }
        uVar7 = DAT_00579078;
        piVar4 = DAT_0057907c;
LAB_00417a86:
        FUN_004d09a0(DAT_005a7b78,uVar7,piVar4,-1);
        DAT_005aeef4 = 1;
        return;
      }
      iVar3 = FUN_00451bc0((int)piVar4);
      if ((0 < iVar3) &&
         (iVar3 = *(int *)((int)param_1 + 0x228a8), iVar5 = ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x3c)))(piVar4),
         pvVar2 = DAT_005a7b78, iVar5 == iVar3)) {
        if ((*(byte *)(local_4 + 0x15d8) & 2) == 0) {
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
            uVar7 = DAT_005a7c54;
            piVar4 = DAT_005a7c58;
          }
          else {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar2 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
            uVar7 = DAT_005a7c54;
            piVar4 = DAT_005a7c58;
          }
          goto LAB_00417a86;
        }
        FUN_00451bd0((int)piVar4);
      }
      piVar4 = (int *)FUN_004fbe60(pvVar10,(int)piVar4,3);
    } while( true );
  }
  do {
    if (((piVar4[0xc] & 0x40000U) != 0) && (piVar4[0x12] == *(int *)((int)param_1 + 0x228a8)))
    break;
    piVar4 = (int *)FUN_004fbe60(pvVar10,(int)piVar4,0);
  } while (piVar4 != (int *)0x0);
  if (piVar4 == (int *)0x0) goto LAB_0041798c;
  piVar4[0xc] = piVar4[0xc] & 0xfffbffff;
  DAT_005aeef4 = 1;
  iVar3 = FUN_004c1cf0((int)piVar4);
  if (iVar3 != 0) {
    return;
  }
  pvVar10 = (void *)((int)param_1 + 0x482c);
  iVar3 = FUN_004a8300(pvVar10,piVar4[0x152],0);
  uVar7 = FUN_00482ac0(param_1,iVar3,0);
  if (uVar7 == 0) {
    iVar3 = FUN_004a8300(pvVar10,piVar4[0x152],1);
    piVar9 = (int *)FUN_00482ac0(param_1,iVar3,1);
    if (piVar9 == (int *)0x0) {
      iVar3 = FUN_004a8300(pvVar10,piVar4[0x152],3);
      piVar9 = (int *)FUN_00482ac0(param_1,iVar3,3);
      if (piVar9 != (int *)0x0) {
        if ((piVar4[0xc] & 0x20000U) != 0) {
          iVar3 = piVar4[0x12];
          if ((-1 < iVar3) && (iVar3 < 0x10)) {
            pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
            goto LAB_00418d30;
          }
          goto LAB_00418d2e;
        }
        if (piVar4[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
          FUN_004d09a0(DAT_005a7b78,DAT_005a7cfc,DAT_005a7d00,0);
        }
        iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
        pvVar2 = DAT_005a7b78;
        if ((iVar3 == -1) && (DAT_005a7c0c != 0)) {
          iVar3 = piVar9[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar2);
            *(undefined4 *)((int)pvVar2 + 0x90) = 0;
            *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar10);
            *(undefined4 *)((int)pvVar10 + 0x90) = 0;
            *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
            FUN_004d09a0(DAT_005a7b78,DAT_005a7c0c,DAT_005a7c10,-2);
            return;
          }
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
          iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
          *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          FUN_004d09a0(DAT_005a7b78,DAT_005a7c0c,DAT_005a7c10,-2);
          return;
        }
        if (piVar9[0x11] == 0) {
          if (DAT_005a7c0c != 0) {
            iVar3 = piVar9[10];
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
              FUN_004d4550(pvVar2);
              *(undefined4 *)((int)pvVar2 + 0x90) = 0;
              *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
            }
            else {
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
              *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
            }
            pvVar10 = DAT_005a7b78;
            iVar3 = piVar4[10];
            if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
              FUN_00404ab0(DAT_005a7b78,3);
              FUN_004d09a0(DAT_005a7b78,DAT_005a7c0c,DAT_005a7c10,-2);
              return;
            }
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
            FUN_004d09a0(DAT_005a7b78,DAT_005a7c0c,DAT_005a7c10,-2);
            return;
          }
        }
        else {
          iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
          if (iVar3 != piVar4[0x12]) {
            uVar7 = FUN_00506100((int)piVar4);
            pvVar2 = DAT_005a7b78;
            if (uVar7 == 0) {
              if ((piVar4[0xc] & 0x10000U) != 0) {
                iVar3 = piVar4[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                }
                else {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar2 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar9[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                  goto LAB_0041875f;
                }
                goto LAB_00418758;
              }
              if ((piVar4[0xc] & 0x20000U) == 0) {
                if (*(int *)((int)param_1 + 0x228a8) !=
                    *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
                  return;
                }
                if (DAT_005a7c24 != 0) {
                  iVar3 = piVar4[10];
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar2);
                    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
                  }
                  else {
                    iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                    *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                    *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                  }
                  pvVar10 = DAT_005a7b78;
                  iVar3 = piVar9[10];
                  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                    FUN_004d4550(pvVar10);
                    *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                    *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                    FUN_004d09a0(DAT_005a7b78,DAT_005a7c24,DAT_005a7c28,-2);
                    return;
                  }
                  iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7c24,DAT_005a7c28,-2);
                  return;
                }
                goto LAB_004188d2;
              }
              iVar3 = piVar4[0x12];
              if ((-1 < iVar3) && (iVar3 < 0x10)) {
                pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
                goto LAB_00418d30;
              }
            }
            else {
              iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
              iVar3 = FUN_005071c0(piVar4,iVar3);
              pvVar10 = DAT_005a7b78;
              if (iVar3 != 0) {
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                  FUN_004d4550(pvVar10);
                  *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                  *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                }
                else {
                  iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
                  iVar3 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                  *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 1;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar4[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                  FUN_004d4550(pvVar10);
                  *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                  *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                }
                else {
                  iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar9[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
                  return;
                }
                goto LAB_004186d6;
              }
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                FUN_00404ab0(DAT_005a7b78,3);
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
                iVar3 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar4[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                FUN_00404ab0(DAT_005a7b78,3);
              }
              else {
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar9[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                FUN_00404ab0(DAT_005a7b78,3);
              }
              else {
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
              if ((piVar4[0xc] & 0x20000U) == 0) {
                return;
              }
              iVar3 = piVar4[0x12];
              if ((-1 < iVar3) && (iVar3 < 0x10)) {
                pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
                goto LAB_00418d30;
              }
            }
            goto LAB_00418d2e;
          }
          iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
          if (iVar3 == piVar4[0x12]) {
            iVar3 = FUN_004225a0(piVar4,piVar9,1);
            if (iVar3 != 0) {
              return;
            }
            goto LAB_004188c3;
          }
        }
      }
LAB_004188d2:
      iVar3 = FUN_004a8300(pvVar10,piVar4[0x152],2);
      piVar9 = (int *)FUN_00482ac0(param_1,iVar3,2);
      if (piVar9 == (int *)0x0) {
        return;
      }
      if ((piVar4[0xc] & 0x20000U) == 0) {
        if (piVar4[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
          FUN_004d09a0(DAT_005a7b78,DAT_005a7cfc,DAT_005a7d00,0);
        }
        iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
        if ((iVar3 == -1) ||
           (iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9), pvVar10 = DAT_005a7b78,
           iVar3 == piVar4[0x12])) {
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar9[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar10);
            *(undefined4 *)((int)pvVar10 + 0x90) = 0;
            *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
            goto LAB_00418e9b;
          }
        }
        else {
          if (piVar9[0x12] != 0) {
            uVar7 = FUN_00506100((int)piVar4);
            pvVar10 = DAT_005a7b78;
            if (uVar7 != 0) {
              iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
              iVar3 = FUN_005071c0(piVar4,iVar3);
              pvVar10 = DAT_005a7b78;
              if (iVar3 != 0) {
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                  FUN_004d4550(pvVar10);
                  *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                  *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                }
                else {
                  iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
                  iVar3 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                  *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 1;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar4[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                  FUN_004d4550(pvVar10);
                  *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                  *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                }
                else {
                  iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar9[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                  FUN_004d4550(pvVar10);
                  *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                  *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
                  return;
                }
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
                return;
              }
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
                iVar3 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
                *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar4[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar9[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
              if ((piVar4[0xc] & 0x20000U) == 0) {
                return;
              }
              iVar3 = piVar4[0x12];
              if ((iVar3 < 0) || (0xf < iVar3)) {
                pvVar10 = (void *)0x0;
              }
              else {
                pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
              }
              if (pvVar10 == (void *)0x0) {
                return;
              }
              FUN_004bb100(pvVar10,(int)piVar4);
              return;
            }
            if ((piVar4[0xc] & 0x10000U) != 0) {
              iVar3 = piVar4[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar9[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              FUN_004d09a0(DAT_005a7b78,*(uint *)((int)param_1 + 0x84),
                           *(int **)((int)param_1 + 0x88),-2);
              return;
            }
            if ((piVar4[0xc] & 0x20000U) == 0) {
              if (DAT_005a7c2c == 0) {
                return;
              }
              iVar3 = piVar4[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
              }
              else {
                iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar9[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
                FUN_004d4550(pvVar10);
                *(undefined4 *)((int)pvVar10 + 0x90) = 0;
                *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
                FUN_004d09a0(DAT_005a7b78,DAT_005a7c2c,DAT_005a7c30,-2);
                return;
              }
              iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
              iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
              *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
              *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
              *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              FUN_004d09a0(DAT_005a7b78,DAT_005a7c2c,DAT_005a7c30,-2);
              return;
            }
            iVar3 = piVar4[0x12];
            if ((-1 < iVar3) && (iVar3 < 0x10)) {
              pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
              goto LAB_00418d30;
            }
            goto LAB_00418d2e;
          }
          iVar3 = piVar9[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar10);
            *(undefined4 *)((int)pvVar10 + 0x90) = 0;
            *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
            goto LAB_00418e9b;
          }
        }
        pvVar10 = DAT_005a7b78;
        *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
        FUN_004d4550(pvVar10);
        *(undefined4 *)((int)pvVar10 + 0x90) = 0;
        *(undefined4 *)((int)pvVar10 + 0xa4) = 0;
LAB_00418e9b:
        FUN_004d09a0(DAT_005a7b78,DAT_005a7c04,DAT_005a7c08,-2);
        return;
      }
      iVar3 = piVar4[0x12];
      if ((-1 < iVar3) && (iVar3 < 0x10)) {
        pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
        goto LAB_00418d30;
      }
    }
    else {
      if (piVar4[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7cfc,DAT_005a7d00,0);
      }
      iVar5 = FUN_0050c7f0((int)piVar9);
      if (iVar5 != 0) {
        iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
        if (iVar3 < 0) {
          iVar3 = FUN_004225a0(piVar4,piVar9,1);
          if (iVar3 == 0) {
LAB_0041810d:
            if ((piVar4[0xc] & 0x20000U) != 0) {
              iVar3 = piVar4[0x12];
              if ((iVar3 < 0) || (0xf < iVar3)) {
                pvVar10 = (void *)0x0;
              }
              else {
                pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
              }
              if (pvVar10 != (void *)0x0) {
                FUN_004bb100(pvVar10,(int)piVar4);
                FUN_004176d0(piVar4,0);
                return;
              }
            }
LAB_004188c3:
            FUN_004176d0(piVar4,0);
            return;
          }
          *(byte *)(piVar9 + 0x11) =
               *(byte *)(piVar9 + 0x11) | '\x01' << ((byte)piVar4[0x12] & 0x1f);
          iVar3 = piVar9[0x16];
          if ((*(uint *)(iVar3 + 0x30) & 0x20000) == 0) {
            return;
          }
          iVar5 = *(int *)(iVar3 + 0x48);
          if ((-1 < iVar5) && (iVar5 < 0x10)) {
            pvVar10 = (void *)((int)param_1 + iVar5 * 0x1d84 + 0x5068);
            goto LAB_004180f9;
          }
        }
        else {
          iVar3 = ((undefined4 (__thiscall *)(__typeof__(piVar4)))(**(code **)(*piVar4 + 0x3c)))(piVar4);
          iVar5 = ((undefined4 (__thiscall *)(__typeof__(piVar9)))(**(code **)(*piVar9 + 0x3c)))(piVar9);
          pvVar10 = DAT_005a7b78;
          if (iVar3 == iVar5) {
            iVar3 = FUN_004225a0(piVar4,piVar9,1);
            if (iVar3 == 0) goto LAB_0041810d;
            iVar3 = piVar9[0x16];
            if (iVar3 == 0) {
              return;
            }
            if ((*(uint *)(iVar3 + 0x30) & 0x20000) == 0) {
              return;
            }
            iVar5 = *(int *)(iVar3 + 0x48);
            if ((-1 < iVar5) && (iVar5 < 0x10)) {
              pvVar10 = (void *)((int)param_1 + iVar5 * 0x1d84 + 0x5068);
              goto LAB_004180f9;
            }
          }
          else {
            if (piVar9[0x16] != 0) {
              if ((piVar4[0xc] & 0x10000U) != 0) {
                iVar3 = piVar4[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                }
                else {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar9[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                }
                else {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                FUN_004d09a0(DAT_005a7b78,*(uint *)((int)param_1 + 0x84),
                             *(int **)((int)param_1 + 0x88),-2);
                return;
              }
              if ((piVar4[0xc] & 0x20000U) == 0) {
                if (DAT_005a7c34 == 0) {
                  return;
                }
                iVar3 = piVar4[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                }
                else {
                  iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                  *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                  iVar5 = *(int *)((int)pvVar10 + 0x50);
                  *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                  *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                }
                pvVar10 = DAT_005a7b78;
                iVar3 = piVar9[10];
                if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                  FUN_00404ab0(DAT_005a7b78,3);
                  FUN_004d09a0(DAT_005a7b78,DAT_005a7c34,DAT_005a7c38,-2);
                  return;
                }
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
                FUN_004d09a0(DAT_005a7b78,DAT_005a7c34,DAT_005a7c38,-2);
                return;
              }
              iVar3 = piVar4[0x12];
              if ((-1 < iVar3) && (iVar3 < 0x10)) {
                pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
                goto LAB_00418d30;
              }
              goto LAB_00418d2e;
            }
            if (DAT_005a7c14 != 0) {
              iVar3 = piVar4[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                FUN_00404ab0(DAT_005a7b78,3);
              }
              else {
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              pvVar10 = DAT_005a7b78;
              iVar3 = piVar9[10];
              if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
                FUN_00404ab0(DAT_005a7b78,3);
              }
              else {
                iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
                *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
                iVar5 = *(int *)((int)pvVar10 + 0x50);
                *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
                *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
              }
              FUN_004d09a0(DAT_005a7b78,DAT_005a7c14,DAT_005a7c18,-2);
            }
            iVar3 = FUN_004225a0(piVar4,piVar9,0);
            if (iVar3 == 0) goto LAB_0041810d;
            *(byte *)(piVar9 + 0x11) =
                 *(byte *)(piVar9 + 0x11) | '\x01' << ((byte)piVar4[0x12] & 0x1f);
            iVar3 = piVar9[0x16];
            if (iVar3 == 0) {
              return;
            }
            if ((*(uint *)(iVar3 + 0x30) & 0x20000) == 0) {
              return;
            }
            iVar5 = *(int *)(iVar3 + 0x48);
            if ((-1 < iVar5) && (iVar5 < 0x10)) {
              pvVar10 = (void *)((int)param_1 + iVar5 * 0x1d84 + 0x5068);
              goto LAB_004180f9;
            }
          }
        }
        pvVar10 = (void *)0x0;
LAB_004180f9:
        if (pvVar10 == (void *)0x0) {
          return;
        }
        FUN_004bb100(pvVar10,iVar3);
        return;
      }
      *(byte *)(piVar9 + 0x11) = *(byte *)(piVar9 + 0x11) | '\x01' << ((byte)piVar4[0x12] & 0x1f);
      FUN_004ecd20((int)piVar4,iVar3);
      if ((piVar4[0xc] & 0x20000U) == 0) {
        return;
      }
      iVar3 = piVar4[0x12];
      if ((-1 < iVar3) && (iVar3 < 0x10)) {
        pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
        goto LAB_00418d30;
      }
    }
  }
  else {
    iVar3 = FUN_004c1cf0(uVar7);
    if ((iVar3 == 0) && (*(int *)(uVar7 + 0x48) != piVar4[0x12])) {
      if (piVar4[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
        FUN_004d09a0(DAT_005a7b78,DAT_005a7cfc,DAT_005a7d00,0);
      }
      uVar8 = FUN_00506100((int)piVar4);
      pvVar10 = DAT_005a7b78;
      if (uVar8 == 0) {
        if ((piVar4[0xc] & 0x10000U) != 0) {
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
          }
          else {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          uVar1 = *(undefined4 *)(uVar7 + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar3 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
            goto LAB_0041875f;
          }
LAB_00418758:
          FUN_00404ab0(DAT_005a7b78,3);
LAB_0041875f:
          FUN_004d09a0(DAT_005a7b78,*(uint *)((int)param_1 + 0x84),*(int **)((int)param_1 + 0x88),-2
                      );
          return;
        }
        if ((piVar4[0xc] & 0x20000U) == 0) {
          if (piVar4[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) {
            FUN_004d09a0(DAT_005a7b78,DAT_005a7cfc,DAT_005a7d00,0);
          }
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
          }
          else {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          uVar1 = *(undefined4 *)(uVar7 + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
            FUN_004d09a0(DAT_005a7b78,DAT_005a7c1c,DAT_005a7c20,-2);
            return;
          }
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar10 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
          FUN_004d09a0(DAT_005a7b78,DAT_005a7c1c,DAT_005a7c20,-2);
          return;
        }
        iVar3 = piVar4[0x12];
        if ((-1 < iVar3) && (iVar3 < 0x10)) {
          pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
          goto LAB_00418d30;
        }
      }
      else {
        iVar3 = FUN_005071c0(piVar4,*(int *)(uVar7 + 0x48));
        pvVar10 = DAT_005a7b78;
        if (iVar3 != 0) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
          }
          else {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar3 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 1;
          }
          pvVar10 = DAT_005a7b78;
          iVar3 = piVar4[10];
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            FUN_00404ab0(DAT_005a7b78,3);
          }
          else {
            iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
            iVar5 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
            *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
          }
          pvVar10 = DAT_005a7b78;
          uVar1 = *(undefined4 *)(uVar7 + 0x28);
          if (*(int *)((int)DAT_005a7b78 + 0x54) != 0) {
            iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
            iVar3 = *(int *)((int)pvVar10 + 0x50);
            *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
            *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
            FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
            return;
          }
LAB_004186d6:
          FUN_00404ab0(DAT_005a7b78,3);
          FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
          return;
        }
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar10 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
        }
        pvVar10 = DAT_005a7b78;
        iVar3 = piVar4[10];
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
          iVar5 = *(int *)((int)pvVar10 + 0x50);
          *(undefined4 *)(iVar5 + iVar6 * 8) = 1;
          *(int *)(iVar5 + 4 + iVar6 * 8) = iVar3;
        }
        pvVar10 = DAT_005a7b78;
        uVar1 = *(undefined4 *)(uVar7 + 0x28);
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          FUN_00404ab0(DAT_005a7b78,3);
        }
        else {
          iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
          iVar3 = *(int *)((int)pvVar10 + 0x50);
          *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
          *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7cd4,DAT_005a7cd8,-3);
        if ((piVar4[0xc] & 0x20000U) == 0) {
          return;
        }
        iVar3 = piVar4[0x12];
        if ((-1 < iVar3) && (iVar3 < 0x10)) {
          pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
          goto LAB_00418d30;
        }
      }
    }
    else {
      if ((piVar4[0xc] & 0x20000U) == 0) {
        return;
      }
      iVar3 = piVar4[0x12];
      if ((-1 < iVar3) && (iVar3 < 0x10)) {
        pvVar10 = (void *)((int)param_1 + iVar3 * 0x1d84 + 0x5068);
        goto LAB_00418d30;
      }
    }
  }
LAB_00418d2e:
  pvVar10 = (void *)0x0;
LAB_00418d30:
  if (pvVar10 == (void *)0x0) {
    return;
  }
  FUN_004bb100(pvVar10,(int)piVar4);
  return;
#undef local_4
}
