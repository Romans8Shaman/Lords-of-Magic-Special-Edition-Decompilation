/* HAND-WRITTEN: if (this->+0x30 & 8) { clear bit 3; this->vt[0x2c](this); return 1; } return 0; (stack arg unused, ret 4). */
#include "lom.h"
#define LOM_SELF_0044eba0 1
int __thiscall rb_0044eba0(void *this, int param_1)
{
  uint f = *(uint *)((int)this + 0x30);
  if ((f & 8) == 0) return 0;
  *(uint *)((int)this + 0x30) = f & ~8u;
  (*(void (__thiscall **)(void *))(*(int *)this + 0x2c))(this);
  return 1;
}
