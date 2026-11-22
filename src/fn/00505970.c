/* Rebuilt from lomse.exe FUN_00505970 @ 0x00505970 (45 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00505970 1
undefined4 __thiscall rb_00505970(void *this,int param_1,int param_2)

{
  if (((param_1 < 0) || (8 < param_1)) || (param_2 < 1)) {
    return 0;
  }
  *(int *)((int)this + param_1 * 0xc + 0x22ffc) = param_2;
  return 1;
}
