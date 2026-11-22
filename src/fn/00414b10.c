/* HAND-WRITTEN: FUN_004122a0(this, param_1); if (this->+0x538 >= 0) FUN_00427950(&DAT_005aeefc, this + 0x538);
 * DAT_00583100 == 2 ? FUN_00414430 : (FUN_004154a0 > 0 ? FUN_00413550 : FUN_00413b30); FUN_004117f0(this, 1); delete this (vt[0](this,1)); return 1. */
#include "lom.h"
#define DAT_00583100 (*(char *)0x00583100)
#define FUN_004122a0 ((uint (__thiscall *)(void *, int))0x004122a0)
#define FUN_00427950 ((uint (__thiscall *)(void *, void *))0x00427950)
#define FUN_00414430 ((void (__fastcall *)(void *))0x00414430)
#define FUN_004154a0 ((int (__fastcall *)(void *))0x004154a0)
#define FUN_00413550 ((void (__fastcall *)(void *))0x00413550)
#define FUN_00413b30 ((void (__fastcall *)(void *))0x00413b30)
#define FUN_004117f0 ((uint (__thiscall *)(void *, uint))0x004117f0)
#define LOM_SELF_00414b10 1
int __thiscall rb_00414b10(void *this, int param_1)
{
  FUN_004122a0(this, param_1);
  if (*(int *)((int)this + 0x538) >= 0) FUN_00427950((void *)0x5aeefc, (void *)((int)this + 0x538));
  if (DAT_00583100 == 2) FUN_00414430(this);
  else if (FUN_004154a0(this) > 0) FUN_00413550(this);
  else FUN_00413b30(this);
  FUN_004117f0(this, 1);
  if (this != 0) (**(void (__thiscall ***)(void *, int))this)(this, 1);
  return 1;
}
