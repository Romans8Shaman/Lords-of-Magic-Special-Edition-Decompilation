/* Rebuilt from lomse.exe FUN_004bcb90 @ 0x004bcb90 (53 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004bcb90 1
undefined4 __thiscall rb_004bcb90(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x88 + 0xd28;
  }
  if (iVar1 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  return 1;
}
