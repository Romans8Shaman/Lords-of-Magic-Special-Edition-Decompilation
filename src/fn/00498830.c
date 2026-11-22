/* Rebuilt from lomse.exe FUN_00498830 @ 0x00498830 (80 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004062c0 ((undefined4 (__stdcall *)(int))0x004062c0)

#define LOM_SELF_00498830 1
undefined4 __thiscall rb_00498830(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((param_1 < 0) || (9 < param_1)) ||
      (piVar2 = *(int **)(param_1 * 0x10 + 0x5e4 + (int)this), piVar2 == (int *)0x0)) ||
     (piVar2 == (int *)0x0)) {
    return 0;
  }
  do {
    iVar1 = FUN_004062c0(*(int *)(*piVar2 + 0x28));
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  return 0;
}
