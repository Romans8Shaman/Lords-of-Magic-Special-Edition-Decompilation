/* Rebuilt from lomse.exe FUN_004f6630 @ 0x004f6630 (55 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f6630 1
void __thiscall rb_004f6630(void *this,undefined4 param_1)

{
  int *this_00;
  int iVar1;
  
  if ((*(int *)((int)this + 8) != 0) && (iVar1 = 0, -1 < *(int *)((int)this + 0x18))) {
    do {
      this_00 = *(int **)(*(int *)((int)this + 8) + iVar1 * 4);
      if (this_00 != (int *)0x0) {
        ((undefined4 (__thiscall *)(__typeof__(this_00), __typeof__(param_1)))(**(code **)(*this_00 + 0x34)))(this_00,param_1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)((int)this + 0x18));
  }
  return;
}
