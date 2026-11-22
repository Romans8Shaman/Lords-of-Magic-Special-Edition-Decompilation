/* HAND-WRITTEN: virtual call this->vt[0x14](this, param_1, param_2, 0x584ab8) (callee pops 12). */
#include "lom.h"
#define LOM_SELF_004f2f50 1
uint __thiscall rb_004f2f50(void *this, int param_1, int param_2)
{
  return (*(uint (__thiscall **)(void *, int, int, int))(*(int *)this + 0x14))(this, param_1, param_2, 0x584ab8);
}
