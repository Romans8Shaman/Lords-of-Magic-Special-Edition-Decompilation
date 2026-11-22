/* Rebuilt from lomse.exe FUN_004b8f40 @ 0x004b8f40 (92 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b8f40 1
undefined4 __thiscall
rb_004b8f40(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  if ((param_1 < 1) || (4 < param_1)) {
    return 0;
  }
  puVar1 = (undefined4 *)((param_1 + 0x4bc) * 0x10 + (int)this);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(uint *)((int)this + 0x4c10) = *(uint *)((int)this + 0x4c10) | 1 << ((char)param_1 - 1U & 0x1f);
  return 1;
}
