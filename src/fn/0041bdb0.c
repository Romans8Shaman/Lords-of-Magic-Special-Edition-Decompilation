/* Rebuilt from lomse.exe FUN_0041bdb0 @ 0x0041bdb0 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00428630 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x00428630)

#define LOM_SELF_0041bdb0 1
undefined4 __fastcall rb_0041bdb0(int param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    do {
      FUN_00428630(this,*(undefined4 *)(param_1 + 0x28),iVar1);
      iVar1 = iVar1 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return 1;
}
