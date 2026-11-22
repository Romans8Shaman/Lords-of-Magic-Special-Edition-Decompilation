/* Rebuilt from lomse.exe FUN_00523620 @ 0x00523620 (237 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00523620 1
uint __thiscall rb_00523620(void *this,undefined4 param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)this + 0x44) == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 0x48);
  if (((char)*(uint *)((int)this + 0x44) == '\x06') && ((*(uint *)((int)this + 0x44) & 0x100) == 0))
  {
    if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
      *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
      FUN_004d4550(pvVar2);
      *(undefined4 *)((int)pvVar2 + 0x90) = 0;
      *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
      *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
      iVar4 = *(int *)((int)pvVar2 + 0x50);
      *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar3 * 8) = param_1;
    }
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x44),*(int **)((int)this + 0x48));
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) < *(int *)((int)DAT_005a7b78 + 0x58)) {
    piVar1 = (int *)((int)DAT_005a7b78 + 0x50);
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + 1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    uVar6 = *(uint *)(*piVar1 + -8 + iVar4 * 8);
    uVar5 = *(uint *)(*piVar1 + -4 + iVar4 * 8);
  }
  else {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 6;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
    uVar6 = 0;
  }
  if ((uVar6 & 0xff) == 0) {
    return 0;
  }
  return uVar5 & ((uVar6 & 0xff) != 8) - 1;
}
