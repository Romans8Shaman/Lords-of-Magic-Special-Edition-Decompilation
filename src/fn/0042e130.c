/* Rebuilt from lomse.exe FUN_0042e130 @ 0x0042e130 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0042e130 1
int __thiscall rb_0042e130(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 0x48;
}
