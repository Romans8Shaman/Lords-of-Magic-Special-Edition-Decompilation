/* Rebuilt from lomse.exe FUN_00476f50 @ 0x00476f50 (27 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00476f50 1
int __cdecl rb_00476f50(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1] - param_2[1];
  if (iVar1 == 0) {
    iVar1 = *param_1 - *param_2;
  }
  return iVar1;
}
