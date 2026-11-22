/* Rebuilt from lomse.exe FUN_00405440 @ 0x00405440 (859 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7c5c (*(uint *)0x005a7c5c)
#define DAT_005a7c60 (*(int * *)0x005a7c60)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004057d0 ((int (__stdcall *)(int, void *, int))0x004057d0)
#define FUN_004058e0 ((undefined4 (__thiscall *)(void *, int))0x004058e0)
#define FUN_00411ba0 ((undefined4 (__thiscall *)(void *, int * *))0x00411ba0)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00417800 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x00417800)
#define FUN_0041cdf0 ((undefined4 (__thiscall *)(void *, int *))0x0041cdf0)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004c2330 ((int (__fastcall *)(int))0x004c2330)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f20e0 ((undefined4 (__fastcall *)(int *))0x004f20e0)
#define FUN_00506100 ((uint (__fastcall *)(int))0x00506100)
#define FUN_005070a0 ((undefined4 (__fastcall *)(void *))0x005070a0)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)

#define LOM_SELF_00405440 1
undefined4 __thiscall rb_00405440(void *this,int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  
  this_00 = FUN_00485080(this,*param_1,0x2f);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  if ((this_00[0xc] & 0x1c00000U) != 0) {
    FUN_004245a0(this_00);
    if (param_1[1] == 0x16) {
      if (*(int *)((int)param_1 + 0x1d) == *param_1) {
        *(int *)((int)param_1 + 0x1d) = this_00[10];
      }
      if (*(int *)((int)param_1 + 0x35) == *param_1) {
        *(int *)((int)param_1 + 0x35) = this_00[10];
      }
    }
    *param_1 = this_00[10];
  }
  iVar3 = FUN_00420580((int)this_00);
  if (iVar3 == 0) {
    FUN_004176d0(this_00,0);
  }
  else {
    uVar4 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]);
    iVar3 = 0;
    if ((uVar4 != 0) && (iVar3 = DAT_005a7d8c * 0x400, (&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3))
    {
      if ((param_1[1] == 0x11) &&
         (iVar5 = FUN_004c2330((int)this_00), iVar3 = 0, 0 < iVar5)) {
        this_00[0x173] = 0xffff;
        this_00[0xc] = this_00[0xc] | 0x20000000;
        this_00[0x175] = 0;
        FUN_005070a0(this_00);
        iVar3 = 0;
      }
      iVar5 = this_00[0x1a];
      if (iVar5 == 0x18) {
        return 0;
      }
      if ((param_1[1] != 0x18) && ((iVar5 == 0x11 || (iVar5 == 0x32)))) {
        return 0;
      }
    }
    FUN_00417800((int)this_00,iVar3,param_1);
    if (-1 < param_1[3]) {
      this_00[0x152] = param_1[3];
    }
  }
  uVar4 = this_00[0xc];
  uVar6 = uVar4 & 0xffffff7d;
  this_00[0xc] = uVar6;
  switch(param_1[1]) {
  case 6:
    uVar4 = FUN_00506100((int)this_00);
    if (uVar4 == 0) {
      this_00[0x173] = 0xffff;
      this_00[0x175] = 0;
      this_00[0xc] = this_00[0xc] | 0x20000000;
    }
    FUN_005070a0(this_00);
    puVar8 = FUN_00485080(this,param_1[2],0x2f);
    if (((puVar8 != (undefined4 *)0x0) && (iVar3 = FUN_005071c0(this_00,puVar8[0x12]), iVar3 != 0))
       && (iVar3 = FUN_004a8960(&DAT_005ae958,this_00[7],puVar8[7]), iVar3 < 5)) {
      *(undefined1 *)((int)this_00 + 0x79) = 1;
    }
    break;
  case 0x14:
    this_00[0xc] = uVar6 | 0x800;
    FUN_004176d0(this_00,0);
    return 1;
  case 0x16:
    iVar3 = FUN_00420560((int)this_00);
    if (iVar3 != 0) {
      piVar1 = (int *)((int)param_1 + 0x11);
      iVar3 = FUN_0041cdf0(this_00,piVar1);
      if (iVar3 == 0) {
        return 1;
      }
      FUN_00411ba0(this_00,*(int ***)((int)param_1 + 0x39));
      piVar10 = piVar1;
      piVar11 = this_00 + 0x21;
      for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar11 = *piVar10;
        piVar10 = piVar10 + 1;
        piVar11 = piVar11 + 1;
      }
      iVar3 = FUN_004f20e0(piVar1);
      if (iVar3 == 0) {
        ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x2c)))(this_00);
        return 1;
      }
      return 1;
    }
    break;
  case 0x17:
    if ((this_00[0x3a] & 0x200000U) == 0) {
      return 1;
    }
    this_00[0x3a] = this_00[0x3a] & 0xffdfffff;
    this_00[0xc] = uVar6 | 0x2000000;
    FUN_0041efa0(this_00,0xd);
    pvVar2 = DAT_005a7b78;
    iVar3 = this_00[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar7 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar7;
      *(undefined4 *)(iVar5 + iVar7 * 8) = 1;
      *(int *)(iVar5 + 4 + iVar7 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7c5c,DAT_005a7c60,-1);
    return 1;
  case 0x19:
    uVar4 = FUN_0047c9e0(&DAT_005aa12c,this_00[0x12]);
    if (uVar4 != 0) {
      puVar8 = FUN_00485080(this,param_1[2],0x2f);
      if ((puVar8 != (undefined4 *)0x0) && ((*(byte *)(puVar8 + 0x1e) & 0x10) != 0)) {
        puVar8 = (undefined4 *)FUN_004057d0((int)param_1,this_00,(int)puVar8);
      }
      *(byte *)(puVar8 + 0x1e) = *(byte *)(puVar8 + 0x1e) | 0x10;
    }
    break;
  case 0x1a:
    if ((uVar4 & 0x20000000) == 0) {
      this_00[0xc] = uVar6 | 0x20000000;
      this_00[0x173] = 0xffff;
      this_00[0x175] = 0;
      FUN_005070a0(this_00);
      return 1;
    }
    this_00[0x173] = 0;
    this_00[0xc] = uVar4 & 0xdfffff7d;
    return 1;
  }
  this_00[0xc] = this_00[0xc] & 0xfffbbfff;
  uVar9 = FUN_004058e0(this_00 + 0x1a,(int)param_1);
  return uVar9;
}
