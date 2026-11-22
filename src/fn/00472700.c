/* Rebuilt from lomse.exe FUN_00472700 @ 0x00472700 (29 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00472700 1
void __thiscall rb_00472700(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x164) = param_2;
  *(undefined4 *)((int)this + 0x168) = param_3;
  return;
}
