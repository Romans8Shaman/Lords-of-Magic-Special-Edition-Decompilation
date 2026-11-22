/* Rebuilt from lomse.exe FUN_0053eea0 @ 0x0053eea0 (37 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0053eea0 1
int __cdecl rb_0053eea0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + *param_2;
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(param_1 + iVar1) + param_2[2]) + iVar1;
  }
  return iVar2;
}
