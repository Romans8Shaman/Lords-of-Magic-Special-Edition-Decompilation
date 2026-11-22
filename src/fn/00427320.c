/* Rebuilt from lomse.exe op_resetspecialeffectflag @ 0x00427320 (278 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0052b090 ((undefined4 (__thiscall *)(void *, int, int))0x0052b090)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00427320 1
void __cdecl rb_00427320(void *vm)

{
  void *this;
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_aiStack_c[2];
  typedef float _t_fStack_4;
#define aiStack_c (*(_t_aiStack_c *)(_fr + 0x4))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
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
    fVar4 = fStack_4;
  }
  else if (uVar3 == 2) {
    fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar3 != 4) {
      FUN_00404ab0(this,0xe);
      goto LAB_004273ad;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar4 = __BC(float, lVar5);
  }
  iVar1 = FUN_0041bf10(this,aiStack_c,(int *)&vm);
  if (iVar1 != 0) {
    FUN_0052b090((void *)(aiStack_c[0] + 0xc4 + (int)vm * 0x4c),__BC(int, fVar4),0);
    return;
  }
LAB_004273ad:
  if (*(int *)((int)this + 0x54) == 0) {
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  iVar2 = *(int *)((int)this + 0x54) + -1;
  *(int *)((int)this + 0x54) = iVar2;
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
  *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
  return;
#undef aiStack_c
#undef fStack_4
}
