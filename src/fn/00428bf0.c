/* Rebuilt from lomse.exe FUN_00428bf0 @ 0x00428bf0 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00428bf0 1
int __thiscall rb_00428bf0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) break;
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}
