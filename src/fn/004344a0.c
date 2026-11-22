/* Rebuilt from lomse.exe FUN_004344a0 @ 0x004344a0 (472 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00578a70 (*(uint *)0x00578a70)
#define DAT_00578a74 (*(int * *)0x00578a74)
#define DAT_00578a78 (*(uint *)0x00578a78)
#define DAT_00578a7c (*(int * *)0x00578a7c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00434100 ((undefined4 (__thiscall *)(void *))0x00434100)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004344a0 1
undefined4 __thiscall rb_004344a0(void *this,int param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar1 = DAT_005a7b78;
  iVar4 = *(int *)(param_1 + 8);
  if (param_2 == iVar4) {
    iVar4 = *(int *)(param_1 + 0xc);
  }
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
    iVar5 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar5 + iVar2 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar2 * 8) = param_2;
  }
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x50);
    iVar2 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar2;
    *(undefined4 *)(iVar5 + iVar2 * 8) = 1;
    *(int *)(iVar5 + 4 + iVar2 * 8) = iVar4;
  }
  uVar3 = FUN_00434100(this);
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar4 = *(int *)((int)pvVar1 + 0x50);
    *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
    *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar3;
  }
  uVar6 = (uint)(param_2 == *(int *)(param_1 + 8));
  if (param_3 == 0) {
    uVar6 = 1 - uVar6;
  }
  if (uVar6 == 0) {
    uVar6 = DAT_00578a78;
    piVar8 = DAT_00578a7c;
  }
  else {
    uVar6 = DAT_00578a70;
    piVar8 = DAT_00578a74;
  }
  FUN_004d05e0(DAT_005a7b78,uVar6,piVar8);
  pvVar1 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar8 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar6 = *(uint *)(*piVar8 + -8 + iVar4 * 8);
    local_4 = *(float *)(*piVar8 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    uVar6 = 0;
  }
  uVar6 = uVar6 & 0xff;
  if (uVar6 != 1) {
    if (uVar6 == 2) {
      return __BC(int, local_4) >> 8;
    }
    if (uVar6 == 4) {
      lVar7 = __ftol((float10)local_4);
      return (int)lVar7;
    }
    *(undefined4 *)((int)pvVar1 + 0x90) = 0xe;
    FUN_004d4550(pvVar1);
    *(undefined4 *)((int)pvVar1 + 0x90) = 0;
    *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
    local_4 = 1.4013e-45;
  }
  return __BC(undefined4, local_4);
#undef local_4
}
