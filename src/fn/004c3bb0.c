/* Rebuilt from lomse.exe FUN_004c3bb0 @ 0x004c3bb0 (18 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c3bb0 1
void * __thiscall rb_004c3bb0(void *this,undefined4 param_1,undefined1 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = param_2;
  return this;
}
