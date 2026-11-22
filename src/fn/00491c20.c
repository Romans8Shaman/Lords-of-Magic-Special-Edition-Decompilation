/* Rebuilt from lomse.exe FUN_00491c20 @ 0x00491c20 (30 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00491c20 1
int __thiscall rb_00491c20(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 4) == 0)) {
    return 0;
  }
  return *(int *)((int)this + 4) + param_1 * 8;
}
