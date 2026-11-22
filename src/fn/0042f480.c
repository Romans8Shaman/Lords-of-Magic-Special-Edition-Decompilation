/* Rebuilt from lomse.exe FUN_0042f480 @ 0x0042f480 (69 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0042f480 1
undefined4 __thiscall rb_0042f480(void *this,int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    iVar1 = (int)this + 3000;
  }
  else {
    if (param_1 != 1) {
      return 0;
    }
    iVar1 = (int)this + 0xbf4;
    this = (void *)((int)this + 0x5dc);
  }
  if ((param_2 < 0) || (*(int *)((int)this + 0x4c) <= param_2)) {
    return 0;
  }
  *param_3 = *(undefined4 *)(iVar1 + param_2 * 4);
  return 1;
}
