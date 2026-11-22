/* Rebuilt from lomse.exe FUN_0047a7b0 @ 0x0047a7b0 (119 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00478f60 ((undefined4 (__stdcall *)(int *))0x00478f60)

#define LOM_SELF_0047a7b0 1
void __fastcall rb_0047a7b0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x13b4) != 0) {
    piVar1 = *(int **)(param_1 + 0x780);
    if (piVar1 != (int *)0x0) {
      ((undefined4 (__stdcall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x48)))(piVar1);
      FUN_00478f60(*(int **)(param_1 + 0x780));
      ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x780))))(**(code **)(**(int **)(param_1 + 0x780) + 8)))(*(int **)(param_1 + 0x780));
      *(undefined4 *)(param_1 + 0x780) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x784);
    if (piVar1 != (int *)0x0) {
      ((undefined4 (__stdcall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x48)))(piVar1);
      FUN_00478f60(*(int **)(param_1 + 0x784));
      ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x784))))(**(code **)(**(int **)(param_1 + 0x784) + 8)))(*(int **)(param_1 + 0x784));
      *(undefined4 *)(param_1 + 0x784) = 0;
    }
  }
  return;
}
