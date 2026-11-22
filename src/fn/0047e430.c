/* Rebuilt from lomse.exe FUN_0047e430 @ 0x0047e430 (309 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005557e0 (*(int *)0x005557e0)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00420490 ((int (__fastcall *)(int))0x00420490)
#define FUN_0042d910 ((undefined4 (__thiscall *)(void *, void *, int, int, int))0x0042d910)
#define FUN_0042d9f0 ((undefined4 (__thiscall *)(void *, void *, int, int, int))0x0042d9f0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_0049cd80 ((undefined4 (__thiscall *)(void *, uint, uint, int, int, int))0x0049cd80)
#define FUN_004b0560 ((undefined4 (__thiscall *)(void *, uint, uint, int, int))0x004b0560)
#define FUN_004b05b0 ((undefined4 (__thiscall *)(void *, uint, uint, int, int))0x004b05b0)
#define FUN_004f68b0 ((undefined4 (__thiscall *)(void *, uint, uint, int, void *))0x004f68b0)

#define LOM_SELF_0047e430 1
undefined4 __thiscall rb_0047e430(void *this, uint param_1, uint param_2, undefined4 unused_stack_8)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_005557e0 != 2) && ((*(byte *)((int)this + 0x30) & 0x32) == 0)) {
    return 0;
  }
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00420490(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(uint *)((int)this + 0x30) & 0x40) != 0) {
    iVar2 = 3;
  }
  *(uint *)((int)this + 0x14) = param_1;
  *(uint *)((int)this + 0x18) = param_2;
  if ((*(uint *)((int)this + 0x30) & 0x80) == 0) {
    if ((iVar2 == 2) && (*(void **)((int)this + 0xb8) != (void *)0x0)) {
      FUN_0049cd80(*(void **)((int)this + 0xb8),param_1,*(int *)((int)this + 0xbc) + param_2,-1,0,2)
      ;
    }
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_0042d9f0((void *)((int)this + 0x94),*(void **)((int)this + 0x2c),param_1,param_2,iVar2);
    }
    FUN_004b0560((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x38),iVar2);
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_004f68b0(this,param_1,param_2,iVar2,*(void **)((int)this + 0xc0));
    }
    FUN_004b05b0((void *)((int)this + 0x88),param_1,param_2,*(int *)((int)this + 0x38),iVar2);
    if ((*(byte *)((int)this + 0x30) & 2) == 0) {
      FUN_0042d910((void *)((int)this + 0x94),*(void **)((int)this + 0x2c),param_1,param_2,iVar2);
    }
  }
  else if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049cd80(*(void **)((int)this + 0xb8),param_1,*(int *)((int)this + 0xbc) + param_2,-1,0,2);
    return 1;
  }
  return 1;
}
