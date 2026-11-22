/* Rebuilt from lomse.exe FUN_00537200 @ 0x00537200 (108 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00537160 ((undefined4 (__cdecl *)(int *, int, int *))0x00537160)

#define LOM_SELF_00537200 1
int * __cdecl rb_00537200(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(1), __typeof__(0x3c)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),1,0x3c);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(1), __typeof__(param_3)))(**(code **)(param_1 + 0x20)))(*(undefined4 *)(param_1 + 0x28),1,param_3);
  piVar1[9] = iVar2;
  if (iVar2 == 0) {
    ((undefined4 (__cdecl *)(__typeof__(*(undefined4 *)(param_1 + 0x28)), __typeof__(piVar1)))(**(code **)(param_1 + 0x24)))(*(undefined4 *)(param_1 + 0x28),piVar1);
    return (int *)0x0;
  }
  piVar1[10] = param_3 + iVar2;
  piVar1[0xd] = param_2;
  *piVar1 = 0;
  FUN_00537160(piVar1,param_1,(int *)0x0);
  return piVar1;
}
