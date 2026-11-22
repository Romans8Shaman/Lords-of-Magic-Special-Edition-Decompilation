/* Rebuilt from lomse.exe FUN_004efe80 @ 0x004efe80 (43 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004efe80 1
int __thiscall rb_004efe80(void *this,int param_1)

{
  if (((param_1 < 0) || (*(int *)this <= param_1)) || (*(int *)((int)this + 8) == 0)) {
    return 0;
  }
  return *(int *)((int)this + 8) + param_1 * 0xac;
}
