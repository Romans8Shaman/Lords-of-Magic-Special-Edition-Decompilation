/* Rebuilt from lomse.exe FUN_00522870 @ 0x00522870 (55 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)

#define LOM_SELF_00522870 1
int __fastcall rb_00522870(int param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    this = (void *)(param_1 + 0xc4);
    do {
      iVar1 = FUN_005228b0(this,*(undefined4 *)(param_1 + 0x28),iVar3);
      iVar2 = iVar2 + iVar1;
      iVar3 = iVar3 + 1;
      this = (void *)((int)this + 0x4c);
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return iVar2;
}
