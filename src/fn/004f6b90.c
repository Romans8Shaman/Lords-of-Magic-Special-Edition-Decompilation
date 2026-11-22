/* HAND-WRITTEN: FUN_004f6b00(this, param_1); if (this) this->vt[0](this, 1) (scalar deleting dtor); return 1. */
#include "lom.h"
#define FUN_004f6b00 ((uint (__thiscall *)(void *, int))0x004f6b00)
#define LOM_SELF_004f6b90 1
int __thiscall rb_004f6b90(void *this, int param_1)
{
  FUN_004f6b00(this, param_1);
  if (this != 0) (**(void (__thiscall ***)(void *, int))this)(this, 1);
  return 1;
}
