/* Rebuilt from lomse.exe op_enumconetargetarmies @ 0x0040a440 (602 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00409f70 ((int (__thiscall *)(void *, int, int, int, int *, int *))0x00409f70)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040a440 1
void __cdecl rb_0040a440(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_28;
  typedef uint _t_uStack_24;
  typedef undefined4 _t_fStack_20;
  typedef undefined4 _t_fStack_1c;
  typedef int _t_iStack_18;
  typedef int _t_iStack_14;
  typedef uint _t_uStack_10;
  typedef int * _t_piStack_c;
  typedef uint _t_uStack_8;
  typedef int * _t_piStack_4;
#define uStack_28 (*(_t_uStack_28 *)(_fr + 0x0))
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define fStack_20 (*(_t_fStack_20 *)(_fr + 0x8))
#define fStack_1c (*(_t_fStack_1c *)(_fr + 0xc))
#define iStack_18 (*(_t_iStack_18 *)(_fr + 0x10))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x14))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x18))
#define piStack_c (*(_t_piStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define piStack_4 (*(_t_piStack_4 *)(_fr + 0x24))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar2 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar2;
    uStack_10 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar2 * 8);
    piStack_c = *(int **)(*(int *)((int)vm + 0x50) + -4 + iVar2 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    uStack_10 = 0;
    piStack_c = piStack_4;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_1c,&fStack_20);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_28,(uint *)&fStack_20,&fStack_1c);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  if (*(int *)((int)this + 0x54) < *(int *)((int)this + 0x58)) {
    iVar2 = *(int *)((int)this + 0x54) + 1;
    *(int *)((int)this + 0x54) = iVar2;
    uStack_8 = *(uint *)(*(int *)((int)this + 0x50) + -8 + iVar2 * 8);
    piStack_4 = *(int **)(*(int *)((int)this + 0x50) + -4 + iVar2 * 8);
  }
  else {
    FUN_00404ab0(this,6);
    uStack_8 = 0;
  }
  iVar2 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_20,&fStack_1c);
  if (iVar2 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  iVar2 = 0;
  do {
    iVar3 = FUN_00409f70(&DAT_005ae958,uStack_28,(int)vm,iVar2,&iStack_14,&iStack_18);
    if ((((iVar3 != -1) && (iVar3 = FUN_004a8330(&DAT_005ae958,iVar3,0), iVar3 != 0)) &&
        (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) && (*(uint *)(iVar3 + 0x48) != uStack_24)) {
      uVar1 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)this + 0x54) == 0) {
        *(undefined4 *)((int)this + 0x90) = 3;
        FUN_004d4550(this);
        *(undefined4 *)((int)this + 0x90) = 0;
        *(undefined4 *)((int)this + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 0x50);
        iVar4 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar1;
      }
      FUN_004d05e0(this,uStack_10,piStack_c);
      iVar3 = *(int *)((int)this + 0x6c);
      *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x70);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar2 = iVar2 + 1;
    if (0x18 < iVar2) {
      return;
    }
  } while( true );
#undef uStack_28
#undef uStack_24
#undef fStack_20
#undef fStack_1c
#undef iStack_18
#undef iStack_14
#undef uStack_10
#undef piStack_c
#undef uStack_8
#undef piStack_4
}
