/* Rebuilt from lomse.exe FUN_00455640 @ 0x00455640 (25 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455640 1
undefined4 __thiscall rb_00455640(void *this,int param_1)

{
  if ((param_1 < 0) || (4 < param_1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)((int)this + param_1 * 4);
}
