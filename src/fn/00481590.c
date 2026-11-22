/* Rebuilt from lomse.exe FUN_00481590 @ 0x00481590 (31 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00481590 1
undefined4 __thiscall rb_00481590(void *this,int param_1)

{
  if ((param_1 < 0) || (8 < param_1)) {
    return 0;
  }
  return *(undefined4 *)((int)this + param_1 * 0xc + 0x22ff8);
}
