/* HAND-WRITTEN: FUN_0050da70(this, param_1); if (this) this->vt[0](this, 1) (scalar deleting dtor); return 1. */
#include "lom.h"
#define FUN_0050da70 ((uint (__thiscall *)(void *, int))0x0050da70)
#define LOM_SELF_0050dda0 1
int __thiscall rb_0050dda0(void *this, int param_1)
{
  FUN_0050da70(this, param_1);
  if (this != 0) (**(void (__thiscall ***)(void *, int))this)(this, 1);
  return 1;
}
