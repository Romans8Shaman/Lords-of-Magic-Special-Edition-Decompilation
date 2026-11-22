/* Rebuilt from lomse.exe op_getturnaibrain @ 0x0051d430 (301 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_such_player_0055b488 (*(char (*)[])0x0055b488)
#define s_turn_ai_not_found_00573e54 (*(char (*)[])0x00573e54)

#define LOM_SELF_0051d430 1
void __cdecl rb_0051d430(void *vm)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *this;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  this = vm;
  if (*(int *)((int)vm + 0x54) < *(int *)((int)vm + 0x58)) {
    iVar3 = *(int *)((int)vm + 0x54) + 1;
    *(int *)((int)vm + 0x54) = iVar3;
    uStack_8 = *(uint *)(*(int *)((int)vm + 0x50) + -8 + iVar3 * 8);
    uStack_4 = *(undefined4 *)(*(int *)((int)vm + 0x50) + -4 + iVar3 * 8);
  }
  else {
    FUN_00404ab0(vm,6);
    uStack_8 = 0;
  }
  iVar3 = FUN_004026a0(&uStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar3 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    if (((int)vm < 0) || (0xf < (int)vm)) {
      puVar4 = (undefined *)0x0;
    }
    else {
      puVar4 = &DAT_005af194 + (int)vm * 0x1d84;
    }
    if (puVar4 == (undefined *)0x0) {
      FUN_004d41c0(this,s_no_such_player_0055b488);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = 0;
        return;
      }
    }
    else {
      if ((undefined4 *)(puVar4 + 0x1c64) == (undefined4 *)0x0) {
        FUN_004d41c0(this,s_turn_ai_not_found_00573e54);
        return;
      }
      uVar1 = *(undefined4 *)(puVar4 + 0x1c64);
      uVar2 = *(undefined4 *)(puVar4 + 0x1c68);
      if (*(int *)((int)this + 0x54) != 0) {
        iVar5 = *(int *)((int)this + 0x54) + -1;
        *(int *)((int)this + 0x54) = iVar5;
        iVar3 = *(int *)((int)this + 0x50);
        *(undefined4 *)(iVar3 + iVar5 * 8) = uVar1;
        *(undefined4 *)(iVar3 + 4 + iVar5 * 8) = uVar2;
        return;
      }
    }
    *(undefined4 *)((int)this + 0x90) = 3;
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef fStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
