/* Rebuilt from lomse.exe FUN_004cf960 @ 0x004cf960 (180 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004cf960 1
void __fastcall rb_004cf960(void *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    iVar4 = 0;
  }
  if ((iVar4 == 1) || (iVar4 == 2)) {
    fVar2 = __BC(float, -__BC(int, local_4));
  }
  else {
    if (iVar4 != 4) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      goto LAB_004cf9fb;
    }
    fVar2 = -local_4;
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar3 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar3;
    iVar1 = *(int *)((int)param_1 + 0x50);
    *(int *)(iVar1 + iVar3 * 8) = iVar4;
    *(float *)(iVar1 + 4 + iVar3 * 8) = fVar2;
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004cf9fb:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_4
}
