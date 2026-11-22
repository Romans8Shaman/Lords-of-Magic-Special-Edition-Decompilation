/* Rebuilt from lomse.exe FUN_00491c70 @ 0x00491c70 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00491c70 1
int __fastcall rb_00491c70(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *param_1) {
    piVar2 = (int *)param_1[1];
    do {
      if (*piVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *param_1);
  }
  return -1;
}
