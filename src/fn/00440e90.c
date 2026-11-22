/* Rebuilt from lomse.exe FUN_00440e90 @ 0x00440e90 (250 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579068 (*(uint *)0x00579068)
#define DAT_0057906c (*(int * *)0x0057906c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00440e90 1
undefined4 __fastcall rb_00440e90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  pvVar3 = DAT_005a7b78;
  uVar2 = *(undefined4 *)(param_1 + 0x28);
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
  FUN_004d05e0(DAT_005a7b78,DAT_00579068,DAT_0057906c);
  pvVar3 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    local_4 = *(float *)(*piVar1 + -4 + iVar5 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
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
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    local_4 = 1.4013e-45;
  }
  return __BC(undefined4, local_4);
#undef local_4
}
