/* HAND-WRITTEN: FUN_004ada10(this, param_1); if (this) this->vt[0](this, 1) (scalar deleting dtor); return 1. */
#include "lom.h"
#define FUN_004ada10 ((uint (__thiscall *)(void *, int))0x004ada10)
#define LOM_SELF_004adb10 1
int __thiscall rb_004adb10(void *this, int param_1)
{
  FUN_004ada10(this, param_1);
  if (this != 0) (**(void (__thiscall ***)(void *, int))this)(this, 1);
  return 1;
}
