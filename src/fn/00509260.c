/* Rebuilt from lomse.exe FUN_00509260 @ 0x00509260 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00509260 1
int __cdecl rb_00509260(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = param_1[2] - param_2[2];
  if (iVar1 == 0) {
    iVar1 = *(int *)*param_1 - *(int *)*param_2;
  }
  return iVar1;
}
