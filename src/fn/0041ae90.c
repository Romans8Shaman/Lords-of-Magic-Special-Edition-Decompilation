/* Rebuilt from lomse.exe FUN_0041ae90 @ 0x0041ae90 (639 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_0041ae30 ((float10 (__fastcall *)(int))0x0041ae30)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004a6700 ((undefined4 (__thiscall *)(void *, float *, int, int, int))0x004a6700)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_00521e30 ((uint (__fastcall *)(int *))0x00521e30)
#define _DAT_0054d438 (*(float *)0x0054d438)
#define _DAT_0054d43c (*(float *)0x0054d43c)

#define LOM_SELF_0041ae90 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_0041ae90(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  float10 fVar11;
  float *pfVar12;
  uchar _fr[0x48] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_40;
  typedef int _t_local_38;
  typedef int _t_local_34;
  typedef float _t_local_30;
  typedef float _t_local_2c[2];
  typedef float _t_local_24;
#define local_40 (*(_t_local_40 *)(_fr + 0x0))
#define local_38 (*(_t_local_38 *)(_fr + 0x8))
#define local_34 (*(_t_local_34 *)(_fr + 0xc))
#define local_30 (*(_t_local_30 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x14))
#define local_24 (*(_t_local_24 *)(_fr + 0x1c))
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    piVar9 = (int *)(param_1 + 0xc4);
    do {
      uVar4 = FUN_00521e30(piVar9);
      if (uVar4 != 0) break;
      iVar10 = iVar10 + 1;
      piVar9 = piVar9 + 0x13;
    } while (iVar10 < *(int *)(param_1 + 0x4c));
  }
  if (iVar10 != *(int *)(param_1 + 0x4c)) {
    iVar10 = *(int *)(param_1 + 0x1c);
    puVar5 = FUN_004c6fc0();
    iVar10 = iVar10 % *(int *)(puVar5 + 0x6c);
    iVar6 = *(int *)(param_1 + 0x1c);
    puVar5 = FUN_004c6fc0();
    iVar6 = iVar6 / *(int *)(puVar5 + 0x6c);
    iVar7 = FUN_00420580(param_1);
    if (iVar7 == 0) {
      pfVar12 = local_2c;
      puVar5 = FUN_004c6fc0();
      FUN_004a6600(puVar5,pfVar12,iVar10,iVar6);
    }
    else {
      pfVar12 = local_2c;
      iVar7 = param_1;
      puVar5 = FUN_004c6fc0();
      FUN_004a6700(puVar5,pfVar12,iVar10,iVar6,iVar7);
    }
    fVar11 = FUN_0041ae30(param_1);
    local_38 = *(int *)(param_1 + 0x538);
    fVar1 = (float)fVar11;
    if (local_38 < 0) {
      fVar1 = fVar1 + local_24;
      fVar2 = fVar1 - _DAT_0054d438;
      *(float *)(param_1 + 0x59c) = fVar1;
      if (fVar2 < *(float *)(param_1 + 0x5a8)) {
        fVar2 = *(float *)(param_1 + 0x5a8);
      }
      fVar1 = (fVar1 - *(float *)(param_1 + 0x5a8)) * _DAT_0054d43c;
      *(float *)(param_1 + 0x5a0) = fVar2;
      *(float *)(param_1 + 0x5a4) = fVar1;
      return;
    }
    iVar6 = FUN_00427880(&DAT_005aeefc,&local_38,0);
    local_40 = fVar1 + local_24;
    local_34 = 1;
    iVar10 = *(int *)(DAT_005ae970 + (iVar6 + *(int *)(param_1 + 0x1c) * 8) * 4);
    *(undefined4 *)(param_1 + 0x5a4) = 0xbf000000;
    local_30 = local_40;
    while (iVar6 != 8) {
      puVar5 = FUN_004c6fc0();
      iVar8 = iVar10 % *(int *)(puVar5 + 0x6c);
      puVar5 = FUN_004c6fc0();
      iVar6 = iVar10 / *(int *)(puVar5 + 0x6c);
      iVar7 = FUN_00420580(param_1);
      if (iVar7 == 0) {
        pfVar12 = local_2c;
        puVar5 = FUN_004c6fc0();
        FUN_004a6600(puVar5,pfVar12,iVar8,iVar6);
      }
      else {
        pfVar12 = local_2c;
        iVar7 = param_1;
        puVar5 = FUN_004c6fc0();
        FUN_004a6700(puVar5,pfVar12,iVar8,iVar6,iVar7);
      }
      fVar3 = fVar1 + local_24;
      fVar2 = (fVar3 - *(float *)(param_1 + 0x5a8)) / (float)local_34;
      if (fVar2 <= *(float *)(param_1 + 0x5a4)) {
        fVar2 = *(float *)(param_1 + 0x5a4);
      }
      *(float *)(param_1 + 0x5a4) = fVar2;
      if (local_40 < fVar3) {
        local_40 = fVar3;
      }
      if (fVar3 <= local_30) {
        local_30 = fVar3;
      }
      if (local_38 < 0) break;
      iVar6 = FUN_00427880(&DAT_005aeefc,&local_38,0);
      iVar10 = *(int *)(DAT_005ae970 + (iVar6 + iVar10 * 8) * 4);
      local_34 = local_34 + 1;
    }
    local_40 = local_40 - _DAT_0054d438;
    if (local_40 <= *(float *)(param_1 + 0x5a8)) {
      local_40 = *(float *)(param_1 + 0x5a8);
    }
    *(float *)(param_1 + 0x5a0) = local_40;
    *(float *)(param_1 + 0x59c) = local_30;
  }
  return;
#undef local_40
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_24
}
