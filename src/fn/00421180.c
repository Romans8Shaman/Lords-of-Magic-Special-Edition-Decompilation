/* Rebuilt from lomse.exe FUN_00421180 @ 0x00421180 (1039 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005557e4 (*(int *)0x005557e4)
#define DAT_00555828 (*(undefined *)0x00555828)
#define DAT_00555848 (*(undefined *)0x00555848)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a9ddc (*(undefined4 *)0x005a9ddc)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005aea30 (*(undefined4 *)0x005aea30)
#define DAT_005aeeb0 (*(undefined *)0x005aeeb0)
#define DAT_005aeec0 (*(undefined *)0x005aeec0)
#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define DAT_005d1e84 (*(void * *)0x005d1e84)
#define FUN_004087b0 ((undefined4 (__stdcall *)(void *))0x004087b0)
#define FUN_0040d770 ((undefined4 (__thiscall *)(void *, void *, undefined4))0x0040d770)
#define FUN_0040e250 ((undefined4 (__thiscall *)(void *, void *, int))0x0040e250)
#define FUN_00411b50 ((undefined4 (__thiscall *)(void *, uint))0x00411b50)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_00418f70 ((undefined4 (__thiscall *)(void *, void *, uint))0x00418f70)
#define FUN_00419520 ((undefined4 (__thiscall *)(void *, uint))0x00419520)
#define FUN_0041ae90 ((undefined4 (__fastcall *)(int))0x0041ae90)
#define FUN_0041ebb0 ((undefined4 (__thiscall *)(void *, uint))0x0041ebb0)
#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_004209c0 ((undefined4 (__fastcall *)(int))0x004209c0)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004a6700 ((undefined4 (__thiscall *)(void *, float *, int, int, int))0x004a6700)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004b02c0 ((undefined4 (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b78c0 ((int (__fastcall *)(void *))0x004b78c0)
#define FUN_004ba8d0 ((undefined4 (__thiscall *)(void *, int))0x004ba8d0)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)
#define FUN_004c2450 ((undefined4 (__fastcall *)(int))0x004c2450)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_005070d0 ((undefined4 (__fastcall *)(void *))0x005070d0)
#define FUN_00508f10 ((undefined4 (__thiscall *)(void *, int))0x00508f10)
#define FUN_0052d160 ((undefined4 (__fastcall *)(int))0x0052d160)
#define FUN_0052ff40 ((undefined4 (__thiscall *)(void *, void *))0x0052ff40)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00421180 1
void __fastcall rb_00421180(int *param_1)

{
  float fVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  uchar _fr[0x60] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_58;
  typedef float _t_local_54;
  typedef float _t_local_50;
  typedef float _t_local_2c;
  typedef float _t_local_28;
  typedef float _t_local_24;
#define local_58 (*(_t_local_58 *)(_fr + 0x0))
#define local_54 (*(_t_local_54 *)(_fr + 0x4))
#define local_50 (*(_t_local_50 *)(_fr + 0x8))
#define local_2c (*(_t_local_2c *)(_fr + 0x2c))
#define local_28 (*(_t_local_28 *)(_fr + 0x30))
#define local_24 (*(_t_local_24 *)(_fr + 0x34))
  
  iVar4 = param_1[0x11];
  iVar5 = param_1[7];
  puVar2 = FUN_004c6fc0();
  uVar8 = *(uint *)(*(int *)(puVar2 + 0x18) + (iVar4 + iVar5 * 8) * 4);
  if ((param_1[0xc] & 0x4000U) != 0) {
    uVar3 = FUN_004c5e60(&DAT_005aef04,param_1[7]);
    iVar4 = FUN_004c5ec0(&DAT_005aef04,uVar3);
    uVar3 = FUN_004c5e60(&DAT_005aef04,uVar8);
    iVar5 = FUN_004c5ec0(&DAT_005aef04,uVar3);
    if (iVar4 != iVar5) {
      FUN_004176d0(param_1,0);
      param_1[0xc] = param_1[0xc] | 0x1000;
      return;
    }
  }
  iVar4 = param_1[10];
  iVar5 = FUN_00418f70(&DAT_005aa12c,param_1,uVar8);
  if (iVar5 != 0) {
    piVar6 = FUN_00485080(&DAT_005aa12c,iVar4,0x2f);
    if (piVar6 == param_1) {
      FUN_00419520(param_1,uVar8);
      return;
    }
    return;
  }
  iVar4 = param_1[7];
  piVar6 = param_1;
  puVar2 = FUN_004c6fc0();
  FUN_004a6dd0(puVar2,piVar6,iVar4,uVar8);
  FUN_004ba8d0(&DAT_005a9ddc,(int)param_1);
  FUN_005070d0(param_1);
  FUN_0052ff40(&DAT_005a7d90 + DAT_005a7d8c * 0x400,param_1);
  iVar4 = FUN_00420580((int)param_1);
  if (iVar4 == 0) {
    FUN_0040d770(&DAT_005aeeb0,DAT_005a7b78,param_1[10]);
    FUN_0040e250(&DAT_005aeec0,DAT_005a7b78,param_1[10]);
  }
  else {
    FUN_004087b0(param_1);
  }
  iVar4 = param_1[7];
  param_1[0x14f] = 0;
  puVar2 = FUN_004c6fc0();
  iVar4 = iVar4 % *(int *)(puVar2 + 0x6c);
  iVar5 = param_1[7];
  puVar2 = FUN_004c6fc0();
  iVar5 = iVar5 / *(int *)(puVar2 + 0x6c);
  iVar9 = *(int *)(&DAT_00555848 + param_1[0x11] * 4) + iVar5;
  iVar10 = *(int *)(&DAT_00555828 + param_1[0x11] * 4) + iVar4;
  iVar7 = FUN_00420580((int)param_1);
  if (iVar7 == 0) {
    pfVar12 = &local_58;
    puVar2 = FUN_004c6fc0();
    FUN_004a6600(puVar2,pfVar12,iVar10,iVar9);
    pfVar12 = &local_2c;
    puVar2 = FUN_004c6fc0();
    FUN_004a6600(puVar2,pfVar12,iVar4,iVar5);
  }
  else {
    pfVar12 = &local_58;
    piVar6 = param_1;
    puVar2 = FUN_004c6fc0();
    FUN_004a6700(puVar2,pfVar12,iVar10,iVar9,(int)piVar6);
    pfVar12 = &local_2c;
    piVar6 = param_1;
    puVar2 = FUN_004c6fc0();
    FUN_004a6700(puVar2,pfVar12,iVar4,iVar5,(int)piVar6);
  }
  FUN_0041ebb0(param_1,0);
  uVar8 = FUN_0047d680(0);
  FUN_004b02c0(param_1 + 0x157,uVar8);
  FUN_00411b50(param_1,0);
  param_1[0x151] = 0;
  if (DAT_005d1e84 == (void *)0x0) {
    iVar4 = 1;
  }
  else {
    iVar4 = FUN_004b78c0(DAT_005d1e84);
  }
  if (((iVar4 != 1) || (iVar4 = FUN_00420560((int)param_1), iVar4 == 0)) ||
     (iVar4 = FUN_00420490((int)param_1), iVar4 != 0)) {
    iVar4 = FUN_004209c0((int)param_1);
    lVar11 = __ftol((float10)iVar4 *
                    (float10)SQRT((local_50 - local_24) * (local_50 - local_24) +
                                  (local_54 - local_28) * (local_54 - local_28) +
                                  (local_58 - local_2c) * (local_58 - local_2c)));
    param_1[0x150] = (int)lVar11;
    if (0 < (int)lVar11) goto LAB_00421440;
  }
  param_1[0x150] = 1;
LAB_00421440:
  iVar4 = FUN_004c1cf0((int)param_1);
  if ((iVar4 != 0) && (iVar4 = FUN_00420580((int)param_1), iVar4 == 0)) {
    uVar8 = FUN_00482ac0(&DAT_005aa12c,param_1[0x16c],0);
    if (uVar8 == 0) {
      FUN_004c2450((int)param_1);
      FUN_004176d0(param_1,0);
      return;
    }
    param_1[0x14f] = *(int *)(uVar8 + 0x53c);
    param_1[0x150] = *(int *)(uVar8 + 0x540);
  }
  fVar1 = (float)param_1[0x169] + (float)param_1[0x16a];
  param_1[0x16a] = __BC(int, fVar1);
  param_1[0xc] = param_1[0xc] | 0x10;
  if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)param_1[0x167])) && (float)param_1[0x167] <= fVar1) {
    if ((!__LOM_ISNAN(fVar1) && !__LOM_ISNAN((float)param_1[0x168])) && (float)param_1[0x168] < fVar1) {
      param_1[0x16a] = param_1[0x168];
    }
  }
  else {
    param_1[0x16a] = param_1[0x167];
  }
  if (param_1[0x14e] < 0) {
    FUN_0041ae90((int)param_1);
  }
  ((undefined4 (__thiscall *)(__typeof__(param_1)))(**(code **)(*param_1 + 0x1c)))(param_1);
  iVar4 = FUN_00420560((int)param_1);
  if (((iVar4 != 0) && ((*(byte *)(param_1 + 0xc) & 0x20) != 0)) &&
     ((param_1[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400) &&
      (((iVar4 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)), param_1[10] == iVar4 &&
        (iVar4 = FUN_00508f10(&DAT_005aea30,(int)*(short *)(DAT_005ae9ac + param_1[7] * 8)),
        iVar4 != DAT_005557e4)) && (DAT_005a7be4 != 0)))))) {
    FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    DAT_005557e4 = iVar4;
  }
  return;
#undef local_58
#undef local_54
#undef local_50
#undef local_2c
#undef local_28
#undef local_24
}
