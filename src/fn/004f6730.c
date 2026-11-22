/* Rebuilt from lomse.exe FUN_004f6730 @ 0x004f6730 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f6730 1
void __fastcall rb_004f6730(int param_1)

{
  int *this;
  int iVar1;
  
  if ((*(int *)(param_1 + 8) != 0) && (iVar1 = 0, -1 < *(int *)(param_1 + 0x18))) {
    do {
      this = *(int **)(*(int *)(param_1 + 8) + iVar1 * 4);
      if (this != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x1c)))(this);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x18));
  }
  return;
}
