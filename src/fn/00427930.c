/* Rebuilt from lomse.exe FUN_00427930 @ 0x00427930 (27 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00427930 1
undefined4 __thiscall rb_00427930(void *this,int param_1)

{
  if (param_1 < 0) {
    return 8;
  }
  return *(byte *)(param_1 + *(int *)this) & 7;
}
