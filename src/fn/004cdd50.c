/* Rebuilt from lomse.exe FUN_004cdd50 @ 0x004cdd50 (207 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define _DAT_0054dd18 (*(double *)0x0054dd18)

#define LOM_SELF_004cdd50 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall rb_004cdd50(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    local_4 = (float)__BC(int, local_4);
  }
  else if (uVar3 == 2) {
    local_4 = (float)__BC(int, local_4) * (float)_DAT_0054dd18;
  }
  else if (uVar3 != 4) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    goto LAB_004cdde8;
  }
  if (*(int *)((int)param_1 + 0x54) != 0) {
    iVar1 = *(int *)((int)param_1 + 0x50);
    iVar2 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    *(undefined4 *)(iVar1 + iVar2 * 8) = 4;
    *(float *)(iVar1 + 4 + iVar2 * 8) = SQRT(local_4);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x90) = 3;
LAB_004cdde8:
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_4
}
