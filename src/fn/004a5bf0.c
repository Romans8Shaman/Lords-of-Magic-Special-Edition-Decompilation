/* Rebuilt from lomse.exe FUN_004a5bf0 (op_maxslope) @ 0x004a5bf0 (186 bytes, __cdecl).
 * Hand-written from the asm (2026-11-12): Ghidra wrote case 4 as an int->float conversion, but the original
 * copies the raw 32-bit value (mov); case 1 = fild/fstp DWORD, case 2 = fild * QWORD 0x54dab8, fstp DWORD. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dab8 (*(double *)0x0054dab8)
#define DAT_005ae964_f (*(volatile float *)0x005ae964)
#define DAT_005ae964_i (*(volatile int *)0x005ae964)

#define LOM_SELF_004a5bf0 1

void __cdecl rb_004a5bf0(void *vm)

{
  int iVar1;
  uint uVar2;
  int iStack_4;

  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    iStack_4 = *(int *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
    iStack_4 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    DAT_005ae964_f = (float)(float10)iStack_4;
    return;
  }
  if (uVar2 == 2) {
    DAT_005ae964_f = (float)((float10)iStack_4 * (float10)_DAT_0054dab8);
    return;
  }
  if (uVar2 == 4) {
    DAT_005ae964_i = iStack_4;
    return;
  }
  *(undefined4 *)((int)vm + 0x90) = 0xe;
  FUN_004d4550(vm);
  *(undefined4 *)((int)vm + 0x90) = 0;
  *(undefined4 *)((int)vm + 0xa4) = 0;
  return;
}
