/* Rebuilt from lomse.exe FUN_004278d0 @ 0x004278d0 (34 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004278d0 1
undefined4 __thiscall rb_004278d0(void *this,int param_1)

{
  if (param_1 < 0) {
    return 1;
  }
  return *(byte *)(param_1 + *(int *)this) >> 3 & 1;
}
