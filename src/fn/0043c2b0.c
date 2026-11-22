/* Rebuilt from lomse.exe FUN_0043c2b0 @ 0x0043c2b0 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0043c2b0 1
int __thiscall rb_0043c2b0(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 0x58;
}
