/* Rebuilt from lomse.exe FUN_00438350 @ 0x00438350 (29 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00438350 1
int __cdecl rb_00438350(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8) - *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc);
  }
  return iVar1;
}
