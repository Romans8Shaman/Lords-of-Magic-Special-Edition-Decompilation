/* Rebuilt from lomse.exe FUN_00479b40 @ 0x00479b40 (23 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00479b40 1
void __thiscall rb_00479b40(void *this,undefined4 param_1)

{
  if (*(int *)((int)this + 0x13b4) != 0) {
    *(undefined4 *)((int)this + 0x136c) = param_1;
  }
  return;
}
