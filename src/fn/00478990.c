/* Rebuilt from lomse.exe FUN_00478990 @ 0x00478990 (140 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00478990 1
undefined4 __fastcall rb_00478990(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef byte _t_local_8[4];
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (param_1[0x4ed] == 0) {
    return 0;
  }
  piVar4 = param_1 + 0x3c;
  iVar3 = 5;
  piVar5 = param_1;
  local_4 = param_1;
  do {
    if ((*piVar4 == piVar5[0x4e6]) && (piVar1 = (int *)*param_1, piVar1 != (int *)0x0)) {
      ((undefined4 (__stdcall *)(__typeof__(piVar1), __typeof__(local_8)))(**(code **)(*piVar1 + 0x24)))(piVar1,local_8);
      if ((local_8[0] & 4) != 0) {
        ((undefined4 (__stdcall *)(__typeof__((int *)*param_1)))(**(code **)(*(int *)*param_1 + 0x48)))((int *)*param_1);
        ((undefined4 (__stdcall *)(__typeof__((int *)*param_1)))(**(code **)(*(int *)*param_1 + 8)))((int *)*param_1);
        *param_1 = 0;
        piVar5 = piVar4;
        for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar5 = -1;
          piVar5 = piVar5 + 1;
        }
        piVar5 = local_4;
      }
    }
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 7;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 1;
#undef local_8
#undef local_4
}
