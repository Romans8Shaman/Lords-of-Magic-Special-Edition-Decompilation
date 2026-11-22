/* Rebuilt from lomse.exe FUN_0050ba00 @ 0x0050ba00 (1499 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)
#define FUN_004bc9c0 ((undefined4 (__thiscall *)(void *, int *))0x004bc9c0)
#define FUN_004bcb20 ((undefined4 (__fastcall *)(int))0x004bcb20)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004c8660 ((undefined4 (__fastcall *)(int))0x004c8660)
#define FUN_0050a570 ((int * (__thiscall *)(void *, int, int))0x0050a570)
#define FUN_0050b770 ((undefined4 (__fastcall *)(int))0x0050b770)
#define FUN_0051b760 ((undefined4 (__fastcall *)(undefined4 *))0x0051b760)
#define FUN_0051fe70 ((undefined4 (__thiscall *)(void *, int *))0x0051fe70)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_0050ba00 1
void __fastcall rb_0050ba00(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  uchar _fr[0xa0] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_98;
  typedef void * _t_local_94;
  typedef int _t_local_8c[4];
  typedef undefined4 _t_local_7c;
  typedef int _t_local_78;
  typedef int _t_local_74;
  typedef undefined4 _t_local_70;
  typedef int _t_local_68[5];
  typedef int _t_local_54;
  typedef int _t_local_50;
  typedef uint _t_local_44;
  typedef int _t_local_40;
  typedef undefined4 _t_local_3c;
  typedef undefined4 _t_local_38;
  typedef undefined4 _t_local_34;
  typedef undefined4 _t_local_30;
  typedef undefined4 _t_local_2c;
  typedef undefined4 _t_local_28;
  typedef undefined4 _t_local_24;
  typedef undefined4 _t_local_20;
  typedef undefined4 _t_local_1c;
  typedef undefined4 _t_local_18;
#define local_98 (*(_t_local_98 *)(_fr + 0x0))
#define local_94 (*(_t_local_94 *)(_fr + 0x4))
#define local_8c (*(_t_local_8c *)(_fr + 0xc))
#define local_7c (*(_t_local_7c *)(_fr + 0x1c))
#define local_78 (*(_t_local_78 *)(_fr + 0x20))
#define local_74 (*(_t_local_74 *)(_fr + 0x24))
#define local_70 (*(_t_local_70 *)(_fr + 0x28))
#define local_68 (*(_t_local_68 *)(_fr + 0x30))
#define local_54 (*(_t_local_54 *)(_fr + 0x44))
#define local_50 (*(_t_local_50 *)(_fr + 0x48))
#define local_44 (*(_t_local_44 *)(_fr + 0x54))
#define local_40 (*(_t_local_40 *)(_fr + 0x58))
#define local_3c (*(_t_local_3c *)(_fr + 0x5c))
#define local_38 (*(_t_local_38 *)(_fr + 0x60))
#define local_34 (*(_t_local_34 *)(_fr + 0x64))
#define local_30 (*(_t_local_30 *)(_fr + 0x68))
#define local_2c (*(_t_local_2c *)(_fr + 0x6c))
#define local_28 (*(_t_local_28 *)(_fr + 0x70))
#define local_24 (*(_t_local_24 *)(_fr + 0x74))
#define local_20 (*(_t_local_20 *)(_fr + 0x78))
#define local_1c (*(_t_local_1c *)(_fr + 0x7c))
#define local_18 (*(_t_local_18 *)(_fr + 0x80))

  FUN_0051b760(&local_40);
  iVar6 = *(int *)((int)param_1 + 0x6a8);
  if ((iVar6 < 0) || (0xf < iVar6)) {
    local_94 = (void *)0x0;
  }
  else {
    local_94 = (void *)((int)param_1 + iVar6 * 0x1d84 + 0x5068);
  }
  iVar6 = *(int *)((int)param_1 + 0xc84);
  if ((iVar6 < 0) || (0xf < iVar6)) {
    local_98 = (void *)0x0;
  }
  else {
    local_98 = (void *)((int)param_1 + iVar6 * 0x1d84 + 0x5068);
  }
  uVar1 = FUN_00482ac0(param_1,*(int *)((int)param_1 + 0x4774),3);
  local_44 = FUN_00482ac0(param_1,*(int *)((int)param_1 + 0x4774),2);
  uVar2 = FUN_00482ac0(param_1,*(int *)((int)param_1 + 0x4774),1);
  FUN_0050b770((int)local_8c);
  FUN_0050b770((int)local_68);
  local_8c[0] = 0;
  local_8c[1] = *(int *)((int)local_98 + 0x15a8);
  local_7c = *(undefined4 *)((int)param_1 + 0x5004);
  local_8c[3] = *(undefined4 *)((int)param_1 + 0x5004);
  local_78 = *(int *)((int)param_1 + 0x4764) - *(int *)((int)param_1 + 0x4768);
  local_74 = *(int *)((int)param_1 + 0x4768) + *(int *)((int)param_1 + 0x4764);
  local_70 = 1;
  piVar5 = local_8c;
  piVar10 = local_68;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar10 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar10 = piVar10 + 1;
  }
  local_68[0] = 1;
  local_68[1] = *(int *)((int)local_94 + 0x15a8);
  local_54 = -local_78;
  local_1c = *(undefined4 *)((int)param_1 + 0xc84);
  local_20 = *(undefined4 *)((int)param_1 + 0x6a8);
  if ((local_94 == (void *)0x0) || (local_98 == (void *)0x0)) goto LAB_0050bf9d;
  if (*(int *)((int)param_1 + 0x6ac) < 1) {
    if (*(int *)((int)param_1 + 0xc88) < 1) {
      local_8c[2] = 3;
      goto LAB_0050bbdb;
    }
    local_68[2] = 0;
    local_8c[2] = 1;
    local_28 = local_1c;
    local_24 = local_20;
  }
  else if (*(int *)((int)param_1 + 0xc88) < 1) {
    local_8c[2] = 0;
    local_68[2] = 1;
    local_28 = local_20;
    local_24 = local_1c;
  }
  else {
    local_8c[2] = 2;
LAB_0050bbdb:
    local_68[2] = local_8c[2];
  }
  FUN_004bc9c0(local_94,local_8c);
  FUN_004bc9c0(local_98,local_68);
  if (uVar1 == 0) {
    if (local_44 == 0) {
      if (uVar2 == 0) {
        local_40 = 0xc;
      }
      else {
        local_40 = 0xb;
        local_2c = *(undefined4 *)(uVar2 + 0x28);
      }
    }
    else {
      local_40 = 10;
      local_30 = *(undefined4 *)(local_44 + 0x28);
    }
  }
  else {
    local_40 = 9;
    local_34 = *(undefined4 *)(uVar1 + 0x28);
  }
  iVar6 = (int)param_1 + 0x5068;
  iVar8 = 0x10;
  do {
    FUN_004bcb20(iVar6);
    local_3c = *(undefined4 *)((int)param_1 + 0x688);
    local_38 = *(undefined4 *)((int)param_1 + 0xc64);
    if (((*(byte *)(iVar6 + 0x15d8) & 2) != 0) && (iVar3 = FUN_004bb560(iVar6), iVar3 != 0)) {
      FUN_0051fe70((void *)(iVar6 + 0x1c64),&local_40);
    }
    iVar6 = iVar6 + 0x1d84;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (*(int *)((int)param_1 + 0x4778) != 0) {
    local_68[0] = 8;
    local_68[2] = 0;
    FUN_004bc9c0(local_98,local_68);
    local_18 = *(undefined4 *)((int)param_1 + 0x6a8);
    local_40 = 8;
    iVar6 = (int)param_1 + 0x5068;
    iVar8 = 0x10;
    do {
      if (((*(byte *)(iVar6 + 0x15d8) & 2) != 0) && (iVar3 = FUN_004bb560(iVar6), iVar3 != 0)) {
        FUN_0051fe70((void *)(iVar6 + 0x1c64),&local_40);
      }
      iVar6 = iVar6 + 0x1d84;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*(int *)((int)param_1 + 0x477c) != 0) {
    local_8c[0] = 8;
    local_8c[2] = 0;
    FUN_004bc9c0(local_94,local_8c);
    local_18 = *(undefined4 *)((int)param_1 + 0xc84);
    local_40 = 8;
    iVar6 = (int)param_1 + 0x5068;
    iVar8 = 0x10;
    do {
      if (((*(byte *)(iVar6 + 0x15d8) & 2) != 0) && (iVar3 = FUN_004bb560(iVar6), iVar3 != 0)) {
        FUN_0051fe70((void *)(iVar6 + 0x1c64),&local_40);
      }
      iVar6 = iVar6 + 0x1d84;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar6 = *(int *)((int)local_98 + 0x15a8);
  if ((iVar6 < 0) || (0xf < iVar6)) {
    iVar6 = 0;
  }
  else {
    iVar6 = (int)local_94 + iVar6 * 0x88 + 0xd28;
  }
  if (iVar6 != 0) {
    uVar1 = FUN_004c5e60((void *)((int)param_1 + 0x4dd8),*(int *)((int)param_1 + 0xc58));
    iVar8 = FUN_004c5ec0((void *)((int)param_1 + 0x4dd8),uVar1);
    if (iVar8 == 0) {
      uVar1 = 4;
    }
    else {
      iVar3 = *(int *)((int)local_98 + 0x15a8);
      iVar4 = FUN_004c8660(iVar8);
      if (iVar4 == iVar3) {
        uVar1 = 1;
      }
      else {
        iVar3 = *(int *)((int)local_94 + 0x15a8);
        iVar8 = FUN_004c8660(iVar8);
        uVar1 = (-(uint)(iVar8 != iVar3) & 0xfffffff4) + 0x10;
      }
    }
    if ((*(uint *)(iVar6 + 8) & uVar1) != 0) {
      local_8c[0] = 6;
      local_78 = 0;
      local_74 = 0;
      local_8c[2] = uVar1;
      FUN_004bc9c0(local_94,local_8c);
      local_40 = 6;
      iVar6 = (int)param_1 + 0x5068;
      iVar8 = 0x10;
      do {
        if (((*(byte *)(iVar6 + 0x15d8) & 2) != 0) && (iVar3 = FUN_004bb560(iVar6), iVar3 != 0)) {
          FUN_0051fe70((void *)(iVar6 + 0x1c64),&local_40);
        }
        iVar6 = iVar6 + 0x1d84;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  iVar6 = 0;
  pvVar9 = (void *)((int)local_98 + 0xd28);
  do {
    if (*(int *)((int)param_1 + 0x1840) != 0) {
      if ((iVar6 < 0) || (0xf < iVar6)) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = (void *)(((int)local_94 - (int)local_98) + (int)pvVar9);
      }
      if (pvVar7 != (void *)0x0) {
        piVar5 = FUN_0050a570(pvVar7,5,*(int *)((int)local_98 + 0x15a8));
        if ((piVar5 != (int *)0x0) && (piVar5[3] <= *(int *)((int)param_1 + 0x5004))) {
          if (piVar5[4] < piVar5[2]) {
            iVar8 = piVar5[4] + *(int *)((int)param_1 + 0x1840);
            piVar5[4] = iVar8;
            if (piVar5[2] <= iVar8) {
              local_8c[0] = 5;
              local_8c[2] = 5;
              local_78 = piVar5[4] - piVar5[2];
              local_74 = piVar5[2];
              local_8c[1] = iVar6;
            }
          }
        }
      }
    }
    if (*(int *)((int)param_1 + 0x1264) != 0) {
      if ((iVar6 < 0) || (0xf < iVar6)) {
        pvVar7 = (void *)0x0;
      }
      else {
        pvVar7 = pvVar9;
      }
      if (pvVar7 != (void *)0x0) {
        piVar5 = FUN_0050a570(pvVar7,5,*(int *)((int)local_94 + 0x15a8));
        if ((piVar5 != (int *)0x0) && (piVar5[3] <= *(int *)((int)param_1 + 0x5004))) {
          if (piVar5[4] < piVar5[2]) {
            iVar8 = piVar5[4] + *(int *)((int)param_1 + 0x1264);
            piVar5[4] = iVar8;
            if (piVar5[2] <= iVar8) {
              local_68[0] = 5;
              local_68[2] = 5;
              local_54 = piVar5[4] - piVar5[2];
              local_50 = piVar5[2];
              local_68[1] = iVar6;
            }
          }
        }
      }
    }
    iVar6 = iVar6 + 1;
    pvVar9 = (void *)((int)pvVar9 + 0x88);
  } while (iVar6 < 0x10);
LAB_0050bf9d:
  op_sunlight();
  op_sunlight();
  return;
#undef local_98
#undef local_94
#undef local_8c
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_68
#undef local_54
#undef local_50
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
}
