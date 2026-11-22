/* Rebuilt from lomse.exe op_getlocationatscreenxy @ 0x004e59c0 (345 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004a6180 ((int (__thiscall *)(void *, int, int))0x004a6180)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004e59c0 1
void __cdecl rb_004e59c0(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef float _t_fStack_c;
  typedef float _t_fStack_8;
  typedef float _t_fStack_4;
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define fStack_8 (*(_t_fStack_8 *)(_fr + 0x10))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x14))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    fStack_c = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    fStack_c = fStack_4;
  }
  iVar2 = FUN_004026a0(&uStack_10,(uint *)&fStack_4,&uStack_14,(float *)&vm);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uVar3 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      fStack_c = *(float *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      *(undefined4 *)((int)this + 0x90) = 6;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      uVar3 = 0;
      fStack_c = fStack_4;
    }
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 1) {
      fStack_8 = fStack_c;
    }
    else if (uVar3 == 2) {
      fStack_8 = __BC(float, (__BC(int, fStack_c) >> 8));
    }
    else {
      if (uVar3 != 4) {
        FUN_00404ab0(this,0xe);
        return;
      }
      lVar5 = __ftol((float10)fStack_c);
      fStack_8 = __BC(float, lVar5);
    }
    iVar2 = FUN_004a6180(&DAT_005ae958,__BC(int, fStack_8),__BC(int, fStack_4));
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
      *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_14
#undef uStack_10
#undef fStack_c
#undef fStack_8
#undef fStack_4
}
