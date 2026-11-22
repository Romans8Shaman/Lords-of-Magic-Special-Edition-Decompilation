/* Rebuilt from lomse.exe FUN_0053d980 @ 0x0053d980 (66 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053dd60 ((uint (__cdecl *)(uint, int *))0x0053dd60)

#define LOM_SELF_0053d980 1
void __cdecl rb_0053d980(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_0053dd60(param_1,param_2);
  }
  else {
    *(char *)*param_2 = (char)param_1;
    uVar2 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}
