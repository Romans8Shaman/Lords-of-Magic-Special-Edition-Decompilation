/* Rebuilt from lomse.exe FUN_0051fe20 @ 0x0051fe20 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051fe20 1
undefined4 __thiscall rb_0051fe20(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (0x15 < param_1)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x10) = param_2;
  return 1;
}
