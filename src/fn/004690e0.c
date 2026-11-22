/* Rebuilt from lomse.exe op_getchampiontarget @ 0x004690e0 (732 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(undefined4 *)0x005ae98c)
#define DAT_005ae998 (*(uint *)0x005ae998)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_0041be40 ((undefined4 (__cdecl *)(void *, undefined4 *))0x0041be40)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_005071c0 ((undefined4 (__thiscall *)(void *, int))0x005071c0)
#define FUN_00525e80 ((undefined4 (__fastcall *)(int))0x00525e80)

#define LOM_SELF_004690e0 1
void __cdecl rb_004690e0(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef uint _t_uStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x0))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0x4))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x8))
#define uStack_14 (*(_t_uStack_14 *)(_fr + 0xc))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x10))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x14))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x18))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x1c))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_14,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar1 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar1;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar1 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)this + 0x50) + -4 + iVar1 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar1 = FUN_004026a0(&uStack_8,&uStack_20,&uStack_1c,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar1 = FUN_0041be40(this,&vm);
  if (iVar1 != 0) {
    uVar4 = 0xffffffff;
    uStack_1c = 0xffffffff;
    fStack_c = DAT_005ae98c;
    uVar5 = DAT_005ae998;
    if ((int)DAT_005ae998 <= __BC(int, DAT_005ae98c)) {
      do {
        this_00 = (void *)FUN_004f6000(&DAT_005ae974,uVar5);
        if (((((this_00 != (void *)0x0) && (*(int *)((int)this_00 + 4) == 0)) &&
             (*(int *)((int)vm + 0x48) != *(int *)((int)this_00 + 0x48))) &&
            ((iVar1 = FUN_00525e80((int)this_00 + 0xc4), iVar1 != 0 &&
             (iVar1 = FUN_00407d50((int)this_00), iVar1 == 0)))) &&
           ((iVar1 = FUN_005071c0(this_00,*(int *)((int)this_00 + 0x48)), iVar1 != 0 &&
            (uVar2 = FUN_004a8960(&DAT_005ae958,*(int *)((int)vm + 0x1c),
                                  *(int *)((int)this_00 + 0x1c)), (int)uVar2 < (int)uStack_20)))) {
          if (((uVar5 == uStack_18) || (uVar5 == uStack_14)) || (uVar5 == uStack_10)) {
            uStack_1c = uVar5;
          }
          else {
            uVar4 = uVar5;
          }
          uStack_20 = uVar2;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 <= __BC(int, fStack_c));
    }
    if ((uVar4 == 0xffffffff) && (uStack_1c != 0xffffffff)) {
      uVar4 = uStack_1c;
    }
    if (*(int *)((int)this + 0x54) != 0) {
      iVar1 = *(int *)((int)this + 0x50);
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(uint *)(iVar1 + 4 + iVar3 * 8) = uVar4;
      return;
    }
    *(undefined4 *)((int)this + 0x90) = 3;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  return;
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef uStack_14
#undef uStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
