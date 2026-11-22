/* Rebuilt from lomse.exe op_setbarterslot @ 0x00432e50 (490 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, float *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00432a60 ((undefined4 (__thiscall *)(void *, int, int))0x00432a60)
#define FUN_00432b30 ((undefined4 (__cdecl *)(uint, int *, uint *, uint *, uint *))0x00432b30)
#define FUN_00432d40 ((undefined4 (__thiscall *)(void *, undefined1, short, short, undefined1))0x00432d40)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define s_setbarterslot___no_such_slot_00556038 (*(char (*)[])0x00556038)

#define LOM_SELF_00432e50 1
void __cdecl rb_00432e50(void *vm)

{
  void *this;
  uint uVar1;
  int iVar2;
  float fVar3;
  void *this_00;
  float fVar4;
  longlong lVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_auStack_20[4];
  typedef short _t_asStack_1c[2];
  typedef short _t_asStack_18[2];
  typedef undefined1 _t_auStack_14[4];
  typedef float _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef float _t_fStack_4;
#define auStack_20 (*(_t_auStack_20 *)(_fr + 0x0))
#define asStack_1c (*(_t_asStack_1c *)(_fr + 0x4))
#define asStack_18 (*(_t_asStack_18 *)(_fr + 0x8))
#define auStack_14 (*(_t_auStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define fStack_4 (*(_t_fStack_4 *)(_fr + 0x1c))
  
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
  fVar4 = fStack_4;
  if (uVar1 != 1) {
    if (uVar1 == 2) {
      fVar4 = __BC(float, (__BC(int, fStack_4) >> 8));
    }
    else {
      if (uVar1 != 4) goto LAB_00433029;
      lVar5 = __ftol((float10)fStack_4);
      fVar4 = __BC(float, lVar5);
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
    fVar3 = fStack_4;
  }
  else if (uVar1 == 2) {
    fVar3 = __BC(float, (__BC(int, fStack_4) >> 8));
  }
  else {
    if (uVar1 != 4) {
LAB_00433029:
      FUN_00404ab0(this,0xe);
      return;
    }
    lVar5 = __ftol((float10)fStack_4);
    fVar3 = __BC(float, lVar5);
  }
  this_00 = (void *)FUN_00432a60(&DAT_00584cd4,__BC(int, fVar3),(int)vm);
  if (this_00 == (void *)0x0) {
    FUN_004d41c0(this,s_setbarterslot___no_such_slot_00556038);
    return;
  }
  FUN_00432b30(__BC(uint, fVar4),(int *)auStack_14,(uint *)asStack_18,(uint *)asStack_1c,
               (uint *)auStack_20);
  FUN_00432d40(this_00,auStack_14[0],asStack_18[0],asStack_1c[0],auStack_20[0]);
  return;
#undef auStack_20
#undef asStack_1c
#undef asStack_18
#undef auStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef fStack_4
}
