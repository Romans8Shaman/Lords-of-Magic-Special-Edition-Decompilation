/* HAND-WRITTEN: if (this->+8) delete it via vt[0](obj, 1) (scalar deleting dtor). */
#include "lom.h"
#define LOM_SELF_00462c80 1
void __thiscall rb_00462c80(void *this)
{
  void *p = *(void **)((int)this + 8);
  if (p != 0) (**(void (__thiscall ***)(void *, int))p)(p, 1);
}
