/* Rebuilt from lomse.exe FUN_0049b110 @ 0x0049b110 (52 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049b110 1
undefined4 __thiscall rb_0049b110(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 8) <= param_1)) {
    return 0;
  }
  if (*(int *)((int)this + 4) == 0) {
    return 1;
  }
  return (uint)(-1 < *(int *)(*(int *)((int)this + 4) + param_1 * 4));
}
