/* Rebuilt from lomse.exe FUN_00427d30 @ 0x00427d30 (64 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00427d30 1
int __thiscall rb_00427d30(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)this;
  if (*(int *)((int)this + 4) <= iVar1) {
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  puVar3 = (undefined4 *)(iVar1 * 0x80 + *(int *)((int)this + 8));
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)this = *(int *)this + 1;
  return iVar1;
}
