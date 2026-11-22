/* Rebuilt from lomse.exe FUN_0046cf70 @ 0x0046cf70 (83 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0046cf70 1
undefined4 __thiscall rb_0046cf70(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x30 + *(int *)((int)this + 4);
  if ((((*(int *)(iVar1 + 0x28) == 0) || (*(int *)(iVar1 + 0x20) == *(int *)(param_2 + 4))) &&
      ((*(uint *)(iVar1 + 0x10) & *(uint *)(param_2 + 8)) != 0)) &&
     (((*(byte *)(iVar1 + 0x14) & 2) == 0 ||
      (*(int *)(param_2 + 0xc) + *(int *)(iVar1 + 0x28) <= *(int *)(iVar1 + 0x18))))) {
    return 1;
  }
  return 0;
}
