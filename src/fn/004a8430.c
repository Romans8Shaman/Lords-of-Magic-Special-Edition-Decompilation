/* Rebuilt from lomse.exe FUN_004a8430 @ 0x004a8430 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a8430 1
undefined4 __thiscall rb_004a8430(void *this,int param_1)

{
  int iVar1;
  
  if ((*(int *)((int)this + 100) == 0) ||
     (iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8), iVar1 == 0)) {
    return 0;
  }
  while ((*(int *)(iVar1 + 4) < 1 || (3 < *(int *)(iVar1 + 4)))) {
    iVar1 = *(int *)(iVar1 + 0x3c);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}
