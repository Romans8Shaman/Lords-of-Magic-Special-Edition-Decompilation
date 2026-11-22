/* Rebuilt from lomse.exe FUN_0047ac30 @ 0x0047ac30 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0047ac30 1
void __thiscall rb_0047ac30(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0xcc) != 0x32) {
    *(undefined4 *)((int)this + *(int *)((int)this + 0xcc) * 4 + 4) = param_1;
    *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
  }
  return;
}
