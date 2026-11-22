/* Rebuilt from lomse.exe FUN_004ab1f0 @ 0x004ab1f0 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ab1f0 1
uint __thiscall rb_004ab1f0(void *this,int param_1,int param_2)

{
  return (uint)*(byte *)((*(int *)((int)this + 8) + param_2) * (*(int **)this)[3] +
                         *(int *)((int)this + 4) + param_1 + **(int **)this);
}
