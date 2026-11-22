/* Rebuilt from lomse.exe FUN_00508f10 @ 0x00508f10 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00508f10 1
undefined4 __thiscall rb_00508f10(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)((int)this + 0x2c) <= param_1)) ||
     (*(int *)((int)this + 0x18) == 0)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x18) + param_1 * 4);
}
