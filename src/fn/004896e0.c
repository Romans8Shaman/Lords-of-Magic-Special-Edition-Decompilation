/* Rebuilt from lomse.exe FUN_004896e0 @ 0x004896e0 (37 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004896e0 1
undefined4 __thiscall rb_004896e0(void *this,undefined4 param_1,int param_2)

{
  if ((param_2 < 0) || (0x31 < param_2)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_2 * 4 + 0x230cc) = param_1;
  return 1;
}
