/* Rebuilt from lomse.exe FUN_00500da0 @ 0x00500da0 (35 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00500da0 1
int __thiscall rb_00500da0(void *this,undefined4 param_1)

{
  *(undefined4 *)((int)this + 0x2bec) = param_1;
  if (*(int *)((int)this + 0x2dfc) == 0) {
    *(undefined1 *)((int)this + 0x22efc) = *(undefined1 *)((int)this + 0x2bec);
  }
  return *(int *)((int)this + 0x2dfc);
}
