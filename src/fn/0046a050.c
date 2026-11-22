/* Rebuilt from lomse.exe FUN_0046a050 @ 0x0046a050 (241 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585174 (*(int * *)0x00585174)
#define FUN_00475360 ((undefined4 (__fastcall *)(int))0x00475360)

#define LOM_SELF_0046a050 1
undefined4 __fastcall rb_0046a050(int param_1,undefined4 unused_reg_1,int unused_stack_0)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uchar _fr[0x78] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_6c[9];
  typedef undefined4 * _t_puStack_48;
#define local_6c (*(_t_local_6c *)(_fr + 0x4))
#define puStack_48 (*(_t_puStack_48 *)(_fr + 0x28))
  
  if (((*(int *)(param_1 + 0x29e90) == 0) && (*(int *)(param_1 + 0x22e94) != 0)) &&
     (0 < *(int *)(param_1 + 0x29ecc))) {
    local_6c[0] = 0x6c;
    iVar1 = ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(local_6c), __typeof__(1), __typeof__(0)))(**(code **)(*DAT_00585174 + 100)))(DAT_00585174,0,local_6c,1,0);
    if (iVar1 == -0x7789fe3e) {
      FUN_00475360(0x584ae8);
      iVar1 = ((undefined4 (__stdcall *)(__typeof__(DAT_00585174), __typeof__(0), __typeof__(local_6c), __typeof__(1), __typeof__(0)))(**(code **)(*DAT_00585174 + 100)))(DAT_00585174,0,local_6c,1,0);
    }
    if (iVar1 != 0) {
      return 0;
    }
    if (unused_stack_0 == 0) {
      puVar3 = puStack_48;
      for (uVar2 = (*(int *)(param_1 + 0x2dd8) + 0xc0) * (*(int *)(param_1 + 0x2dd4) + 0x140) &
                   0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined1 *)puVar3 = 0;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    ((undefined4 (__stdcall *)(__typeof__(*(int **)(param_1 + 0x68c)), __typeof__(puStack_48)))(**(code **)(**(int **)(param_1 + 0x68c) + 0x80)))(*(int **)(param_1 + 0x68c),puStack_48);
    ((undefined4 (__thiscall *)(__typeof__((void *)(param_1 + 0x2be8)), __typeof__(unused_stack_0)))(**(code **)(*(int *)(param_1 + 0x2be8) + 4)))((void *)(param_1 + 0x2be8),unused_stack_0);
  }
  return 1;
#undef local_6c
#undef puStack_48
}
