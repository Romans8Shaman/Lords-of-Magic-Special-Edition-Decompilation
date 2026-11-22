/* Rebuilt from lomse.exe op_rerunbrain @ 0x004109d0 (286 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aeed0 (*(undefined *)0x005aeed0)
#define FUN_0040eb70 ((undefined4 (__thiscall *)(void *, void *, int, undefined4))0x0040eb70)
#define FUN_0040eec0 ((undefined4 (__thiscall *)(void *, undefined4 *, int *))0x0040eec0)
#define FUN_0040f4e0 ((int (__thiscall *)(void *, int))0x0040f4e0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_no_such_brain_005557b8 (*(char (*)[])0x005557b8)

#define LOM_SELF_004109d0 1
void __cdecl rb_004109d0(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  int iVar2;
  float fVar3;
  uint uVar4;
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
    uVar4 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    fStack_4 = *(float *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uVar4 = 0;
  }
  uVar4 = uVar4 & 0xff;
  fVar3 = fStack_4;
  if (uVar4 != 1) {
    if (uVar4 == 2) {
      fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar4 != 4) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
        goto LAB_00410a8a;
      }
      lVar5 = __ftol((float10)fStack_4);
      fVar3 = __BC(float, lVar5);
    }
  }
  this_00 = (void *)FUN_0040f4e0(&DAT_005aeed0,__BC(int, fVar3));
  if (this_00 != (void *)0x0) {
    aiStack_c[0] = 0;
    vm = (void *)0xffffffff;
    FUN_0040eec0(this_00,aiStack_c,(int *)&vm);
    FUN_0040eb70(this_00,this,aiStack_c[0],vm);
    return;
  }
  FUN_004d41c0(this,s_no_such_brain_005557b8);
  if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar2;
    iVar1 = *(int *)((int)this + 0x50);
    *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
    return;
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_00410a8a:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef aiStack_c
#undef fStack_4
}
