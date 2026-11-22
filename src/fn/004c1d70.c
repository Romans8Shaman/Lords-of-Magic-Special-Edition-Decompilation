/* Rebuilt from lomse.exe FUN_004c1d70 @ 0x004c1d70 (272 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7cec (*(uint *)0x005a7cec)
#define DAT_005a7cf0 (*(int * *)0x005a7cf0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c1e80 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004c1e80)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c1d70 1
void __fastcall rb_004c1d70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x5b4) != -1) {
    uVar4 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x5b4),0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 0x5bc) == 0)) {
      *(undefined4 *)(uVar4 + 0x5bc) = 2;
      *(int *)(uVar4 + 0x5c4) = *(int *)(uVar4 + 0x5c4) + 1;
      pvVar3 = DAT_005a7b78;
      uVar1 = *(undefined4 *)(param_1 + 0x28);
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
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
      }
      pvVar3 = DAT_005a7b78;
      uVar1 = *(undefined4 *)(param_1 + 0x5b4);
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
        *(undefined4 *)(iVar2 + 4 + iVar5 * 8) = uVar1;
      }
      FUN_004d05e0(DAT_005a7b78,DAT_005a7cec,DAT_005a7cf0);
    }
    if (3 < *(int *)(uVar4 + 0x5c4)) {
      FUN_004c1e80(*(undefined4 *)(param_1 + 0x5b4),0x25);
    }
  }
  return;
}
