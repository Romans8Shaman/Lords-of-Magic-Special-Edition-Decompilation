/* HAND-WRITTEN: FUN_004ada10(this, param_1); FUN_004a7d50(&DAT_005ae958, this, this->+0x1c); this->vt[0x2c](this); return 1. */
#include "lom.h"
#define FUN_004ada10 ((uint (__thiscall *)(void *, int))0x004ada10)
#define FUN_004a7d50 ((int (__thiscall *)(void *, void *, int))0x004a7d50)
#define LOM_SELF_004adb40 1
int __thiscall rb_004adb40(void *this, int param_1)
{
  FUN_004ada10(this, param_1);
  FUN_004a7d50((void *)0x5ae958, this, *(int *)((int)this + 0x1c));
  (*(void (__thiscall **)(void *))(*(int *)this + 0x2c))(this);
  return 1;
}
