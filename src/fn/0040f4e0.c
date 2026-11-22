/* Rebuilt from lomse.exe FUN_0040f4e0 @ 0x0040f4e0 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040f4e0 1
int __thiscall rb_0040f4e0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 4) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x4c);
  }
  return iVar1;
}
