/* Rebuilt from lomse.exe op_idiv @ 0x004cb090 (346 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_divide_by_zero_0055e1d4 (*(char (*)[])0x0055e1d4)

#define LOM_SELF_004cb090 1
void __cdecl rb_004cb090(void *vm)

{
  void *this;
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef float _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef float _t_fStack_c;
  typedef float _t_fStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fVar2 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar4 = 0;
    fVar2 = fStack_4;
  }
  fStack_4 = fVar2;
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    uStack_10 = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    fStack_c = fStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,&uStack_14,&fStack_18);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    uVar4 = uVar4 & 0xff;
    if (uVar4 != 1) {
      if (uVar4 == 2) {
        fVar2 = __BC(float, (__BC(int, fVar2) >> 8));
      }
      else {
        if (uVar4 != 4) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
          goto LAB_004cb1be;
        }
        lVar5 = __ftol((float10)fStack_4);
        fVar2 = __BC(float, lVar5);
      }
    }
    if (fVar2 == 0.0) {
      FUN_004d41c0(this,s_divide_by_zero_0055e1d4);
      fVar2 = fStack_4;
    }
    else {
      fVar2 = __BC(float, ((int)vm / __BC(int, fVar2)));
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(float *)(iVar1 + 4 + iVar3 * 8) = fVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
LAB_004cb1be:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_18
#undef uStack_14
#undef uStack_10
#undef fStack_c
#undef fStack_4
}
