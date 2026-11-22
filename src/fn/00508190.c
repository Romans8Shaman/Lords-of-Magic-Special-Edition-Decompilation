/* Rebuilt from lomse.exe FUN_00508190 @ 0x00508190 (82 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00508190 1
undefined4 __thiscall rb_00508190(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 < 0) || (0xf < param_1)) {
    return 0;
  }
  iVar2 = 0;
  do {
    iVar1 = *(int *)((int)this + (iVar2 + param_1 * 0x32) * 4 + 0x68);
    if (iVar2 < 3) {
      if (0 < iVar1) {
        return 1;
      }
    }
    else if (iVar1 != -1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x32);
  return 0;
}
