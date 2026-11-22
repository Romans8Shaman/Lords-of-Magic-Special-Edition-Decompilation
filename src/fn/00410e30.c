/* Rebuilt from lomse.exe op_setcurrenttickalarmdata @ 0x00410e30 (360 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee88 (*(void * *)0x005aee88)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00410cf0 ((undefined4 (__thiscall *)(void *, void *, int))0x00410cf0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_current_alarm_005557c8 (*(char (*)[])0x005557c8)

#define LOM_SELF_00410e30 1
void __cdecl rb_00410e30(void *vm)

{
  void *this;
  void *this_00;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  this_00 = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar1 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar1;
    uVar3 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -8 + iVar1 * 8);
    uVar4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar1 * 8);
  }
  else {
    *(undefined4 *)((int)vm + 0x90) = 6;
    FUN_004d4550(vm);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    uVar3 = 0;
    uVar4 = uStack_4;
  }
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)this_00 + 0x54) < *(int *)((int)this_00 + 0x58)) {
      iVar1 = *(int *)((int)this_00 + 0x54) + 1;
      *(int *)((int)this_00 + 0x54) = iVar1;
      uStack_8 = *(uint *)(*(int *)((int)this_00 + 0x50) + -8 + iVar1 * 8);
      uStack_4 = *(undefined4 *)(*(int *)((int)this_00 + 0x50) + -4 + iVar1 * 8);
    }
    else {
      *(undefined4 *)((int)this_00 + 0x90) = 6;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      uStack_8 = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
    }
    iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
    this = DAT_005aee88;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this_00 + 0x90) = 0xe;
      FUN_004d4550(this_00);
      *(undefined4 *)((int)this_00 + 0x90) = 0;
      *(undefined4 *)((int)this_00 + 0xa4) = 0;
      return;
    }
    vm = DAT_005aee88;
    if (DAT_005aee88 == (void *)0x0) {
      FUN_004d41c0(this_00,s_no_current_alarm_005557c8);
      return;
    }
    if (*(int *)((int)this_00 + 0x54) != 0) {
      iVar1 = *(int *)((int)this_00 + 0x50);
      iVar2 = *(int *)((int)this_00 + 0x54) + -1;
      *(int *)((int)this_00 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + iVar2 * 8) = uVar3;
      *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = uVar4;
      FUN_00410cf0(this,this_00,uStack_10);
      return;
    }
    *(undefined4 *)((int)this_00 + 0x90) = 3;
    FUN_004d4550(this_00);
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    FUN_00410cf0(vm,this_00,uStack_10);
  }
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
