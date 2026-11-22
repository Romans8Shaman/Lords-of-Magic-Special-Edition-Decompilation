/* Rebuilt from lomse.exe op_cost2castspell @ 0x00426130 (339 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_0041cf40 ((undefined4 (__thiscall *)(void *, int *))0x0041cf40)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00426130 1
void __cdecl rb_00426130(void *vm)

{
  void *this;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_48[2];
  typedef float _t_fStack_40;
  typedef float _t_afStack_3c[10];
  typedef int _t_iStack_14;
  typedef undefined4 _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define aiStack_48 (*(_t_aiStack_48 *)(_fr + 0x0))
#define fStack_40 (*(_t_fStack_40 *)(_fr + 0x8))
#define afStack_3c (*(_t_afStack_3c *)(_fr + 0xc))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x34))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x38))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x3c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x40))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x44))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_40 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    afStack_3c[0] = fStack_40;
  }
  else if (uVar3 == 2) {
    afStack_3c[0] = __BC(float, (__BC(int, fStack_40) >> 8));
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_40);
    afStack_3c[0] = __BC(float, lVar5);
  }
  iVar1 = FUN_0041bf10(this,(int *)&vm,aiStack_48);
  if (iVar1 != 0) {
    afStack_3c[1] = __BC(float, (int)0xffffffff);
    afStack_3c[2] = __BC(float, (int)0xffffffff);
    afStack_3c[3] = __BC(float, (int)0xffffffff);
    afStack_3c[4] = __BC(float, (int)0xffffffff);
    afStack_3c[5] = __BC(float, (int)0xffffffff);
    afStack_3c[6] = __BC(float, (int)0xffffffff);
    afStack_3c[7] = __BC(float, (int)0xffffffff);
    afStack_3c[8] = __BC(float, (int)0xffffffff);
    uStack_10 = 0xffffffff;
    uStack_c = 0xffffffff;
    uStack_8 = 0xffffffff;
    uStack_4 = 0xffffffff;
    afStack_3c[9] = *(float *)((int)vm + 0x28);
    iStack_14 = aiStack_48[0];
    uVar2 = FUN_0041cf40(vm,(int *)afStack_3c);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef aiStack_48
#undef fStack_40
#undef afStack_3c
#undef iStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
