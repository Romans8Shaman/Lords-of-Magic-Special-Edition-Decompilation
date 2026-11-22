/* Rebuilt from lomse.exe FUN_00479050 @ 0x00479050 (43 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00479050 1
void __stdcall rb_00479050(undefined4 *param_1,int *param_2)

{
  int *a1;
  int iVar1;
  
  a1 = (int *)*param_2;
  if (a1 != (int *)0x0) {
    ((undefined4 (__stdcall *)(__typeof__(a1)))(**(code **)(*a1 + 8)))(a1);
    *param_2 = 0;
    for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = 0xffffffff;
      param_1 = param_1 + 1;
    }
  }
  return;
}
