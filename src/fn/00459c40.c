/* Rebuilt from lomse.exe FUN_00459c40 @ 0x00459c40 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00459c40 1
void __thiscall rb_00459c40(void *this,int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 +
                   (*(int *)((int)this + 0x6c) * param_2 + param_1) * 8);
  *puVar1 = *puVar1 | param_3;
  return;
}
