/* Rebuilt from lomse.exe FUN_00526210 @ 0x00526210 (62 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00526210 1
undefined4 __thiscall rb_00526210(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)this < 1) {
    return 0;
  }
  piVar1 = *(int **)((int)this + 8);
  while ((*piVar1 != param_1 || (piVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 2;
    if (*(int *)this <= iVar2) {
      return 0;
    }
  }
  return 1;
}
