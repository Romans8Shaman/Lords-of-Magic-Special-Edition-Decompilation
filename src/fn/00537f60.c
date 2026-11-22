/* Rebuilt from lomse.exe FUN_00537f60 @ 0x00537f60 (52 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00537160 ((undefined4 (__cdecl *)(int *, int, int *))0x00537160)

#define LOM_SELF_00537f60 1
undefined4 __cdecl rb_00537f60(int *param_1,int param_2)

{
  FUN_00537160(param_1,param_2,(int *)0x0);
  ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_2 + 0x28)), __typeof__(param_1[9])))(**(code **)(param_2 + 0x24)))(*(undefined4 *)(param_2 + 0x28),param_1[9]);
  ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_2 + 0x28)), __typeof__(param_1)))(**(code **)(param_2 + 0x24)))(*(undefined4 *)(param_2 + 0x28),param_1);
  return 0;
}
