/* Rebuilt from lomse.exe FUN_004b8fa0 @ 0x004b8fa0 (107 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b8fa0 1
undefined4 __thiscall rb_004b8fa0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 < 1) || (4 < param_1)) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x4c10) & 1 << ((char)param_1 - 1U & 0x1f)) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    return 0;
  }
  puVar1 = (undefined4 *)((param_1 + 0x4bc) * 0x10 + (int)this);
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  param_2[3] = puVar1[3];
  return 1;
}
