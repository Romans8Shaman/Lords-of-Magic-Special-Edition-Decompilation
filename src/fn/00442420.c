/* Rebuilt from lomse.exe op_cantrainmultiple @ 0x00442420 (385 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004409e0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004409e0)
#define FUN_00441350 ((undefined4 (__thiscall *)(void *, uint, undefined4, uint *, int))0x00441350)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00442420 1
void __cdecl rb_00442420(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef void * _t_pvStack_28;
  typedef float _t_fStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef float _t_fStack_18;
  typedef uint _t_auStack_14[5];
#define pvStack_28 (*(_t_pvStack_28 *)(_fr + 0x0))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x10))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_18 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar3 = 0;
  }
  uVar3 = uVar3 & 0xff;
  if (uVar3 == 1) {
    fVar5 = fStack_18;
  }
  else if (uVar3 == 2) {
    fVar5 = __BC(float, (__BC(int, fStack_18) >> 8));
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar6 = __ftol((float10)fStack_18);
    fVar5 = __BC(float, lVar6);
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_1c = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_18 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_1c = 0;
  }
  iVar2 = FUN_004026a0(&uStack_1c,(uint *)&vm,&uStack_20,&fStack_24);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_004409e0(this,&pvStack_28);
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00441350(pvStack_28,(uint)vm,0,auStack_14,__BC(int, fVar5));
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar4 * 8) = -(uint)(iVar2 != 0);
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef pvStack_28
#undef fStack_24
#undef uStack_20
#undef uStack_1c
#undef fStack_18
#undef auStack_14
}
