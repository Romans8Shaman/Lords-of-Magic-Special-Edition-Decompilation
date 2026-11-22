/* Rebuilt from lomse.exe FUN_004f5a90 @ 0x004f5a90 (148 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_0049c960 ((undefined4 * (__thiscall *)(void *, undefined4))0x0049c960)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)

#define LOM_SELF_004f5a90 1
undefined4 __thiscall rb_004f5a90(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;

  iVar1 = FUN_00492850(&DAT_005a7b50,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    this_00 = (void *)FUN_0049f120();
    if (this_00 == (void *)0x0) {
      *(undefined4 *)((int)this + 0x2c) = 0;
    }
    else {
      puVar2 = FUN_0049c960(this_00,iVar1);
      *(undefined4 **)((int)this + 0x2c) = puVar2;
    }
  }
  else {
    FUN_0049c9d0(*(void **)((int)this + 0x2c),iVar1);
  }
  return 1;
}
