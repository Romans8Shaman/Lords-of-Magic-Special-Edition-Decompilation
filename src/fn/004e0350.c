/* Rebuilt from lomse.exe op_enumplayerbuildings @ 0x004e0350 (359 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041da00 ((undefined4 (__fastcall *)(int))0x0041da00)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_004e0350 1
void __cdecl rb_004e0350(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int *this_00;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_18 (*(_t_fStack_18 *)(_fr + 0x0))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define piStack_c (*(_t_piStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
  this = vm;
  FUN_0040adb0(vm,&uStack_10);
  iVar2 = FUN_0041da00((int)this);
  if (iVar2 == 0) {
    if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) goto LAB_004e0391;
    FUN_00404ab0(this,0x12);
  }
  uStack_10 = 0;
LAB_004e0391:
  uVar5 = uStack_10;
  if (((char)uStack_10 == '\x06') && ((uStack_10 & 0x100) == 0)) {
    if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
      iVar2 = *(int *)((int)this + 0x54) + 1;
      *(int *)((int)this + 0x54) = iVar2;
      uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
    }
    else {
      FUN_00404ab0(this,6);
      uStack_8 = 0;
    }
    iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_14,&fStack_18);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      FUN_004d4550(this);
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0xa4) = 0;
      return;
    }
    for (this_00 = (int *)FUN_004fbe60(&DAT_005ae974,0,2); this_00 != (int *)0x0;
        this_00 = (int *)FUN_004fbe60(&DAT_005ae974,(int)this_00,2)) {
      pvVar3 = (void *)((undefined4 (__thiscall *)(__typeof__(this_00)))(**(code **)(*this_00 + 0x3c)))(this_00);
      if (pvVar3 == vm) {
        iVar2 = this_00[10];
        if (*(int *)((int)this + 0x54) == 0) {
          *(undefined4 *)((int)this + 0x90) = 3;
          FUN_004d4550(this);
          *(undefined4 *)((int)this + 0x90) = 0;
          *(undefined4 *)((int)this + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)this + 0x50);
          iVar4 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar4;
          *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar4 * 8) = iVar2;
          uVar5 = uStack_10;
        }
        FUN_004d05e0(this,uVar5,piStack_c);
        iVar2 = *(int *)((int)this + 0x6c);
        *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
        if (iVar2 != 0) {
          return;
        }
      }
    }
  }
  return;
#undef fStack_18
#undef uStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef uStack_4
}
