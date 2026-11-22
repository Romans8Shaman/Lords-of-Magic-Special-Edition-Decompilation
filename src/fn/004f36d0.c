/* Rebuilt from lomse.exe FUN_004f36d0 @ 0x004f36d0 (18 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f36d0 1
void __thiscall rb_004f36d0(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0x24) = *param_1;
  *(undefined4 *)((int)this + 0x2c) = param_1[2];
  return;
}
