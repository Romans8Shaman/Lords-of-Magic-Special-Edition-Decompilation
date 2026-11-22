/* Rebuilt from lomse.exe FUN_00438390 @ 0x00438390 (19 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00438390 1
int __thiscall rb_00438390(void *this,int param_1)

{
  return *(int *)((int)this + param_1 * 4 + 0xc) * 0x10 + *(int *)((int)this + 8);
}
