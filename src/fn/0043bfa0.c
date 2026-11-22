/* Rebuilt from lomse.exe FUN_0043bfa0 @ 0x0043bfa0 (437 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0043bfa0 1
uint __thiscall rb_0043bfa0(void *this,undefined4 param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)this + 0x1c) == 0) {
    return 0;
  }
  uVar7 = *(uint *)((int)this + 0x20);
  if (((char)*(uint *)((int)this + 0x1c) == '\x06') && ((*(uint *)((int)this + 0x1c) & 0x100) == 0))
  {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar6 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = param_1;
    }
    pvVar4 = DAT_005a7b78;
    sVar2 = *(short *)((int)this + 0x24);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar6 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
      *(int *)(iVar6 + 4 + iVar5 * 8) = (int)sVar2;
    }
    pvVar4 = DAT_005a7b78;
    sVar2 = *(short *)((int)this + 0x26);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar6 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
      *(int *)(iVar6 + 4 + iVar5 * 8) = (int)sVar2;
    }
    pvVar4 = DAT_005a7b78;
    uVar3 = *(undefined4 *)((int)this + 0x2c);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar4);
      *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    }
    else {
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      iVar6 = *(int *)((int)pvVar4 + 0x50);
      *(undefined4 *)(iVar6 + iVar5 * 8) = 1;
      *(undefined4 *)(iVar6 + 4 + iVar5 * 8) = uVar3;
    }
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x1c),*(int **)((int)this + 0x20));
  pvVar4 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    uVar8 = *(uint *)(*piVar1 + -8 + iVar6 * 8);
    uVar7 = *(uint *)(*piVar1 + -4 + iVar6 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
    uVar8 = 0;
  }
  if ((uVar8 & 0xff) == 0) {
    return 0;
  }
  return uVar7 & ((uVar8 & 0xff) != 8) - 1;
}
