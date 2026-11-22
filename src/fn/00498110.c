/* Rebuilt from lomse.exe FUN_00498110 @ 0x00498110 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00498110 1
int __fastcall rb_00498110(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 8);
  if (iVar1 == 0) {
    return 0;
  }
  return *(int *)(param_1 + 4) / iVar1;
}
