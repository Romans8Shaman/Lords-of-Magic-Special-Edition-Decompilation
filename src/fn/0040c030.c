/* Rebuilt from lomse.exe FUN_0040c030 @ 0x0040c030 (16 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040c030 1
void __thiscall rb_0040c030(void *this,int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((int)this + 4);
  *(int *)((int)this + 4) = param_1;
  return;
}
