/* Rebuilt from lomse.exe FUN_0040caf0 @ 0x0040caf0 (16 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040caf0 1
void __thiscall rb_0040caf0(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((int)this + 4);
  *(int *)((int)this + 4) = param_1;
  return;
}
