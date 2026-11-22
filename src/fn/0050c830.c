/* Rebuilt from lomse.exe FUN_0050c830 @ 0x0050c830 (144 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005d2d50 (*(uint *)0x005d2d50)
#define DAT_005d2d54 (*(int * *)0x005d2d54)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0050c830 1
void __fastcall rb_0050c830(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *this;
  undefined4 uVar4;
  
  pvVar2 = DAT_005a7b78;
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = uVar4;
  }
  FUN_004d09a0(DAT_005a7b78,DAT_005d2d50,DAT_005d2d54,-1);
  if (*(int *)(param_1 + 0x5c) < 0) {
    this = FUN_00485080(&DAT_005aa12c,*(int *)(param_1 + 0x28),0x2f);
    if (this != (int *)0x0) {
      uVar4 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
      *(undefined4 *)(param_1 + 0x5c) = uVar4;
    }
  }
  return;
}
