/* Rebuilt from lomse.exe FUN_004f3710 @ 0x004f3710 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f3710 1
void __thiscall rb_004f3710(void *this,int param_1,int param_2)

{
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffbf;
  *(int *)((int)this + 0x24) = param_1 + -0x10;
  *(int *)((int)this + 0x2c) = param_1 + 0x10;
  *(int *)((int)this + 0x28) = param_2 + -0x10;
  *(int *)((int)this + 0x30) = param_2 + 0x10;
  return;
}
