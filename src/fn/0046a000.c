/* HAND-WRITTEN: this->+0x54 -= (param_1 ? K810 : K814) (x87 fsub, float store); copy the dword to +0x64, +0x78 and 4 globals;
 * return this->vt[0x2c](this). */
#include "lom.h"
#define K810 (*(float *)0x0054d810)
#define K814 (*(float *)0x0054d814)
#define LOM_SELF_0046a000 1
uint __thiscall rb_0046a000(void *this, char param_1)
{
  long double st = *(float *)((int)this + 0x54);
  if (param_1 != 0) st = st - (long double)K810; else st = st - (long double)K814;
  *(float *)((int)this + 0x54) = (float)st;
  {
    volatile uint *v = (volatile uint *)((int)this + 0x54);
    uint a = *v;
    *(uint *)((int)this + 0x64) = a;
    *(uint *)((int)this + 0x78) = a;
    *(uint *)0x5577e0 = a;
    *(uint *)0x5577f4 = *v;
    *(uint *)0x557820 = *v;
    *(uint *)0x557834 = *v;
  }
  return (*(uint (__thiscall **)(void *))(*(int *)this + 0x2c))(this);
}
