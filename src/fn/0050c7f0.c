/* Rebuilt from lomse.exe FUN_0050c7f0 @ 0x0050c7f0 (55 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0050c7f0 1
undefined4 __fastcall rb_0050c7f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x30) & 4) != 0) {
    return 1;
  }
  piVar1 = *(int **)(param_1 + 0x50);
  if ((piVar1 != (int *)0x0) && ((*(uint *)(param_1 + 0x30) & 0x100) != 0)) {
    iVar2 = 0;
    while ((*piVar1 < 0 || ((*(byte *)(piVar1 + 1) & 1) != 0))) {
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 3;
      if (9 < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}
