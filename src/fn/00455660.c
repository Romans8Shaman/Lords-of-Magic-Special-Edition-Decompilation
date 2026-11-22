/* Rebuilt from lomse.exe FUN_00455660 @ 0x00455660 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455660 1
undefined4 __thiscall rb_00455660(void *this,int param_1)

{
  if ((param_1 < 0) || (2 < param_1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)((int)this + param_1 * 4 + 0x14);
}
