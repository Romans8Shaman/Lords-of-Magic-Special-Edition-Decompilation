/* Rebuilt from lomse.exe FUN_00538770 @ 0x00538770 (62 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00538770 1
undefined4 __cdecl rb_00538770(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    *(int *)(param_1 + -4) = iVar2;
    iVar2 = param_1;
    param_1 = iVar1;
  }
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + -4);
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_2 + 0x28)), __typeof__(iVar2 + -8)))(**(code **)(param_2 + 0x24)))(*(undefined4 *)(param_2 + 0x28),iVar2 + -8);
    iVar2 = iVar1;
  }
  return 0;
}
