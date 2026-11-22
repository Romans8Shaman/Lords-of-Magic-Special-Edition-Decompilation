/* Rebuilt from lomse.exe FUN_00427900 @ 0x00427900 (46 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00427900 1
void __thiscall rb_00427900(void *this,int param_1,byte param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)(*(int *)this + param_1);
  if ((*pbVar1 & 8) == 0) {
    *pbVar1 = param_2;
    return;
  }
  *pbVar1 = param_2;
  *(byte *)(*(int *)this + param_1) = *(byte *)(*(int *)this + param_1) | 8;
  return;
}
