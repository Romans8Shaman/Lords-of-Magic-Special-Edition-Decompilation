/* Rebuilt from lomse.exe FUN_004cff60 @ 0x004cff60 (270 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004cff60 1
void __fastcall rb_004cff60(void *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar5 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    piVar4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar5 = 0;
    piVar4 = local_4;
  }
  iVar1 = 0;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(int **)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
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
    local_8 = local_4;
  }
  else if (uVar3 == 2) {
    local_8 = (int *)((int)local_4 >> 8);
  }
  else {
    if (uVar3 != 4) {
      *(undefined4 *)((int)param_1 + 0x90) = 0xe;
      FUN_004d4550(param_1);
      *(undefined4 *)((int)param_1 + 0x90) = 0;
      *(undefined4 *)((int)param_1 + 0xa4) = 0;
      return;
    }
    lVar6 = __ftol((float10)__BC(float, local_4));
    local_8 = (int *)lVar6;
  }
  if (0 < (int)local_8) {
    do {
      FUN_004d05e0(param_1,uVar5,piVar4);
      iVar2 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar2 != 0) {
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)local_8);
  }
  return;
#undef local_8
#undef local_4
}
