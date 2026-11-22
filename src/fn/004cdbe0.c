/* Rebuilt from lomse.exe FUN_004cdbe0 @ 0x004cdbe0 (365 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004cdbe0 1
void __fastcall rb_004cdbe0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef float _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef float _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar4 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  if (uVar4 == 1) {
    fVar5 = local_4;
  }
  else if (uVar4 == 2) {
    fVar5 = __BC(float, (__BC(int, local_4) >> 8));
  }
  else {
    if (uVar4 != 4) {
      FUN_00404ab0(param_1,0xe);
      return;
    }
    lVar6 = __ftol((float10)local_4);
    fVar5 = __BC(float, lVar6);
  }
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    local_8 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_8 = 0;
  }
  iVar2 = FUN_004026a0(&local_8,&local_14,&local_c,&local_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
  }
  else {
    if (__BC(int, fVar5) < 1) {
      iVar2 = (int)local_14 >> (-SUB41(fVar5,0) & 0x1f);
    }
    else {
      iVar2 = local_14 << (SUB41(fVar5,0) & 0x1f);
    }
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar1 = *(int *)((int)param_1 + 0x50);
      iVar3 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 3;
  }
  FUN_004d4550(param_1);
  *(undefined4 *)((int)param_1 + 0x90) = 0;
  *(undefined4 *)((int)param_1 + 0xa4) = 0;
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
