/* Rebuilt from lomse.exe FUN_0042f4d0 @ 0x0042f4d0 (342 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_0042f4d0 1
undefined4 __thiscall rb_0042f4d0(void *this,void *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  if (*(char *)((int)this + 0xc38) == '\0') {
    return 0;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
    *(int *)(iVar2 + 4 + iVar1 * 8) = param_2;
  }
  if (*(int *)((int)param_1 + 0x54) == 0) {
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
  }
  else {
    iVar2 = *(int *)((int)param_1 + 0x50);
    iVar1 = *(int *)((int)param_1 + 0x54) + -1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    *(undefined4 *)(iVar2 + iVar1 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_3;
  }
  FUN_004d09a0(param_1,*(uint *)((int)this + 0xc38),*(int **)((int)this + 0xc3c),-1);
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar2 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar2 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 != 1) {
    if (uVar3 == 2) {
      return __BC(int, local_4) >> 8;
    }
    if (uVar3 == 4) {
      lVar4 = __ftol((float10)local_4);
      return (int)lVar4;
    }
    *(undefined4 *)((int)param_1 + 0x90) = 0xe;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    local_4 = __BC(float, param_2);
  }
  return __BC(undefined4, local_4);
#undef local_4
}
