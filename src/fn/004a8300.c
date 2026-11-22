/* Rebuilt from lomse.exe FUN_004a8300 @ 0x004a8300 (48 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a8300 1
undefined4 __thiscall rb_004a8300(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)((int)this + 100) + param_1 * 8);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(iVar1 + 4) == param_2) {
      return *(undefined4 *)(iVar1 + 0x28);
    }
    iVar1 = *(int *)(iVar1 + 0x3c);
  } while (iVar1 != 0);
  return 0xffffffff;
}
