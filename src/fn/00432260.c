/* Rebuilt from lomse.exe FUN_00432260 @ 0x00432260 (66 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005789e0 (*(undefined4 *)0x005789e0)

#define LOM_SELF_00432260 1
undefined4 __thiscall rb_00432260(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)((int)this + 0x18) == 7) {
    return 0;
  }
  if (*(int *)((int)this + 0x14) != param_1) {
    return 0;
  }
  puVar2 = this;
  puVar3 = &DAT_005789e0;
  for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x18) = 2;
  return 1;
}
