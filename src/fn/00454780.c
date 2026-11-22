/* Rebuilt from lomse.exe FUN_00454780 @ 0x00454780 (73 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00454780 1
int __thiscall rb_00454780(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  if (*(int *)this <= *(int *)((int)this + 4)) {
    return -1;
  }
  puVar2 = (undefined4 *)(*(int *)((int)this + 8) + *(int *)((int)this + 4) * 0x38);
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = *(int *)((int)this + 4) + 1;
  *(int *)((int)this + 4) = iVar1;
  return iVar1;
}
