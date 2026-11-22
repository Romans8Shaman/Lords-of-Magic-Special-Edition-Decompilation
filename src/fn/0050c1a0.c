/* HAND-WRITTEN: FUN_004f5b50(this, param_1); if (this->+0x58) obj->vt[0x34](obj, param_1). */
#include "lom.h"
#define FUN_004f5b50 ((void (__thiscall *)(void *, int))0x004f5b50)
#define LOM_SELF_0050c1a0 1
void __thiscall rb_0050c1a0(void *this, int param_1)
{
  void *p;
  FUN_004f5b50(this, param_1);
  p = *(void **)((int)this + 0x58);
  if (p != 0) (*(void (__thiscall **)(void *, int))(*(int *)p + 0x34))(p, param_1);
}
