/* Rebuilt from lomse.exe op_attackfacingvalue @ 0x00401420 (165 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005787ac (*(int *)0x005787ac)
#define DAT_005787b0 (*(int *)0x005787b0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00401420 1
void __cdecl rb_00401420(void *vm)

{
  int iVar1;
  undefined *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_005787ac;
  if ((DAT_005787b0 == 0) || (DAT_005787ac == 0)) {
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
      return;
    }
  }
  else {
    iVar2 = *(int *)(DAT_005787b0 + 0x1c);
    iVar4 = *(int *)(DAT_005787ac + 0x1c);
    this = FUN_004c6fc0();
    iVar2 = FUN_004a8b50(this,iVar4,iVar2);
    uVar3 = iVar2 - *(int *)(iVar1 + 0x44) & 7;
    if (4 < uVar3) {
      uVar3 = 8 - uVar3;
    }
    if (*(int *)((int)vm + 0x54) != 0) {
      iVar2 = *(int *)((int)vm + 0x54) + -1;
      *(int *)((int)vm + 0x54) = iVar2;
      iVar1 = *(int *)((int)vm + 0x50);
      *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      return;
    }
  }
  *(undefined4 *)((int)vm + 0x90) = 3;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
