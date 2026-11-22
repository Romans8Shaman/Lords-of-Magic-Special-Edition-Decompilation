/* Rebuilt from lomse.exe FUN_00526de0 @ 0x00526de0 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00526de0 1
void __thiscall rb_00526de0(void *this,int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
  }
  *(int *)(param_1 + 0x1c) = *(int *)this;
  *(int *)this = param_1;
  return;
}
