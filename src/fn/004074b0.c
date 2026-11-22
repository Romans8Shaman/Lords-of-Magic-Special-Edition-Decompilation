/* Rebuilt from lomse.exe FUN_004074b0 @ 0x004074b0 (74 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004074b0 1
undefined4 __thiscall rb_004074b0(void *this,undefined4 *param_1)

{
  char cVar1;
  
  if (*(char *)this + 1 < (int)*(char *)((int)this + 1)) {
    cVar1 = *(char *)this + '\x01';
    *(char *)this = cVar1;
    *param_1 = *(undefined4 *)((int)this + cVar1 * 8 + 4);
    param_1[1] = *(undefined4 *)((int)this + *(char *)this * 8 + 8);
    return 1;
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return 0;
}
