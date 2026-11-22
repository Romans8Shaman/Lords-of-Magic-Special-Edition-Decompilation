/* Rebuilt from lomse.exe FUN_004b7df0 @ 0x004b7df0 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b7df0 1
int __thiscall rb_004b7df0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x2c8) <= param_1)) {
    return 0;
  }
  return (int)this + param_1 * 0x32 + 0x134;
}
