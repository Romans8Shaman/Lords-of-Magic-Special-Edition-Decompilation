/* Rebuilt from lomse.exe FUN_00489710 @ 0x00489710 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00489710 1
undefined4 __thiscall rb_00489710(void *this,int param_1)

{
  if ((param_1 < 0) || (0x31 < param_1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x230cc);
}
