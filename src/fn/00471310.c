/* Rebuilt from lomse.exe FUN_00471310 @ 0x00471310 (18 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00471310 1
void __thiscall rb_00471310(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x3ec) = param_2;
  return;
}
