/* Rebuilt from lomse.exe FUN_00456490 @ 0x00456490 (20 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00456490 1
void __thiscall rb_00456490(void *this,int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
  *puVar1 = *puVar1 | 0x1c0000;
  return;
}
