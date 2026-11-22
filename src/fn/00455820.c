/* Rebuilt from lomse.exe FUN_00455820 @ 0x00455820 (42 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00455820 1
void __thiscall rb_00455820(void *this,int param_1)

{
  *(int *)((int)this + 0x38) = param_1;
  if (*(int *)((int)this + 0x30) != 2) {
    *(undefined1 *)((int)this + 0x4d) = 8;
    return;
  }
  if (param_1 < 0) {
    *(undefined1 *)((int)this + 0x4d) = 8;
    return;
  }
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0x4d) = 4;
  }
  return;
}
