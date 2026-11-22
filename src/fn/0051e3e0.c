/* Rebuilt from lomse.exe op_longmoveattack @ 0x0051e3e0 (576 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae9c0 (*(int *)0x005ae9c0)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_00420b80 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4, undefined4, undefined4, undefined4))0x00420b80)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00485080 ((undefined4 * (__thiscall *)(void *, int, byte))0x00485080)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_invalid_destination_00573ee8 (*(char (*)[])0x00573ee8)
#define s_no_army_found_00573ed8 (*(char (*)[])0x00573ed8)
#define s_target_sprite_not_found_00573ec0 (*(char (*)[])0x00573ec0)

#define LOM_SELF_0051e3e0 1
void __cdecl rb_0051e3e0(void *vm)

{
  void *this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_18;
  typedef undefined4 * _t_puStack_14;
  typedef uint _t_uStack_10;
  typedef undefined4 _t_fStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_18 (*(_t_uStack_18 *)(_fr + 0x0))
#define puStack_14 (*(_t_puStack_14 *)(_fr + 0x4))
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x8))
#define fStack_c (*(_t_fStack_c *)(_fr + 0xc))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x10))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0x14))
  
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
  iVar1 = FUN_004026a0(&uStack_8,&uStack_10,(uint *)&fStack_c,(undefined4 *)&puStack_14);
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
  iVar1 = FUN_004026a0(&uStack_8,(uint *)&vm,(uint *)&puStack_14,&fStack_c);
  if (iVar1 == 0) {
    FUN_00404ab0(this,0xe);
    return;
  }
  FUN_0040adb0(this,&uStack_8);
  iVar1 = FUN_004026a0(&uStack_8,&uStack_18,(uint *)&puStack_14,&fStack_c);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  puStack_14 = FUN_00485080(&DAT_005aa12c,uStack_18,0x2f);
  uVar2 = FUN_00482ac0(&DAT_005aa12c,(int)vm,0);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,(int)vm,2);
  uVar4 = FUN_00482ac0(&DAT_005aa12c,(int)vm,3);
  uVar5 = FUN_00482ac0(&DAT_005aa12c,(int)vm,1);
  if (puStack_14 == (undefined4 *)0x0) {
LAB_0051e5f8:
    FUN_004d41c0(this,s_no_army_found_00573ed8);
    return;
  }
  if (uVar2 == 0) {
    if (((uVar3 == 0) && (uVar4 == 0)) && (uVar5 == 0)) {
      if (puStack_14 != (undefined4 *)0x0) {
        FUN_004d41c0(this,s_target_sprite_not_found_00573ec0);
        return;
      }
      goto LAB_0051e5f8;
    }
    if (uVar3 == 0) {
      if (uVar4 == 0) {
        iVar1 = *(int *)(uVar5 + 0x1c);
        uVar6 = 0xffffffff;
      }
      else {
        iVar1 = *(int *)(uVar4 + 0x1c);
        uVar6 = 0xffffffff;
      }
    }
    else {
      iVar1 = *(int *)(uVar3 + 0x1c);
      uVar6 = 0xffffffff;
    }
  }
  else {
    uVar6 = *(undefined4 *)(uVar2 + 0x28);
    iVar1 = *(int *)(uVar2 + 0x1c);
  }
  if ((iVar1 < 0) || (DAT_005ae9c0 <= iVar1)) {
    FUN_004d41c0(this,s_invalid_destination_00573ee8);
    return;
  }
  FUN_00420b80(puStack_14,iVar1,0x10040,uStack_10,uVar6,0xffffffff,0);
  return;
#undef uStack_18
#undef puStack_14
#undef uStack_10
#undef fStack_c
#undef uStack_8
#undef uStack_4
}
