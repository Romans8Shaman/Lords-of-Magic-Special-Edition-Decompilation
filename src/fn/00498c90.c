/* Rebuilt from lomse.exe FUN_00498c90 @ 0x00498c90 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00498c90 1
undefined4 __thiscall rb_00498c90(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 0x50) <= param_1)) {
    return 0;
  }
  return 1;
}
