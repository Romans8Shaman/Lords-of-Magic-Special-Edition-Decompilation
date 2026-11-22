/* Rebuilt from lomse.exe FUN_004f20e0 @ 0x004f20e0 (908 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584ca0 (*(int *)0x00584ca0)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d74 (*(uint *)0x005a7d74)
#define DAT_005a7d78 (*(int * *)0x005a7d78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadb0 (*(int *)0x005aadb0)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005ccffc (*(undefined *)0x005ccffc)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_0044bdb0 ((undefined4 (__thiscall *)(void *, int))0x0044bdb0)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a1950 ((undefined4 (__thiscall *)(void *, int, int))0x004a1950)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004ef5b0 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x004ef5b0)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f1df0 ((int (__fastcall *)(int))0x004f1df0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_00506140 ((undefined4 (__fastcall *)(int))0x00506140)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_004f20e0 1
undefined4 __fastcall rb_004f20e0(int *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  undefined4 *this;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 unused_reg_1;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  piVar4 = (int *)FUN_004f1df0((int)param_1);
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((this == (undefined4 *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  iVar5 = param_1[10];
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  this[iVar5 * 0x13 + 0x3a] = this[iVar5 * 0x13 + 0x3a] | 8;
  this[iVar5 * 0x13 + 0x43] = 0xffffffff;
  local_4 = (void *)FUN_00529180(this + iVar5 * 0x13 + 0x31);
  if (piVar4 == (int *)0x0) {
    if (local_4 == (void *)0x0) {
      return 0;
    }
    FUN_0044bdb0(local_4,*(int *)(iVar3 + 0x18));
  }
  else {
    iVar5 = FUN_00427b80(*piVar4);
    if ((*(uint *)(iVar5 + 0x18) & 0x80000) != 0) {
      if (piVar4[1] < 1) {
        return 0;
      }
      piVar4[1] = piVar4[1] + -1;
    }
    iVar5 = FUN_00427b80(*piVar4);
    if ((*(uint *)(iVar5 + 0x18) & 0x60000) != 0) {
      iVar5 = *(int *)(iVar3 + 0x18) - piVar4[2];
      if (iVar5 < 1) {
        piVar4[2] = piVar4[2] - *(int *)(iVar3 + 0x18);
      }
      else {
        iVar8 = FUN_00427b80(*piVar4);
        if ((*(uint *)(iVar8 + 0x18) & 0x20000) == 0) {
          return 0;
        }
        if (local_4 == (void *)0x0) {
          return 0;
        }
        FUN_0044bdb0(local_4,iVar5);
        piVar4[2] = 0;
      }
    }
  }
  iVar5 = FUN_00420560((int)this);
  if (iVar5 != 0) {
    puVar6 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    iVar5 = param_1[6];
    if (-1 < iVar5) {
      if (puVar6 != (undefined4 *)0x0) {
        iVar8 = param_1[5];
        if (((iVar8 < 0) || ((int)puVar6[0x13] <= iVar8)) || (puVar6[(iVar8 + 3) * 0x13] != iVar5))
        {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) goto LAB_004f2272;
      }
      puVar6 = FUN_0044c0c0(iVar5,(int *)&local_4);
      if (puVar6 != (undefined4 *)0x0) {
        param_1[3] = puVar6[10];
        param_1[5] = (int)local_4;
      }
    }
LAB_004f2272:
    iVar5 = this[7];
    if (param_1[1] < 0) {
      if ((puVar6 == (undefined4 *)0x0) &&
         ((uVar7 = FUN_004f6000(&DAT_005ae974,param_1[4]), uVar7 != 0 ||
          (uVar7 = FUN_00482ac0(&DAT_005aa12c,param_1[2],3), uVar7 != 0)))) {
        iVar5 = *(int *)(uVar7 + 0x1c);
      }
    }
    else {
      iVar5 = param_1[1];
    }
    if ((iVar5 != this[7]) &&
       (iVar5 = FUN_004a8b50(&DAT_005ae958,this[7],param_1[1]), this[0x11] != iVar5)) {
      this[0x11] = iVar5;
      FUN_004193e0(this,iVar5);
    }
  }
  this[0x18] = *(undefined4 *)(iVar3 + 0x1c);
  FUN_0041efa0(this,*(uint *)(iVar3 + 0x24));
  iVar3 = FUN_00420580((int)this);
  if (iVar3 == 0) {
    if (0 < (int)this[0x18]) {
      FUN_004ef5b0(0x5ccff4,unused_reg_1,param_1);
    }
    goto LAB_004f2418;
  }
  if (this[0x12] == DAT_005aa7d4) {
    iVar3 = *param_1;
    iVar5 = 0;
LAB_004f2314:
    FUN_004a1950(&DAT_005ccffc,iVar5,iVar3);
  }
  else if (this[0x12] == DAT_005aadb0) {
    iVar3 = *param_1;
    iVar5 = 1;
    goto LAB_004f2314;
  }
  FUN_00506140((int)this);
  puVar6 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
  if ((puVar6 != (undefined4 *)0x0) && (puVar6[0x12] != this[0x12])) {
    *(byte *)(this + 0x1e) = *(byte *)(this + 0x1e) | 1;
    *(byte *)(puVar6 + 0x1e) = *(byte *)(puVar6 + 0x1e) | 0x14;
  }
  pvVar2 = DAT_005a7b78;
  if (DAT_005577c8 == this[0x12]) {
    uVar1 = this[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar3 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar1;
    }
    pvVar2 = DAT_005a7b78;
    iVar3 = *param_1;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar8 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar8;
      *(undefined4 *)(iVar5 + iVar8 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar8 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d74,DAT_005a7d78,-2);
  }
LAB_004f2418:
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
  }
  return 1;
#undef local_4
}
