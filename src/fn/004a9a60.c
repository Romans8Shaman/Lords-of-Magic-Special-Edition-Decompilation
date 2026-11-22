/* Rebuilt from lomse.exe FUN_004a9a60 @ 0x004a9a60 (39 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a9a60 1
undefined4 __thiscall rb_004a9a60(void *this,undefined4 *param_1,int param_2)

{
  if ((param_2 < 0) || (*(int *)((int)this + 0x68) <= param_2)) {
    return 0;
  }
  *param_1 = *(undefined4 *)(*(int *)((int)this + 100) + 4 + param_2 * 8);
  return 1;
}
