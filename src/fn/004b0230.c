/* Rebuilt from lomse.exe FUN_004b0230 @ 0x004b0230 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b0230 1
undefined4 __thiscall rb_004b0230(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x68) <= param_1)) {
    return 0;
  }
  return 1;
}
