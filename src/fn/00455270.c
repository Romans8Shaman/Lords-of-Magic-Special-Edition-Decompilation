/* Rebuilt from lomse.exe FUN_00455270 @ 0x00455270 (24 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455270 1
void __thiscall rb_00455270(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)((int)this + 0x14) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  return;
}
