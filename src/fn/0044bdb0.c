/* Rebuilt from lomse.exe FUN_0044bdb0 @ 0x0044bdb0 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0044bdb0 1
undefined4 __thiscall rb_0044bdb0(void *this,int param_1)

{
  if (*(int *)((int)this + 0x14) < param_1) {
    return 0;
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) - param_1;
  return 1;
}
