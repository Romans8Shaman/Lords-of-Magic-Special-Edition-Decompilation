/* Rebuilt from lomse.exe FUN_004b9a90 @ 0x004b9a90 (57 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b9a90 1
int __thiscall rb_004b9a90(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  while (((*piVar1 != param_1 || (piVar1[1] != param_2)) || (piVar1[3] != param_3))) {
    piVar1 = (int *)piVar1[5];
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  return piVar1[2];
}
