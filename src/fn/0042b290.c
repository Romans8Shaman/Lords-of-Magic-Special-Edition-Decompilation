/* Rebuilt from lomse.exe op_transferartifact @ 0x0042b290 (577 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_00428840 ((int (__thiscall *)(void *, int))0x00428840)
#define FUN_00429090 ((undefined4 (__stdcall *)(int, undefined4, int, undefined4, undefined4, undefined4))0x00429090)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_such_artifact_00555da0 (*(char (*)[])0x00555da0)
#define s_no_such_unit_00555df8 (*(char (*)[])0x00555df8)

#define LOM_SELF_0042b290 1
void __cdecl rb_0042b290(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x0))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uVar1 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar1 = 0;
  }
  uVar1 = uVar1 & 0xff;
  fVar3 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_0042b4c0;
      lVar5 = __ftol((float10)fStack_4);
      fVar3 = __BC(float, lVar5);
    }
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = FUN_0041be40(this,&iStack_18);
  if (iVar2 != 0) {
    if ((-1 < (int)vm) && ((int)vm < *(int *)(iStack_18 + 0x4c))) {
      if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
        iVar2 = *(int *)((int)this + 0x54) + 1;
        *(int *)((int)this + 0x54) = iVar2;
        uVar1 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
        fStack_4 = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
      }
      else {
        *(undefined4 *)((int)this + 0x90) = 6;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
        uVar1 = 0;
      }
      uVar1 = uVar1 & 0xff;
      if (uVar1 == 1) {
        fVar4 = fStack_4;
      }
      else if (uVar1 == 2) {
        fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
      }
      else {
        if (uVar1 != 4) {
LAB_0042b4c0:
          FUN_00404ab0(this,0xe);
          return;
        }
        lVar5 = __ftol((float10)fStack_4);
        fVar4 = __BC(float, lVar5);
      }
      iVar2 = FUN_0041be40(this,&iStack_14);
      if (iVar2 == 0) {
        return;
      }
      if ((-1 < __BC(int, fVar4)) && (__BC(int, fVar4) < *(int *)(iStack_14 + 0x4c))) {
        iVar2 = FUN_00428840((void *)(iStack_14 + 0xc4 + __BC(int, fVar4) * 0x4c),__BC(int, fVar3));
        if (iVar2 == 0) {
          FUN_004d41c0(this,s_no_such_artifact_00555da0);
          return;
        }
        FUN_00429090(iStack_14,__BC(undefined4, fVar4),iStack_18,vm,__BC(undefined4, fVar3),0);
        return;
      }
    }
    FUN_004d41c0(this,s_no_such_unit_00555df8);
  }
  return;
#undef iStack_18
#undef iStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef fStack_4
}
