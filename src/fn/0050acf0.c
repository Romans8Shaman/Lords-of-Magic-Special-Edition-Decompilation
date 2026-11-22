/* Rebuilt from lomse.exe op_getattitude @ 0x0050acf0 (294 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004bdce0 ((undefined4 (__cdecl *)(void *, undefined4 *))0x004bdce0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no__p2__player_0057398c (*(char (*)[])0x0057398c)

#define LOM_SELF_0050acf0 1
void __cdecl rb_0050acf0(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  int iVar3;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_14;
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define iStack_14 (*(_t_iStack_14 *)(_fr + 0x4))
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x8))
#define uStack_c (*(_t_uStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
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
  iVar2 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    iVar2 = FUN_004bdce0(this,&iStack_14);
    if (iVar2 == 0) {
      return;
    }
    if (((int)vm < 0) || (0xf < (int)vm)) {
      iVar2 = 0;
    }
    else {
      iVar2 = iStack_14 + 0xd28 + (int)vm * 0x88;
    }
    if (iVar2 == 0) {
      FUN_004d41c0(this,s_no__p2__player_0057398c);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = 0xffffffff;
        return;
      }
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0x10);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar3 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar3;
        iVar2 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef iStack_14
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
