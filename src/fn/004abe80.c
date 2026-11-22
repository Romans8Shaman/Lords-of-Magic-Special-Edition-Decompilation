/* Rebuilt from lomse.exe FUN_004abe80 @ 0x004abe80 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004abe80 1
void __thiscall rb_004abe80(void *this,int param_1,byte param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = 1 << (param_2 & 0x1f) & 0xff;
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
  if (param_3 == 0) {
    *puVar1 = *puVar1 & ~uVar2;
    return;
  }
  *puVar1 = *puVar1 | uVar2;
  return;
}
