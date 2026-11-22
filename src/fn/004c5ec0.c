/* Rebuilt from lomse.exe FUN_004c5ec0 @ 0x004c5ec0 (47 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5ec0 1
int __thiscall rb_004c5ec0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x1b0) <= param_1)) {
    return (int)this + 0x10;
  }
  return *(int *)((int)this + 0x1ac) + param_1 * 0x19c;
}
