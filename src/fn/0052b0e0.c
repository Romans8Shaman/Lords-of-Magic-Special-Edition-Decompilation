/* Rebuilt from lomse.exe FUN_0052b0e0 @ 0x0052b0e0 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0052b0e0 1
undefined4 __thiscall rb_0052b0e0(void *this,int param_1)

{
  if (((param_1 < 0) || (7 < param_1)) ||
     ((*(uint *)((int)this + 0x24) & 1 << ((char)param_1 + 0x18U & 0x1f)) == 0)) {
    return 0;
  }
  return 1;
}
