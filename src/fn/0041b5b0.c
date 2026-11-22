/* Rebuilt from lomse.exe op_animatearmy @ 0x0041b5b0 (187 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052d140 ((undefined4 (__fastcall *)(int))0x0052d140)

#define LOM_SELF_0041b5b0 1
void __cdecl rb_0041b5b0(void *vm)

{
  int iVar1;
  int *this;
  uint uVar2;
  
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (((uVar2 != 1) && (uVar2 != 2)) && (uVar2 != 4)) {
    *(undefined4 *)((int)vm + 0x90) = 0xe;
    FUN_004d4550(vm);
    *(undefined4 *)((int)vm + 0x90) = 0;
    *(undefined4 *)((int)vm + 0xa4) = 0;
    return;
  }
  iVar1 = FUN_0052d140((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  if (iVar1 != -1) {
    this = (int *)FUN_00482ac0(&DAT_005aa12c,iVar1,0);
    ((undefined4 (__thiscall *)(__typeof__(this), __typeof__(3), __typeof__(3)))(**(code **)(*this + 0x30)))(this,3,3);
  }
  return;
}
