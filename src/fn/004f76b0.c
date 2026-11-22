/* Rebuilt from lomse.exe FUN_004f76b0 @ 0x004f76b0 (185 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1b8 (*(undefined4 *)0x005aa1b8)
#define FUN_00487590 ((undefined4 * (__fastcall *)(undefined4 *))0x00487590)
#define FUN_004875f0 ((undefined4 (__fastcall *)(void *))0x004875f0)
#define FUN_00487610 ((undefined4 (__thiscall *)(void *, int))0x00487610)
#define FUN_00487650 ((undefined4 (__thiscall *)(void *, int))0x00487650)

#define LOM_SELF_004f76b0 1
void __fastcall rb_004f76b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_20[5];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))

  iVar4 = 0;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (-1 < *(int *)(param_1 + 0x18)) {
      iVar2 = *(int *)(param_1 + 0x18) + 1;
      do {
        if (*piVar1 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (iVar3 != 0) {
      DAT_005aa1b8 = 10;
      FUN_00487590(local_20);
      FUN_00487610(local_20,iVar3);
      iVar3 = 0;
      if (-1 < *(int *)(param_1 + 0x18)) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 8) + iVar4 * 4);
          if (piVar1 != (int *)0x0) {
            iVar3 = iVar3 + 1;
            FUN_00487650(local_20,iVar3);
            ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x2c)))(piVar1);
            ((undefined4 (__thiscall *)(__typeof__(piVar1)))(**(code **)(*piVar1 + 0x1c)))(piVar1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= *(int *)(param_1 + 0x18));
      }
      FUN_004875f0(local_20);
    }
  }
  return;
#undef local_20
}
