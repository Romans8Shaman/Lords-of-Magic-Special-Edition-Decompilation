/* Rebuilt from lomse.exe FUN_00502bd0 @ 0x00502bd0 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00502bd0 1
undefined4 __fastcall rb_00502bd0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1b8);
  if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
    return 1;
  }
  return 0;
}
