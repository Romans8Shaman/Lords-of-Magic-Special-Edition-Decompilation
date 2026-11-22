/* Rebuilt from lomse.exe FUN_00455290 @ 0x00455290 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455290 1
void __thiscall rb_00455290(void *this,int param_1,undefined4 param_2)

{
  if ((-1 < param_1) && (param_1 < 3)) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x20) = param_2;
  }
  return;
}
