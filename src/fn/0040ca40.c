/* Rebuilt from lomse.exe FUN_0040ca40 @ 0x0040ca40 (40 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0040ca40 1
undefined4 __thiscall rb_0040ca40(void *this,undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  do {
    if (*(int *)(iVar1 + 4) == param_2) {
      return *(undefined4 *)(iVar1 + 0x34);
    }
    iVar1 = *(int *)(iVar1 + 0x38);
  } while (iVar1 != 0);
  return 0xffffffff;
}
