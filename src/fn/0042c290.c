/* Rebuilt from lomse.exe FUN_0042c290 @ 0x0042c290 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042c210 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0042c210)

#define LOM_SELF_0042c290 1
void __fastcall rb_0042c290(int param_1)

{
  void *this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    do {
      FUN_0042c210(this,*(undefined4 *)(param_1 + 0x28),iVar1);
      iVar1 = iVar1 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return;
}
