/* Rebuilt from lomse.exe FUN_00403390 @ 0x00403390 (674 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d5c (*(uint *)0x005a7d5c)
#define DAT_005a7d60 (*(int * *)0x005a7d60)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00504f00 ((int (__cdecl *)(int, int))0x00504f00)
#define FUN_00506010 ((int (__thiscall *)(void *, int))0x00506010)
#define FUN_00522870 ((int (__fastcall *)(int))0x00522870)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00403390 1
uint __stdcall rb_00403390(void *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_60;
  typedef int _t_local_5c[2];
  typedef float _t_local_54;
  typedef int _t_local_50[20];
#define local_60 (*(_t_local_60 *)(_fr + 0x0))
#define local_5c (*(_t_local_5c *)(_fr + 0x4))
#define local_54 (*(_t_local_54 *)(_fr + 0xc))
#define local_50 (*(_t_local_50 *)(_fr + 0x10))
  
  pvVar3 = DAT_005a7b78;
  if (DAT_005a7d5c == 0) {
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 1;
    local_50[7] = 1;
    local_50[8] = 1;
    local_50[9] = 1;
    local_50[10] = 1;
    local_50[0xb] = 1;
    local_50[0xc] = 1;
    local_50[0xd] = 1;
    local_50[0xe] = 1;
    local_50[0xf] = 1;
    local_50[0x10] = 2;
    local_50[0x11] = 2;
    local_50[0x12] = 2;
    local_50[0x13] = 3;
    iVar5 = FUN_00504f00(0,0x14);
    /* HAND: FUN_00504f00(0,0x14) is inclusive: index 20 reads one past the 20-entry table = our return address slot */
    iVar4 = (iVar5 == 0x14) ? (int)__builtin_return_address(0) : local_50[iVar5];
    if (iVar4 == 0) {
      return 0;
    }
    if (iVar4 == 3) {
      return 1;
    }
    if (iVar4 == 1) {
      iVar4 = FUN_00506010(param_1,1);
      iVar6 = FUN_00522870(param_2);
      if (iVar4 < iVar6) {
        iVar5 = iVar5 + (iVar4 - iVar6) * 2;
      }
      else {
        iVar5 = iVar5 + (iVar4 - iVar6);
      }
    }
    FUN_00527e90((void *)((int)param_1 + 0xc4),3,&local_60);
    FUN_00527e90((void *)(param_2 + 0xc4),3,local_5c);
    iVar5 = iVar5 + -4 + (local_60 - local_5c[0]);
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    else if (3 < iVar5) {
      iVar5 = 3;
    }
    return (uint)(local_50[iVar5] != 0);
  }
  uVar2 = *(undefined4 *)((int)param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar5 = *(int *)((int)pvVar3 + 0x50);
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    *(undefined4 *)(iVar5 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = uVar2;
  }
  FUN_004d09a0(DAT_005a7b78,DAT_005a7d5c,DAT_005a7d60,-1);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    uVar7 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    local_54 = *(float *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    uVar7 = 0;
  }
  uVar7 = uVar7 & 0xff;
  if (uVar7 == 1) {
    return (uint)(local_54 != 0.0);
  }
  if (uVar7 == 2) {
    return (uint)(__BC(int, local_54) >> 8 != 0);
  }
  if (uVar7 == 4) {
    lVar8 = __ftol((float10)local_54);
    return (uint)((int)lVar8 != 0);
  }
  *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
  FUN_004d4550(pvVar3);
  *(undefined4 *)((int)pvVar3 + 0x90) = 0;
  *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  return 0;
#undef local_60
#undef local_5c
#undef local_54
#undef local_50
}
