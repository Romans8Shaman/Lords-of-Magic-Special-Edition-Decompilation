/* Rebuilt from lomse.exe FUN_004bb7b0 @ 0x004bb7b0 (224 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049c960 ((undefined4 * (__thiscall *)(void *, undefined4))0x0049c960)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)
#define FUN_004bb660 ((int (__fastcall *)(void *))0x004bb660)
#define FUN_004bb770 ((undefined4 (__fastcall *)(int))0x004bb770)

#define LOM_SELF_004bb7b0 1
undefined4 __thiscall
rb_004bb7b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;

  *(undefined4 *)((int)this + 0x15c8) = param_3;
  *(undefined4 *)((int)this + 0x15cc) = param_4;
  *(undefined4 *)((int)this + 0x2c) = param_1;
  *(undefined4 *)((int)this + 0x30) = param_2;
  FUN_004bb770((int)this);
  FUN_004bb660(this);
  iVar1 = FUN_00492850(&DAT_005a7b50,*(int *)((int)this + 0x15c0));
  if (iVar1 == 0) {
    return 0;
  }
  if (*(void **)((int)this + 0x28) == (void *)0x0) {
    this_00 = (void *)FUN_0049f120();
    if (this_00 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x28) = 0;
    }
    else {
      puVar2 = FUN_0049c960(this_00,iVar1);
      *(undefined4 **)((int)this + 0x28) = puVar2;
    }
  }
  else {
    FUN_0049c9d0(*(void **)((int)this + 0x28),iVar1);
  }
  FUN_0049da80(*(void **)((int)this + 0x28),0);
  return 1;
}
