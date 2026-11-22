/* Rebuilt from lomse.exe FUN_004cdac0 @ 0x004cdac0 (276 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cdac0 1
void __fastcall rb_004cdac0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    local_8 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  if ((char)local_8 == '\x06') {
    iVar1 = local_4[1] + -1;
    while (-1 < iVar1) {
      if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
        iVar2 = *(int *)((int)param_1 + 0x54) + 1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        uVar4 = *(undefined4 *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
        piVar3 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)param_1 + 0x90) = 6;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
        uVar4 = 0;
        piVar3 = local_4;
      }
      iVar1 = iVar1 + -1;
      iVar2 = *local_4;
      *(undefined4 *)(iVar2 + 8 + iVar1 * 8) = uVar4;
      *(int **)(iVar2 + 0xc + iVar1 * 8) = piVar3;
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar2 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = local_8;
      *(int **)(iVar1 + 4 + iVar2 * 8) = local_4;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_8
#undef local_4
}
