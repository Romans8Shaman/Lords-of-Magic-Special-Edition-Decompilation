/* Rebuilt from lomse.exe FUN_0041b6d0 @ 0x0041b6d0 (1642 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7cf4 (*(uint *)0x005a7cf4)
#define DAT_005a7cf8 (*(int * *)0x005a7cf8)
#define DAT_005a7d2c (*(uint *)0x005a7d2c)
#define DAT_005a7d30 (*(int * *)0x005a7d30)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae950 (*(int * *)0x005ae950)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_0040eb70 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x0040eb70)
#define FUN_004102e0 ((int (__thiscall *)(void *, int *))0x004102e0)
#define FUN_00415610 ((undefined4 (__thiscall *)(void *, int))0x00415610)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_0041b670 ((undefined4 (__fastcall *)(int))0x0041b670)
#define FUN_0041dc40 ((undefined4 (__fastcall *)(int))0x0041dc40)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00427950 ((undefined4 (__thiscall *)(void *, int *))0x00427950)
#define FUN_004285d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x004285d0)
#define FUN_0044bdd0 ((undefined4 (__thiscall *)(void *, undefined4))0x0044bdd0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004bfd40 ((undefined4 (__thiscall *)(void *, int *))0x004bfd40)
#define FUN_004c24e0 ((undefined4 (__fastcall *)(int))0x004c24e0)
#define FUN_004c2a70 ((undefined4 (__fastcall *)(int))0x004c2a70)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00526300 ((undefined4 (__cdecl *)(int))0x00526300)
#define FUN_005270c0 ((int (__thiscall *)(void *, uint, int))0x005270c0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00528320 ((undefined4 (__thiscall *)(void *, int))0x00528320)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)

#define LOM_SELF_0041b6d0 1
undefined4 __fastcall rb_0041b6d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int *piVar7;
  int iVar8;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_aiStack_14[5];
#define local_28 (*(_t_local_28 *)(_fr + 0x0))
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define aiStack_14 (*(_t_aiStack_14 *)(_fr + 0x14))
  
  local_28 = 0;
  if (0 < param_1[0x13]) {
    do {
      FUN_0052b090(param_1 + local_28 * 0x13 + 0x31,5,0);
      uVar1 = FUN_005291e0((int)(param_1 + local_28 * 0x13 + 0x31));
      if (uVar1 == 0) {
        if (param_1[local_28 * 0x13 + 0x32] < 1) {
          param_1[local_28 * 0x13 + 0x32] = 1;
        }
      }
      else {
        iVar8 = 0;
        if (0 < *(int *)(uVar1 + 0x44)) {
          piVar7 = (int *)(uVar1 + 0x14);
          do {
            if (*piVar7 < 1) {
              *piVar7 = 1;
            }
            iVar8 = iVar8 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar8 < *(int *)(uVar1 + 0x44));
        }
      }
      local_28 = local_28 + 1;
    } while (local_28 < param_1[0x13]);
  }
  local_28 = 0;
  if (0 < param_1[0x13]) {
    do {
      iVar8 = param_1[local_28 * 0x13 + 0x31];
      if (((iVar8 < 0) || (DAT_005cd2f0 <= iVar8)) || (DAT_005cd2f4 == 0)) {
        iVar8 = 0;
      }
      else {
        iVar8 = DAT_005cd2f4 + iVar8 * 1000;
      }
      if ((*(uint *)(iVar8 + 0x14) & 0x400) != 0) {
        param_1[local_28 * 0x13 + 0x3a] = param_1[local_28 * 0x13 + 0x3a] | 0x200000;
      }
      if ((*(uint *)(iVar8 + 0x14) & 0x400000) != 0) {
        param_1[local_28 * 0x13 + 0x3a] = param_1[local_28 * 0x13 + 0x3a] | 0x400000;
      }
      if ((*(uint *)(iVar8 + 0x14) & 0x800000) != 0) {
        param_1[local_28 * 0x13 + 0x3a] = param_1[local_28 * 0x13 + 0x3a] | 0x800000;
      }
      param_1[local_28 * 0x13 + 0x3a] = param_1[local_28 * 0x13 + 0x3a] | 8;
      param_1[local_28 * 0x13 + 0x43] = -1;
      local_20 = 0;
      FUN_00527e90(param_1 + local_28 * 0x13 + 0x31,0x2e,&local_20);
      local_24 = 0;
      local_18 = 0;
      if (param_1[local_28 * 0x13 + 0x34] == local_20) {
        FUN_00527e90(param_1 + local_28 * 0x13 + 0x31,0x3d,&local_24);
        if ((param_1[0xc] & 0x1c00000U) != 0) {
          FUN_00527e90(param_1 + local_28 * 0x13 + 0x31,0x3f,&local_18);
        }
        local_24 = local_24 + local_18;
      }
      else {
        FUN_00527e90(param_1 + local_28 * 0x13 + 0x31,0x3e,&local_24);
      }
      if ((0 < local_24) &&
         (iVar8 = FUN_00528320(param_1 + local_28 * 0x13 + 0x31,local_24), pvVar4 = DAT_005a7b78,
         iVar8 != 0)) {
        iVar8 = param_1[10];
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
        else {
          iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
          iVar3 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar3 + iVar2 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar2 * 8) = iVar8;
        }
        pvVar4 = DAT_005a7b78;
        if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
          *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
          FUN_004d4550(pvVar4);
          *(undefined4 *)((int)pvVar4 + 0x90) = 0;
          *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
        }
        else {
          iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
          *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
          iVar8 = *(int *)((int)pvVar4 + 0x50);
          *(undefined4 *)(iVar8 + iVar3 * 8) = 1;
          *(int *)(iVar8 + 4 + iVar3 * 8) = local_28;
        }
        FUN_004d09a0(DAT_005a7b78,DAT_005a7cf4,DAT_005a7cf8,-2);
      }
      param_1[local_28 * 0x13 + 0x34] = local_20;
      pvVar4 = (void *)FUN_00529180(param_1 + local_28 * 0x13 + 0x31);
      if (pvVar4 != (void *)0x0) {
        local_1c = 0;
        FUN_00527e90(param_1 + local_28 * 0x13 + 0x31,0x48,&local_1c);
        if (local_1c < 0) {
          local_1c = 0;
        }
        FUN_0044bdd0(pvVar4,local_1c);
      }
      FUN_005270c0(param_1 + local_28 * 0x13 + 0x31,0x20000,-1);
      local_28 = local_28 + 1;
    } while (local_28 < param_1[0x13]);
  }
  iVar8 = FUN_00420560((int)param_1);
  if (((iVar8 != 0) && ((*(byte *)(param_1 + 0xc) & 0x20) != 0)) &&
     ((param_1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) &&
      (iVar8 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), param_1[10] == iVar8)))) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
  }
  FUN_00526300((int)param_1);
  local_28 = 0;
  if (0 < param_1[0x13]) {
    do {
      FUN_004285d0(param_1 + local_28 * 0x13 + 0x31,param_1[10],local_28);
      local_28 = local_28 + 1;
    } while (local_28 < param_1[0x13]);
  }
  uVar1 = param_1[0xc];
  if ((uVar1 & 0x1c00000) == 0) {
    iVar8 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
    if ((iVar8 < 0) || (0xf < iVar8)) {
      puVar6 = (undefined *)0x0;
    }
    else {
      puVar6 = &DAT_005af194 + iVar8 * 0x1d84;
    }
    if (puVar6 != (undefined *)0x0) {
      iVar8 = ((undefined4 (__thiscall *)(__typeof__(param_1), __typeof__(aiStack_14)))(**(code **)(*param_1 + 0x40)))(param_1,aiStack_14);
      if (iVar8 != 0) {
        FUN_004bfd40(puVar6,aiStack_14);
      }
      if ((puVar6[0x15d8] & 2) != 0) {
        uVar1 = param_1[0xc];
        goto LAB_0041bb50;
      }
      if (param_1[0x14e] < 0) goto LAB_0041bb55;
      uVar1 = param_1[0xc] | 8;
      goto LAB_0041bb52;
    }
  }
  else {
LAB_0041bb50:
    uVar1 = uVar1 & 0xfffffff7;
LAB_0041bb52:
    param_1[0xc] = uVar1;
  }
LAB_0041bb55:
  FUN_004c24e0((int)param_1);
  iVar8 = FUN_00420580((int)param_1);
  if (iVar8 == 0) {
    FUN_004c2a70((int)param_1);
  }
  DAT_005ae950 = param_1;
  FUN_004d09a0(DAT_005a7b78,DAT_005a7d2c,DAT_005a7d30,0);
  pvVar4 = (void *)FUN_004102e0(param_1,&local_28);
  if (pvVar4 != (void *)0x0) {
    FUN_0040eb70(pvVar4,DAT_005a7b78,(int)param_1,local_28);
  }
  if (((*(byte *)(param_1 + 0xc) & 2) == 0) && (-1 < param_1[0x153])) {
    puVar5 = FUN_00485080(&DAT_005aa12c,param_1[0x153],0x2f);
    if (puVar5 == (undefined4 *)0x0) {
      iVar8 = FUN_004f6000(&DAT_005ae974,param_1[0x153]);
      if (iVar8 == 0) {
LAB_0041bc33:
        FUN_004176d0(param_1,0);
        FUN_0041dc40((int)param_1);
        return 1;
      }
      if (*(int *)(iVar8 + 0x1c) != param_1[0x152]) {
        FUN_004176d0(param_1,0);
        FUN_0041dc40((int)param_1);
        return 1;
      }
    }
    else {
      if ((puVar5[0x12] == param_1[0x12]) && (iVar8 = FUN_00415610(param_1,(int)puVar5), iVar8 == 0)
         ) goto LAB_0041bc33;
      if ((puVar5[7] != param_1[0x152]) &&
         (((param_1[0xc] & 0x40U) != 0 && ((param_1[0xc] & 0x100000U) == 0)))) {
        if (-1 < param_1[0x14e]) {
          FUN_00427950(&DAT_005aeefc,param_1 + 0x14e);
        }
        iVar8 = FUN_0041b670((int)param_1);
        if (iVar8 == 0) {
          puVar5[0xc] = puVar5[0xc] | 2;
        }
        else {
          iVar8 = ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x3c)))(param_1);
          if ((iVar8 < 0) || (0xf < iVar8)) {
            puVar6 = (undefined *)0x0;
          }
          else {
            puVar6 = &DAT_005af194 + iVar8 * 0x1d84;
          }
          if ((puVar6 == (undefined *)0x0) || ((puVar6[0x15d8] & 2) != 0)) {
            FUN_00420b80(param_1,puVar5[7],param_1[0xc] & 0x3bc0c8,0xffffffff,param_1[0x153],
                         param_1[0x154],0);
            FUN_0041dc40((int)param_1);
            return 1;
          }
        }
      }
    }
  }
  FUN_0041dc40((int)param_1);
  return 1;
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef aiStack_14
}
