/* Rebuilt from lomse.exe FUN_0044ec80 @ 0x0044ec80 (27 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0044ec80 1
int __fastcall rb_0044ec80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  if (iVar1 < 2) {
    return 0;
  }
  if (iVar1 < 3) {
    return iVar1 + -1;
  }
  return 2;
}
