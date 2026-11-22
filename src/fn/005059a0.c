/* Rebuilt from lomse.exe FUN_005059a0 @ 0x005059a0 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005059a0 1
undefined4 __thiscall rb_005059a0(void *this,int param_1,undefined4 param_2)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  *(undefined4 *)((int)this + param_1 * 0xc + 0x23000) = param_2;
  return 1;
}
