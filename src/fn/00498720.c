/* Rebuilt from lomse.exe FUN_00498720 @ 0x00498720 (67 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00498720 1
undefined4 __thiscall rb_00498720(void *this,int param_1)

{
  int *piVar1;
  
  if (((param_1 < 0) || (9 < param_1)) ||
     (piVar1 = *(int **)(param_1 * 0x10 + 0x5e4 + (int)this), piVar1 == (int *)0x0)) {
    return 1;
  }
  do {
    if (*(int *)(*piVar1 + 0x68) == 0xc) {
      return 0;
    }
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  return 1;
}
