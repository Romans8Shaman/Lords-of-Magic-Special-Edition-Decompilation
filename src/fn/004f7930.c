/* Rebuilt from lomse.exe FUN_004f7930 @ 0x004f7930 (40 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f7930 1
void __fastcall rb_004f7930(int param_1)

{
  int *this;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 <= *(int *)(param_1 + 0x18)) {
    do {
      this = *(int **)(*(int *)(param_1 + 8) + iVar1 * 4);
      if (this != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x4c)))(this);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(param_1 + 0x18));
  }
  return;
}
