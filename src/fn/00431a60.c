/* Rebuilt from lomse.exe FUN_00431a60 @ 0x00431a60 (1832 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define DAT_00584cdc (*(int *)0x00584cdc)
#define DAT_00584cec (*(undefined4 *)0x00584cec)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7c3c (*(uint *)0x005a7c3c)
#define DAT_005a7c40 (*(int * *)0x005a7c40)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_00431310 ((undefined4 (__fastcall *)(int *))0x00431310)
#define FUN_004348c0 ((int (__thiscall *)(void *, undefined4, int))0x004348c0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004bb560 ((undefined4 (__fastcall *)(int))0x004bb560)
#define FUN_004bc9c0 ((undefined4 (__thiscall *)(void *, int *))0x004bc9c0)
#define FUN_004bcb40 ((undefined4 (__thiscall *)(void *, void *))0x004bcb40)
#define FUN_004bcb90 ((undefined4 (__thiscall *)(void *, int))0x004bcb90)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_0050b770 ((undefined4 (__fastcall *)(int))0x0050b770)
#define FUN_0051b760 ((undefined4 (__fastcall *)(undefined4 *))0x0051b760)
#define FUN_0051f4f0 ((undefined4 (__thiscall *)(void *, undefined4))0x0051f4f0)
#define FUN_0051fe70 ((undefined4 (__thiscall *)(void *, int *))0x0051fe70)
#define FUN_0052cef0 ((undefined4 (__thiscall *)(void *, int, int))0x0052cef0)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_00431a60 1
undefined4 __thiscall rb_00431a60(void *this,int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  void *pvVar8;
  int *piVar9;
  void *this_00;
  int *piVar10;
  bool bVar11;
  uchar _fr[0x128] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_local_120;
  typedef void * _t_local_11c;
  typedef int _t_local_118;
  typedef int _t_local_10c[4];
  typedef undefined4 _t_local_fc;
  typedef int _t_local_f8;
  typedef int _t_local_f4;
  typedef undefined4 _t_local_f0;
  typedef int _t_local_e8[5];
  typedef int _t_local_d4;
  typedef int _t_local_d0;
  typedef int _t_local_c4;
  typedef int _t_local_c0;
  typedef int _t_local_bc[11];
  typedef undefined4 _t_local_90;
  typedef undefined4 _t_local_8c;
  typedef undefined4 _t_local_88[31];
#define local_120 (*(_t_local_120 *)(_fr + 0x0))
#define local_11c (*(_t_local_11c *)(_fr + 0x4))
#define local_118 (*(_t_local_118 *)(_fr + 0x8))
#define local_10c (*(_t_local_10c *)(_fr + 0x14))
#define local_fc (*(_t_local_fc *)(_fr + 0x24))
#define local_f8 (*(_t_local_f8 *)(_fr + 0x28))
#define local_f4 (*(_t_local_f4 *)(_fr + 0x2c))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x30))
#define local_e8 (*(_t_local_e8 *)(_fr + 0x38))
#define local_d4 (*(_t_local_d4 *)(_fr + 0x4c))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x50))
#define local_c4 (*(_t_local_c4 *)(_fr + 0x5c))
#define local_c0 (*(_t_local_c0 *)(_fr + 0x60))
#define local_bc (*(_t_local_bc *)(_fr + 0x64))
#define local_90 (*(_t_local_90 *)(_fr + 0x90))
#define local_8c (*(_t_local_8c *)(_fr + 0x94))
#define local_88 (*(_t_local_88 *)(_fr + 0x98))

  FUN_0051b760(local_bc);
  iVar6 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar5 = param_1[4];
  if ((iVar5 < 0) || (0xf < iVar5)) {
    local_11c = (void *)0x0;
  }
  else {
    local_11c = (void *)((int)this + iVar5 * 0x1d84 + 0x5068);
  }
  iVar5 = param_1[5];
  if ((iVar5 < 0) || (0xf < iVar5)) {
    local_120 = (void *)0x0;
  }
  else {
    local_120 = (void *)((int)this + iVar5 * 0x1d84 + 0x5068);
  }
  if ((DAT_00584cdc < 0) || (0xf < DAT_00584cdc)) {
    local_118 = 0;
  }
  else {
    local_118 = (int)this + DAT_00584cdc * 0x1d84 + 0x5068;
  }
  puVar1 = FUN_00485080(this,*param_1,0x2f);
  puVar2 = FUN_00485080(this,param_1[1],0x2f);
  if ((((local_120 == (void *)0x0) || (local_118 == 0)) || (local_11c == (void *)0x0)) ||
     ((puVar1 == (undefined4 *)0x0 || (puVar2 == (undefined4 *)0x0)))) {
    DAT_00584cec = 7;
    FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
LAB_0043216b:
    uVar4 = 0;
  }
  else {
    if (param_1[6] == 5) {
      local_bc[0] = 0xf;
    }
    else {
      local_bc[0] = (-(uint)(param_1[6] != 2) & 0xfffffffd) + 0x10;
    }
    iVar5 = *(int *)((int)local_120 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004b7dd0(DAT_005d1e84);
    }
    bVar11 = iVar5 == iVar3;
    FUN_0050b770((int)local_10c);
    FUN_0050b770((int)local_e8);
    local_10c[0] = 2;
    local_10c[1] = *(undefined4 *)((int)local_120 + 0x15a8);
    local_fc = *(undefined4 *)((int)this + 0x5004);
    local_10c[3] = *(undefined4 *)((int)this + 0x5004);
    local_f0 = 1;
    piVar9 = local_10c;
    piVar10 = local_e8;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar10 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar10 = piVar10 + 1;
    }
    local_e8[1] = *(undefined4 *)((int)local_11c + 0x15a8);
    iVar5 = param_1[6];
    switch(iVar5) {
    case 1:
      param_1[9] = param_1[9] + 1;
      if (bVar11) {
        piVar9 = param_1;
        piVar10 = &DAT_00584cd4;
        for (iVar5 = 0x1f; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar10 = *piVar9;
          piVar9 = piVar9 + 1;
          piVar10 = piVar10 + 1;
        }
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),param_1[6]);
        }
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      break;
    case 2:
    case 3:
      if ((*(byte *)((int)local_120 + 0x15d8) & 2) != 0) {
        FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      break;
    case 4:
      local_c4 = FUN_004348c0(param_1,*(undefined4 *)((int)local_11c + 0x15a8),0);
      local_c0 = FUN_004348c0(param_1,*(undefined4 *)((int)local_120 + 0x15a8),0);
      if (bVar11) {
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),param_1[6]);
        }
      }
      piVar9 = param_1;
      piVar10 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      puVar1 = &DAT_00584cd4;
      puVar2 = local_88;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      pvVar8 = (void *)((int)this + 0x5068);
      iVar6 = 0;
      this_00 = pvVar8;
      do {
        if ((iVar6 != 0xf) && ((*(byte *)((int)this_00 + 0x15d8) & 1) != 0)) {
          FUN_004bcb40(this_00,param_1);
        }
        iVar6 = iVar6 + 1;
        this_00 = (void *)((int)this_00 + 0x1d84);
      } while (iVar6 < 0x10);
      iVar6 = FUN_00431310(&DAT_00584cd4);
      local_90 = 1;
      iVar5 = 0x10;
      do {
        if (((*(byte *)((int)pvVar8 + 0x15d8) & 2) != 0) &&
           (iVar3 = FUN_004bb560((int)pvVar8), iVar3 != 0)) {
          FUN_0051fe70((void *)((int)pvVar8 + 0x1c64),local_bc);
        }
        pvVar8 = (void *)((int)pvVar8 + 0x1d84);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (((*(byte *)(local_118 + 0x15d8) & 2) == 0) &&
         (*(int *)(local_118 + 0x15a8) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_0052cef0(&DAT_00584ae8,DAT_00584cdc,1);
      }
      if (iVar6 == 0) {
        puVar1 = local_88;
        puVar2 = &DAT_00584cd4;
        for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar2 = *puVar1;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        }
        goto switchD_00431c44_default;
      }
      local_f8 = local_c4 - local_c0;
      local_d4 = local_c0 - local_c4;
      local_f4 = local_c0 + local_c4;
      DAT_00584cec = 7;
      if (local_c0 < local_c4) {
        local_10c[2] = 0;
        local_e8[2] = 1;
      }
      else if (local_c4 < local_c0) {
        local_10c[2] = 1;
        local_e8[2] = 0;
      }
      else {
        local_10c[2] = 2;
        local_e8[2] = 2;
      }
      local_d0 = local_f4;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004869d0(this,*(undefined4 *)((int)local_11c + 0x15a8));
      FUN_004869d0(this,*(undefined4 *)((int)local_120 + 0x15a8));
      break;
    case 5:
      if (bVar11) {
        if ((*(byte *)((int)local_120 + 0x15d8) & 2) == 0) {
          if (iVar6 != param_1[5]) {
            FUN_0052cef0(&DAT_00584ae8,param_1[5],1);
          }
        }
        else {
          FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
        }
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      if (((*(byte *)(local_118 + 0x15d8) & 2) == 0) &&
         (*(int *)(local_118 + 0x15a8) != *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) {
        FUN_0052cef0(&DAT_00584ae8,DAT_00584cdc,1);
      }
      local_8c = 1;
      iVar6 = 0;
      puVar7 = (uint *)((int)this + 0x6640);
      do {
        if ((((iVar6 != 0xf) && ((*puVar7 & 1) != 0)) && ((*puVar7 & 2) != 0)) &&
           (iVar5 = FUN_004bb560((int)(puVar7 + -0x576)), iVar5 != 0)) {
          FUN_0051fe70(puVar7 + 0x1a3,local_bc);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 0x761;
      } while (iVar6 < 0x10);
      local_10c[2] = 2;
      local_e8[2] = 2;
      DAT_00584cec = 7;
      local_f8 = 0;
      local_f4 = 0;
      local_d4 = 0;
      local_d0 = 0;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004bcb90(local_11c,*(int *)((int)local_120 + 0x15a8));
      FUN_004bcb90(local_120,*(int *)((int)local_11c + 0x15a8));
      break;
    case 6:
      if ((*(byte *)((int)local_120 + 0x15d8) & 2) != 0) {
        FUN_0051f4f0((void *)((int)local_120 + 0x1c64),iVar5);
      }
      piVar9 = &DAT_00584cd4;
      for (iVar6 = 0x1f; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar9 = *param_1;
        param_1 = param_1 + 1;
        piVar9 = piVar9 + 1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7c3c,DAT_005a7c40);
      DAT_00584cec = 7;
      break;
    case 7:
      local_f8 = 0;
      local_f4 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_10c[2] = 2;
      local_e8[2] = 2;
      FUN_004bc9c0(local_11c,local_10c);
      FUN_004bc9c0(local_120,local_e8);
      FUN_004bcb90(local_11c,*(int *)((int)local_120 + 0x15a8));
      FUN_004bcb90(local_120,*(int *)((int)local_11c + 0x15a8));
      break;
    default:
switchD_00431c44_default:
      op_sunlight();
      op_sunlight();
      goto LAB_0043216b;
    }
    op_sunlight();
    op_sunlight();
    uVar4 = 1;
  }
  return uVar4;
#undef local_120
#undef local_11c
#undef local_118
#undef local_10c
#undef local_fc
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_e8
#undef local_d4
#undef local_d0
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_90
#undef local_8c
#undef local_88
}
