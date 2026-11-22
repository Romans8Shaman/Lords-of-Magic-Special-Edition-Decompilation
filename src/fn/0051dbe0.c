/* Rebuilt from lomse.exe op_iscityundertreaty_q @ 0x0051dbe0 (288 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_0051d580 ((undefined4 (__thiscall *)(void *, int *))0x0051d580)
#define FUN_0051d8e0 ((undefined * (__stdcall *)(void))0x0051d8e0)
#define s_city_not_found_00573e84 (*(char (*)[])0x00573e84)
#define s_no_AI_00573e7c (*(char (*)[])0x00573e7c)

#define LOM_SELF_0051dbe0 1
void __cdecl rb_0051dbe0(void *vm)

{
  void *this;
  undefined *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_uStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_uStack_8;
  typedef undefined4 _t_uStack_4;
#define uStack_10 (*(_t_uStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define uStack_8 (*(_t_uStack_8 *)(_fr + 0x8))
#define uStack_4 (*(_t_uStack_4 *)(_fr + 0xc))
  
  this_00 = FUN_0051d8e0();
  this = vm;
  if (this_00 == (undefined *)0x0) {
    pcVar5 = s_no_AI_00573e7c;
LAB_0051dc85:
    FUN_004d41c0(this,pcVar5);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar3 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar3;
      iVar1 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = 0;
      return;
    }
  }
  else {
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
    iVar1 = FUN_004026a0(&uStack_8,&uStack_10,&uStack_c,(undefined4 *)&vm);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
      goto LAB_0051dce6;
    }
    piVar2 = (int *)FUN_00482ac0(&DAT_005aa12c,uStack_10,3);
    if (piVar2 == (int *)0x0) {
      pcVar5 = s_city_not_found_00573e84;
      goto LAB_0051dc85;
    }
    iVar1 = FUN_0051d580(this_00,piVar2);
    if (*(int *)((int)this + 0x54) != 0) {
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      iVar3 = *(int *)((int)this + 0x50);
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(uint *)(iVar3 + 4 + iVar4 * 8) = -(uint)(iVar1 != 0);
      return;
    }
  }
  *(undefined4 *)((int)this + 0x90) = 3;
LAB_0051dce6:
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  return;
#undef uStack_10
#undef uStack_c
#undef uStack_8
#undef uStack_4
}
