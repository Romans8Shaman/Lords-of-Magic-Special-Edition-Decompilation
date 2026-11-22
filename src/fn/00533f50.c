/* Rebuilt from lomse.exe FUN_00533f50 @ 0x00533f50 (170 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00533f50 1
uint __cdecl rb_00533f50(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) ||
     ((iVar2 = *(int *)(iVar1 + 4), iVar2 != 0x2a && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(*(int *)(iVar1 + 8))))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x3c);
  if (iVar1 != 0) {
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(iVar1)))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
  if (iVar1 != 0) {
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(iVar1)))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x30);
  if (iVar1 != 0) {
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(iVar1)))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(*(undefined4 *)(param_1 + 0x1c))))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}
