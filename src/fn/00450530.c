/* HAND-WRITTEN: if (this->+0x44) obj->vt[0x4c](obj); return 1. */
#include "lom.h"
#define LOM_SELF_00450530 1
int __thiscall rb_00450530(void *this)
{
  void *p = *(void **)((int)this + 0x44);
  if (p != 0) (*(void (__thiscall **)(void *))(*(int *)p + 0x4c))(p);
  return 1;
}
