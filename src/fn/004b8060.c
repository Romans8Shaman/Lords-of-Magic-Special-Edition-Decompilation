/* Rebuilt from lomse.exe FUN_004b8060 @ 0x004b8060 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b8060 1
int __thiscall rb_004b8060(void *this,int param_1)

{
  if ((*(int *)((int)this + 0x100) < 2) && (param_1 == 0)) {
    return (int)this + 0x104;
  }
  if ((param_1 < 0) || (*(int *)((int)this + 0x100) <= param_1)) {
    return 0;
  }
  return (int)this + param_1 * 0x25 + 0x14;
}
