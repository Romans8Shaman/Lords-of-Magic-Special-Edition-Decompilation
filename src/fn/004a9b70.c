/* Rebuilt from lomse.exe FUN_004a9b70 @ 0x004a9b70 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a9b70 1
void __thiscall rb_004a9b70(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)((int)this + 100) + 4 + param_1 * 8);
  *puVar1 = *puVar1 & (param_2 | 0xffe3ffff);
  return;
}
