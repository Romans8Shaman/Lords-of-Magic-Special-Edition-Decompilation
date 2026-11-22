/* Rebuilt from lomse.exe FUN_00483c50 @ 0x00483c50 (60 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00483c50 1
undefined4 __thiscall rb_00483c50(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + param_1 * 0x1d84 + 0x5068;
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 0x15b8);
}
