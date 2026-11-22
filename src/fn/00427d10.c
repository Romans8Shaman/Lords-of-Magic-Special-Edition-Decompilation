/* Rebuilt from lomse.exe FUN_00427d10 @ 0x00427d10 (32 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00427d10 1
int __thiscall rb_00427d10(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return param_1 * 0x80 + *(int *)((int)this + 8);
}
