/* Rebuilt from lomse.exe FUN_005241e0 @ 0x005241e0 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005241e0 1
int __thiscall rb_005241e0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (*(int *)this <= iVar1) {
    return -1;
  }
  if (*(int *)((int)this + 8) == 0) {
    return -1;
  }
  puVar3 = (undefined4 *)(*(int *)((int)this + 8) + iVar1 * 1000);
  for (iVar2 = 0xfa; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return iVar1;
}
