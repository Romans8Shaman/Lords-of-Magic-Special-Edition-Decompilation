/* HAND-WRITTEN: FUN_0047cdd0(this, param_1); if (this) this->vt[0](this, 1) (scalar deleting dtor); return 1. */
#include "lom.h"
#define FUN_0047cdd0 ((uint (__thiscall *)(void *, int))0x0047cdd0)
#define LOM_SELF_0047cea0 1
int __thiscall rb_0047cea0(void *this, int param_1)
{
  FUN_0047cdd0(this, param_1);
  if (this != 0) (**(void (__thiscall ***)(void *, int))this)(this, 1);
  return 1;
}
