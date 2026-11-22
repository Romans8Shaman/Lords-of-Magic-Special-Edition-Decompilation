/* Rebuilt from lomse.exe FUN_004381f0 @ 0x004381f0 (63 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004381f0 1
undefined4 __thiscall rb_004381f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if (*(int *)this < *(int *)((int)this + 4)) {
    puVar1 = (undefined4 *)(*(int *)((int)this + 8) + *(int *)this * 0x10);
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}
