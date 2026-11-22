/* Rebuilt from lomse.exe FUN_00505a00 @ 0x00505a00 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00505a00 1
undefined4 __thiscall rb_00505a00(void *this,int param_1,undefined4 *param_2)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  *param_2 = *(undefined4 *)((int)this + param_1 * 0xc + 0x23000);
  return 1;
}
