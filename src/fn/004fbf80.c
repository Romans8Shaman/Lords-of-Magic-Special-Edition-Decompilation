/* Rebuilt from lomse.exe FUN_004fbf80 @ 0x004fbf80 (109 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004fbf80 1
undefined4 __thiscall rb_004fbf80(void *this,int param_1,int param_2)

{
  int *this_00;
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    if (param_2 == 0) {
      iVar2 = *(int *)((int)this + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x28) + 1;
    }
    if (iVar2 <= *(int *)((int)this + 0x18)) {
      while ((this_00 = *(int **)(*(int *)((int)this + 8) + iVar2 * 4), this_00 == (int *)0x0 ||
             (iVar1 = ((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00), iVar1 != param_1))) {
        iVar2 = iVar2 + 1;
        if (*(int *)((int)this + 0x18) < iVar2) {
          return 0;
        }
      }
      *(int *)(*(int *)(*(int *)((int)this + 8) + iVar2 * 4) + 0x28) = iVar2;
      return *(undefined4 *)(*(int *)((int)this + 8) + iVar2 * 4);
    }
  }
  return 0;
}
