/* Rebuilt from lomse.exe FUN_0049da80 @ 0x0049da80 (90 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049acf0 ((int (__thiscall *)(void *, uint, uint, undefined4 *))0x0049acf0)
#define FUN_0049adb0 ((int (__thiscall *)(void *, uint))0x0049adb0)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define FUN_0049dcf0 ((int (__thiscall *)(void *, int, int))0x0049dcf0)

#define LOM_SELF_0049da80 1
undefined4 __thiscall rb_0049da80(void *this,uint param_1)

{
  int *this_00;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  this_00 = *(int **)((int)this + 0x3c);
  *(uint *)((int)this + 4) = param_1;
  if ((this_00 == (int *)0x0) || (*this_00 == 0)) {
    return 0;
  }
  iVar1 = FUN_0049adb0(this_00,param_1);
  *(int *)((int)this + 0x24) = iVar1;
  puVar4 = (undefined4 *)((int)this + 0x28);
  uVar2 = FUN_0049dcf0(this,*(int *)((int)this + 0x10),*(int *)((int)this + 0x14));
  iVar1 = FUN_0049acf0(*(void **)((int)this + 0x3c),*(uint *)((int)this + 4),uVar2,puVar4);
  *(int *)((int)this + 0x20) = iVar1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  uVar3 = FUN_0049d9a0(this);
  return uVar3;
}
