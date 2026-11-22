/* Rebuilt from lomse.exe FUN_004a6d20 @ 0x004a6d20 (75 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a6d20 1
undefined4 __thiscall rb_004a6d20(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 < 0) || (*(int *)((int)this + 0x68) <= param_2)) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)((int)this + 100) + param_2 * 8);
  iVar2 = iVar1;
  while( true ) {
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x3c) = iVar1;
      *(int *)(*(int *)((int)this + 100) + param_2 * 8) = param_1;
      return 1;
    }
    if (iVar2 == param_1) break;
    iVar2 = *(int *)(iVar2 + 0x3c);
  }
  return 1;
}
