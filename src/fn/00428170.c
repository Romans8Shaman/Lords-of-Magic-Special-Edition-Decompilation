/* Rebuilt from lomse.exe FUN_00428170 @ 0x00428170 (31 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00428170 1
void __thiscall rb_00428170(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 8;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((int)this + 0x1c);
  *(int *)((int)this + 0x1c) = param_1;
  return;
}
