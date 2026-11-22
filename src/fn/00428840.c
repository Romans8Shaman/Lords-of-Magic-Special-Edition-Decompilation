/* Rebuilt from lomse.exe FUN_00428840 @ 0x00428840 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00428840 1
int __thiscall rb_00428840(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0xc) == param_1) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}
