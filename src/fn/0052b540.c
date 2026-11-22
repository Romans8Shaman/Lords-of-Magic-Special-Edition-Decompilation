/* Rebuilt from lomse.exe FUN_0052b540 @ 0x0052b540 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0052b540 1
int * __thiscall rb_0052b540(void *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[3];
  }
  return piVar1;
}
