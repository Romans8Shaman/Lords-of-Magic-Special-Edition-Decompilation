/* Rebuilt from lomse.exe FUN_004b9e00 @ 0x004b9e00 (26 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b9e00 1
undefined4 __thiscall rb_004b9e00(void *this,int param_1)

{
  if ((param_1 < 0) || (*(int *)((int)this + 4) <= param_1)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)this + param_1 * 4);
}
