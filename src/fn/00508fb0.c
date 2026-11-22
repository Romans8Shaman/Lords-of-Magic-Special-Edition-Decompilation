/* Rebuilt from lomse.exe FUN_00508fb0 @ 0x00508fb0 (54 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00508fb0 1
undefined4 __thiscall rb_00508fb0(void *this,int param_1,int param_2)

{
  if ((((param_1 < 0) || (*(int *)((int)this + 0x14) <= param_1)) || (param_2 < 0)) || (7 < param_2)
     ) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)((int)this + 0x10) + param_1 * 0x58 + 0x38 + param_2 * 4);
}
