/* Rebuilt from lomse.exe op_getbarterslot @ 0x00433040 (401 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cd4 (*(undefined4 *)0x00584cd4)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00432a60 ((undefined4 (__thiscall *)(void *, int, int))0x00432a60)
#define FUN_00432ae0 ((uint (__cdecl *)(int, uint, uint, uint))0x00432ae0)
#define FUN_00432c70 ((undefined4 (__thiscall *)(void *, int *, int *, int *, int *))0x00432c70)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00433040 1
void __cdecl rb_00433040(void *vm)

{
  void *this;
  int iVar1;
  void *this_00;
  int iVar2;
  uint uVar3;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_24;
  typedef uint _t_uStack_20;
  typedef uint _t_uStack_1c;
  typedef uint _t_uStack_18;
  typedef int _t_iStack_14;
  typedef undefined4 _t_fStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_24 (*(_t_uStack_24 *)(_fr + 0x4))
#define uStack_20 (*(_t_uStack_20 *)(_fr + 0x8))
#define uStack_1c (*(_t_uStack_1c *)(_fr + 0xc))
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x10))
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x14))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x18))
#define fStack_c (*(_t_fStack_c *)(_fr + 0x1c))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x20))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x24))
  
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&fStack_c,&fStack_10);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_24,(uint *)&fStack_10,&fStack_c);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      this_00 = (void *)FUN_00432a60(&DAT_00584cd4,uStack_24,(int)vm);
      if (this_00 == (void *)0x0) {
        if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = 0;
          return;
        }
      }
      else {
        FUN_00432c70(this_00,&iStack_14,(int *)&uStack_18,(int *)&uStack_1c,(int *)&uStack_20);
        uVar3 = FUN_00432ae0(iStack_14,uStack_18,uStack_1c,uStack_20);
        if (*(int *)((int)this + 0x54) != 0) {
          iVar2 = *(int *)((int)this + 0x54) + -1;
          *(int *)((int)this + 0x54) = iVar2;
          iVar1 = *(int *)((int)this + 0x50);
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(uint *)(iVar1 + 4 + iVar2 * 8) = uVar3;
          return;
        }
      }
      *(undefined4 *)((int)this + 0x90) = 3;
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_24
#undef uStack_20
#undef uStack_1c
#undef uStack_18
#undef iStack_14
#undef fStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
