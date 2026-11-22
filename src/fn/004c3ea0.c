/* Rebuilt from lomse.exe FUN_004c3ea0 @ 0x004c3ea0 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c3ea0 1
int __thiscall rb_004c3ea0(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)((int)this + 8);
  if (piVar2 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*piVar2 == param_1) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar1 < *(int *)((int)this + 4));
    }
  }
  return -1;
}
