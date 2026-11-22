/* Rebuilt from lomse.exe FUN_004712e0 @ 0x004712e0 (18 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004712e0 1
void __thiscall rb_004712e0(void *this,int param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + param_1 * 4 + 0x3cc) = param_2;
  return;
}
