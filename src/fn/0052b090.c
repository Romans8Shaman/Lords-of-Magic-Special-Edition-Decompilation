/* Rebuilt from lomse.exe FUN_0052b090 @ 0x0052b090 (71 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0052b090 1
void __thiscall rb_0052b090(void *this,int param_1,int param_2)

{
  if (param_2 == 0) {
    if ((-1 < param_1) && (param_1 < 8)) {
      *(uint *)((int)this + 0x24) =
           *(uint *)((int)this + 0x24) & ~(1 << ((char)param_1 + 0x18U & 0x1f));
    }
  }
  else if ((-1 < param_1) && (param_1 < 8)) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 1 << ((char)param_1 + 0x18U & 0x1f);
    return;
  }
  return;
}
