/* Rebuilt from lomse.exe FUN_004288e0 @ 0x004288e0 (64 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004288e0 1
undefined4 __thiscall rb_004288e0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (0x13 < *(int *)((int)this + 0x22c3c)) {
    return 0;
  }
  puVar2 = (undefined4 *)((int)this + *(int *)((int)this + 0x22c3c) * 0x18 + 0x22a5c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 0x22c3c) = *(int *)((int)this + 0x22c3c) + 1;
  return 1;
}
