/* Rebuilt from lomse.exe FUN_004bb460 @ 0x004bb460 (248 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005844c0 (*(uint *)0x005844c0)
#define DAT_005844c4 (*(int * *)0x005844c4)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_00506e30 ((undefined4 (__fastcall *)(int))0x00506e30)
#define FUN_0051bc00 ((undefined4 (__fastcall *)(int))0x0051bc00)

#define LOM_SELF_004bb460 1
void __fastcall rb_004bb460(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (((*(int *)(param_1 + 0xcfc) < 0) || (*(int *)(param_1 + 0xd04) < 0)) ||
     (*(int *)(param_1 + 0xd08) < 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x15a8);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    pvVar3 = DAT_005a7b78;
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
    }
    pvVar3 = DAT_005a7b78;
    uVar1 = *(undefined4 *)(param_1 + 0x40);
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      FUN_00404ab0(DAT_005a7b78,3);
    }
    else {
      iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
      iVar2 = *(int *)((int)pvVar3 + 0x50);
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
    }
    FUN_004d05e0(DAT_005a7b78,DAT_005844c0,DAT_005844c4);
    if (*(int *)(param_1 + 0xcfc) < 0) {
      *(undefined4 *)(param_1 + 0xcfc) = 0;
    }
    if (*(int *)(param_1 + 0xd04) < 0) {
      *(undefined4 *)(param_1 + 0xd04) = 0;
    }
    if (*(int *)(param_1 + 0xd08) < 0) {
      *(undefined4 *)(param_1 + 0xd08) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if ((*(byte *)(param_1 + 0x15d8) & 2) != 0) {
    FUN_0051bc00(param_1 + 0x1c64);
  }
  FUN_00506e30(param_1);
  *(uint *)(param_1 + 0x15d8) = *(uint *)(param_1 + 0x15d8) | 0x40;
  return;
}
