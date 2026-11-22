/* Rebuilt from lomse.exe op_xywh @ 0x004ddc40 (528 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00493390 ((int (__fastcall *)(int *, undefined4, undefined4, undefined4, undefined4, undefined4))0x00493390)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004ddc40 1
void __cdecl rb_004ddc40(void *vm)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
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
    iVar2 = FUN_004026a0(&uStack_8,&uStack_1c,(uint *)&fStack_10,&fStack_c);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
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
      iVar2 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&fStack_10,&fStack_c);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
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
        iVar2 = FUN_004026a0(&uStack_8,&uStack_14,(uint *)&fStack_10,&fStack_c);
        if (iVar2 == 0) {
          FUN_00404ab0(this,0xe);
          return;
        }
        iVar2 = FUN_00493390(&DAT_005a7b50,uStack_18,uStack_14,uStack_18,uStack_1c,vm);
        if (*(int *)((int)this + 0x54) != 0) {
          iVar3 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar3;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
          return;
        }
        *(undefined4 *)((int)this + 0x90) = 3;
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
