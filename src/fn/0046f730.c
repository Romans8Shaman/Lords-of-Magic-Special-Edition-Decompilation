/* HAND-WRITTEN: if (!DAT_005831dc) return 0; this->vt[4](this) (ecx pass-through); return 1. */
#include "lom.h"
#define DAT_005831dc (*(int *)0x005831dc)
#define LOM_SELF_0046f730 1
int __thiscall rb_0046f730(void *this)
{
  if (DAT_005831dc == 0) return 0;
  (*(void (__thiscall **)(void *))(*(int *)this + 4))(this);
  return 1;
}
