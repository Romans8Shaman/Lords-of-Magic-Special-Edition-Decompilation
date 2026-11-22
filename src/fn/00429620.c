/* Rebuilt from lomse.exe FUN_00429620 @ 0x00429620 (386 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d84 (*(uint *)0x005a7d84)
#define DAT_005a7d88 (*(int * *)0x005a7d88)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00429620 1
undefined4 __stdcall rb_00429620(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  pvVar3 = DAT_005a7b78;
  if (DAT_005a7d84 != 0) {
    uVar2 = *param_1;
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
    uVar2 = param_1[1];
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
      *(undefined4 *)(iVar5 + 4 + iVar4 * 8) = 9;
    }
    FUN_004d09a0(DAT_005a7b78,DAT_005a7d84,DAT_005a7d88,-2);
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
      piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
      iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
      uVar6 = *(uint *)(*piVar1 + -8 + iVar5 * 8);
    }
    else {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
      uVar6 = 0;
    }
    uVar6 = uVar6 & 0xff;
    if (((uVar6 != 1) && (uVar6 != 2)) && (uVar6 != 4)) {
      *(undefined4 *)((int)pvVar3 + 0x90) = 0xe;
      FUN_004d4550(pvVar3);
      *(undefined4 *)((int)pvVar3 + 0x90) = 0;
      *(undefined4 *)((int)pvVar3 + 0xa4) = 0;
    }
  }
  return 1;
}
