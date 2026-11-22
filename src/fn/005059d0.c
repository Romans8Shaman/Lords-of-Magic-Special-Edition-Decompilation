/* Rebuilt from lomse.exe FUN_005059d0 @ 0x005059d0 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005059d0 1
undefined4 __thiscall rb_005059d0(void *this,int param_1,undefined4 *param_2)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  *param_2 = *(undefined4 *)((int)this + param_1 * 0xc + 0x22ffc);
  return 1;
}
