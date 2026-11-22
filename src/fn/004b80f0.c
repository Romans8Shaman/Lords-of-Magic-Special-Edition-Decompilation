/* Rebuilt from lomse.exe FUN_004b80f0 @ 0x004b80f0 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b80f0 1
undefined4 __thiscall rb_004b80f0(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 8) < 4) {
    *(undefined4 *)((int)this + *(int *)((int)this + 8) * 4 + 0x124) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    return 1;
  }
  return 0;
}
