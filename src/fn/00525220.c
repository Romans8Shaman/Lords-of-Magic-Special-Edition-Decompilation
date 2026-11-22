/* Rebuilt from lomse.exe op_clearunitacks @ 0x00525220 (521 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00525220 1
void __cdecl rb_00525220(void *volatile param_1)

{
  void *this;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_local_10;
  typedef uint _t_local_c;
  typedef uint _t_local_8;
  typedef float _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  this = param_1;
  if (*(int *)((int)param_1 + 0x54) < *(int *)((int)param_1 + 0x58)) {
    iVar1 = *(int *)((int)param_1 + 0x54) + 1;
    *(int *)((int)param_1 + 0x54) = iVar1;
    uVar2 = *(uint *)(*(int *)((int)param_1 + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)param_1 + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x90) = 6;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar2 = 0;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    fVar5 = local_4;
  }
  else if (uVar2 == 2) {
    fVar5 = __BC(float, (__BC(int, local_4) >> 8));
  }
  else {
    if (uVar2 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)local_4);
    fVar5 = __BC(float, lVar6);
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    local_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    local_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    local_8 = 0;
  }
  iVar1 = FUN_004026a0(&local_8,(uint *)&param_1,&local_c,&local_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  if ((((int)param_1 < 0) || (DAT_005cd2f0 <= (int)param_1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + (int)param_1 * 1000;
  }
  if (iVar1 != 0) {
    if (__BC(int, fVar5) == 23) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 800) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x2f8);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 800) + -1);
      }
      *(undefined4 *)(iVar1 + 800) = 0;
      return;
    }
    if (__BC(int, fVar5) == 24) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x34c) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x324);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x34c) + -1);
      }
      *(undefined4 *)(iVar1 + 0x34c) = 0;
      return;
    }
    if (__BC(int, fVar5) == 25) {
      iVar3 = 0;
      if (0 < *(int *)(iVar1 + 0x378) + -1) {
        puVar4 = (undefined4 *)(iVar1 + 0x350);
        do {
          *puVar4 = 0xffffffff;
          iVar3 = iVar3 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar3 < *(int *)(iVar1 + 0x378) + -1);
      }
      *(undefined4 *)(iVar1 + 0x378) = 0;
    }
  }
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
