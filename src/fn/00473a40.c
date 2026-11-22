/* Rebuilt from lomse.exe FUN_00473a40 @ 0x00473a40 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00473a40 1
void __thiscall rb_00473a40(void *this,undefined4 *param_1)

{
  *(undefined4 *)((int)this + 0xc0) = param_1[1];
  *(undefined4 *)((int)this + 200) = param_1[3];
  *(undefined4 *)((int)this + 0xbc) = *param_1;
  *(undefined4 *)((int)this + 0xc4) = param_1[2];
  return;
}
