/* Rebuilt from lomse.exe FUN_005228b0 @ 0x005228b0 (421 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_005228b0 1
int __thiscall rb_005228b0(void *this,undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)this + 0x48) < 0) {
    iVar4 = FUN_00521e00(this);
    pvVar3 = DAT_005a7b78;
    if (iVar4 == 0) {
      return 1;
    }
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = param_1;
    }
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = param_2;
    }
    FUN_004d05e0(DAT_005a7b78,*(uint *)(iVar4 + 0x14c),*(int **)(iVar4 + 0x150));
    *(undefined4 *)((int)this + 0x48) = 1;
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
      local_4 = *(float *)(*piVar1 + -4 + iVar4 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (uVar6 == 1) {
      *(float *)((int)this + 0x48) = local_4;
      return *(int *)((int)this + 0x48);
    }
    if (uVar6 == 2) {
      *(int *)((int)this + 0x48) = __BC(int, local_4) >> 8;
      return *(int *)((int)this + 0x48);
    }
    if (uVar6 == 4) {
      lVar7 = __ftol((float10)local_4);
      *(int *)((int)this + 0x48) = (int)lVar7;
      return *(int *)((int)this + 0x48);
    }
    *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
    FUN_004d4550(pvVar3);
    *(undefined4 *)((int)pvVar3 + 0x90) = 0;
    *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
  }
  return *(int *)((int)this + 0x48);
#undef local_4
}
