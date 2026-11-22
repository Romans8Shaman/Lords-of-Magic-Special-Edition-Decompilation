/* Rebuilt from lomse.exe FUN_004f2470 @ 0x004f2470 (789 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_00584c1c (*(undefined4 *)0x00584c1c)
#define DAT_00584ca0 (*(int *)0x00584ca0)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7be4 (*(uint *)0x005a7be4)
#define DAT_005a7be8 (*(int * *)0x005a7be8)
#define DAT_005a7bf4 (*(uint *)0x005a7bf4)
#define DAT_005a7bf8 (*(int * *)0x005a7bf8)
#define DAT_005a7d6c (*(uint *)0x005a7d6c)
#define DAT_005a7d70 (*(int * *)0x005a7d70)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define FUN_004010d0 ((undefined4 (__thiscall *)(void *, int))0x004010d0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0041efa0 ((undefined4 (__thiscall *)(void *, uint))0x0041efa0)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_0044c0c0 ((undefined4 * (__stdcall *)(int, int *))0x0044c0c0)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)
#define FUN_0052bd30 ((undefined4 (__thiscall *)(void *, undefined4))0x0052bd30)

#define LOM_SELF_004f2470 1
undefined4 __fastcall rb_004f2470(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar3 = FUN_004efe80(&DAT_005aee6c,*param_1);
  local_4 = iVar3;
  this = FUN_00485080(&DAT_005aa12c,param_1[9],0x2f);
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
    iVar1 = param_1[0xd];
    if (-1 < iVar1) {
      if (this != (int *)0x0) {
        if (((param_1[10] < 0) || (this[0x13] <= param_1[10])) ||
           (this[(param_1[5] + 3) * 0x13] != iVar1)) {
          this = (int *)0x0;
        }
        if (this != (int *)0x0) goto LAB_004f2506;
      }
      this = FUN_0044c0c0(iVar1,&local_c);
      if (this != (int *)0x0) {
        param_1[9] = this[10];
        param_1[10] = local_c;
      }
    }
LAB_004f2506:
    puVar4 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    iVar1 = param_1[6];
    if (-1 < iVar1) {
      if (puVar4 != (undefined4 *)0x0) {
        iVar6 = param_1[5];
        if (((iVar6 < 0) || ((int)puVar4[0x13] <= iVar6)) || (puVar4[(iVar6 + 3) * 0x13] != iVar1))
        {
          puVar4 = (undefined4 *)0x0;
        }
        if (puVar4 != (undefined4 *)0x0) goto LAB_004f2562;
      }
      puVar4 = FUN_0044c0c0(iVar1,&local_8);
      if (puVar4 != (undefined4 *)0x0) {
        param_1[3] = puVar4[10];
        param_1[5] = local_8;
      }
    }
  }
LAB_004f2562:
  iVar1 = local_4;
  if ((this == (int *)0x0) || (iVar3 == 0)) {
    return 0;
  }
  piVar7 = param_1;
  piVar8 = &DAT_00584c1c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  FUN_004d09a0(DAT_005a7b78,*(uint *)(local_4 + 0x4c),*(int **)(local_4 + 0x50),0);
  if (((this[0x12] == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
      ((*(byte *)(this + 0xc) & 0x20) != 0)) && (DAT_00584ca0 == 0)) {
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
      FUN_0052bd30(&DAT_005a7d90 + DAT_005a7d8c * 0x400,0);
    }
    FUN_00503040(&DAT_00584ae8,1);
    FUN_00503040(&DAT_00584ae8,0);
    if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 3) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7bf4,DAT_005a7bf8,0);
    }
  }
  piVar7 = this + 0x1a;
  this[0x19] = *(int *)(iVar1 + 0x20);
  iVar3 = *piVar7;
  if (((iVar3 != 0x16) && (iVar3 != 4)) && (iVar3 != 0x18)) {
    if (iVar3 != 0x19) goto LAB_004f26b1;
    puVar4 = FUN_00485080(&DAT_005aa12c,param_1[3],0x2f);
    if (puVar4 != (undefined4 *)0x0) {
      *(byte *)(puVar4 + 0x1e) = *(byte *)(puVar4 + 0x1e) & 0xef;
      uVar5 = FUN_0047c9e0(&DAT_005aa12c,this[0x12]);
      if (uVar5 != 0) {
        iVar3 = FUN_00407d50((int)puVar4);
        if (iVar3 == 0) {
          iVar3 = FUN_00506110(this,(int)puVar4);
          if (iVar3 != 0) {
            this[0x1b] = puVar4[10];
            this[0x1d] = puVar4[10];
            this[0x1c] = puVar4[7];
            *piVar7 = 2;
            goto LAB_004f26b1;
          }
        }
      }
    }
  }
  FUN_004010d0(piVar7,(int)this);
LAB_004f26b1:
  iVar3 = FUN_00420560((int)this);
  if (iVar3 != 0) {
    FUN_0041efa0(this,2);
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x2c)))(this);
    return 1;
  }
  if (DAT_005577c8 == this[0x12]) {
    if ((*piVar7 == 0x18) || (*piVar7 == 0x19)) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
    pvVar2 = DAT_005a7b78;
    iVar3 = this[10];
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar1 = *(int *)((int)DAT_005a7b78 + 0x50);
      iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
      *(undefined4 *)(iVar1 + iVar6 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar6 * 8) = iVar3;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d6c,DAT_005a7d70,-1);
  }
  return 1;
#undef local_c
#undef local_8
#undef local_4
}
