/* Rebuilt from lomse.exe FUN_0051c9b0 @ 0x0051c9b0 (41 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0051c9b0 1
undefined4 __thiscall rb_0051c9b0(void *this,int param_1)

{
  if ((param_1 < 0) || (0xf < param_1)) {
    return 0x10;
  }
  if (param_1 == *(int *)((int)this + 0x68)) {
    return 8;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x78);
}
