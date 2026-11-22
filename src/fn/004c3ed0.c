/* Rebuilt from lomse.exe FUN_004c3ed0 @ 0x004c3ed0 (31 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c3ed0 1
int __thiscall rb_004c3ed0(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 8;
}
