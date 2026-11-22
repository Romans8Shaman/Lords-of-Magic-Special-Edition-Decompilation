/* Rebuilt from lomse.exe FUN_0051a8c0 @ 0x0051a8c0 (105 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051a8c0 1
void __thiscall rb_0051a8c0(void *this,int param_1,int param_2)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x22ef0) = 0;
    return;
  }
  *(int *)((int)this + 0x22ee0) = param_1 * -0x280 + 0x280 >> 1;
  *(undefined4 *)((int)this + 0x22ef0) = 1;
  *(int *)((int)this + 0x22ee4) = param_2 * -0x180 + 0x180 >> 1;
  *(int *)((int)this + 0x22ee8) = param_1 * 0x280 + -0x280 >> 1;
  *(int *)((int)this + 0x22eec) = param_2 * 0x180 + -0x180 >> 1;
  return;
}
