/* Rebuilt from lomse.exe FUN_00451ba0 @ 0x00451ba0 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00451ba0 1
void __thiscall rb_00451ba0(void *this,int param_1)

{
  *(int *)((int)this + 0x6c) = param_1;
  *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) + param_1;
  return;
}
