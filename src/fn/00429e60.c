/* Rebuilt from lomse.exe op_setartifactdata @ 0x00429e60 (483 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0041bf10 ((undefined4 (__cdecl *)(void *, int *, int *))0x0041bf10)
#define FUN_00428840 ((int (__thiscall *)(void *, int))0x00428840)
#define FUN_00428f40 ((bool (__thiscall *)(void *, void *, int))0x00428f40)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_artifact_not_found_00555de4 (*(char (*)[])0x00555de4)

#define LOM_SELF_00429e60 1
void __cdecl rb_00429e60(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  int iVar2;
  undefined4 uVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_24;
  typedef int _t_iStack_20;
  typedef uint _t_uStack_1c;
  typedef undefined4 _t_fStack_18;
  typedef undefined4 _t_fStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_uStack_c;
  typedef undefined4 _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define iStack_24 (*(_t_iStack_24 *)(_fr + 0x4))
#define iStack_20 (*(_t_iStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x10))
#define fStack_14 (*(_t_fStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_8 = 0;
    uVar3 = uStack_4;
  }
  if ((char)uStack_8 == '\0') {
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)this + 0x90) = 6;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    uStack_c = uStack_4;
  }
  iVar1 = FUN_004026a0(&uStack_10,&uStack_1c,(uint *)&fStack_14,&fStack_18);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar1 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar1;
      uStack_10 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
      uStack_c = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_10 = 0;
      uStack_c = uStack_4;
    }
    iVar1 = FUN_004026a0(&uStack_10,(uint *)&vm,(uint *)&fStack_18,&fStack_14);
    if (iVar1 != 0) {
      iVar1 = FUN_0041bf10(this,&iStack_20,&iStack_24);
      if (iVar1 == 0) {
        return;
      }
      this_00 = (void *)FUN_00428840((void *)(iStack_20 + 0xc4 + iStack_24 * 0x4c),(int)vm);
      if (this_00 == (void *)0x0) {
        FUN_004d41c0(this,s_artifact_not_found_00555de4);
        return;
      }
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar1 = *(int *)((int)this + 0x50);
        iVar2 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar2;
        *(undefined4 *)(iVar1 + iVar2 * 8) = uStack_8;
        *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar3;
      }
      FUN_00428f40(this_00,this,uStack_1c);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef iStack_24
#undef iStack_20
#undef uStack_1c
#undef fStack_18
#undef fStack_14
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
