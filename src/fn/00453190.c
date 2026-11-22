/* Rebuilt from lomse.exe FUN_00453190 @ 0x00453190 (89 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00453190 1
undefined4 __cdecl rb_00453190(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x348);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[9]) {
    iVar4 = 5;
    piVar2 = param_2;
    piVar3 = piVar1;
    do {
      piVar3 = piVar3 + 1;
      *piVar2 = *piVar2 + *piVar3;
      piVar2 = piVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 1;
}
