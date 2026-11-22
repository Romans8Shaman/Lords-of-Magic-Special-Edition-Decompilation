/* Rebuilt from lomse.exe FUN_004c1c20 @ 0x004c1c20 (33 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c1c20 1
void __thiscall rb_004c1c20(void *this,int param_1)

{
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x5b4) = 0xffffffff;
    return;
  }
  *(undefined4 *)((int)this + 0x5b4) = *(undefined4 *)(param_1 + 0x28);
  return;
}
