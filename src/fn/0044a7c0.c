/* HAND-WRITTEN: if (DAT_005d1e84) return obj->vt[0x28](obj, param_2, param_1); return 0; (ret 20, extra params unused). */
#include "lom.h"
#define DAT_005d1e84 (*(void **)0x005d1e84)
#define LOM_SELF_0044a7c0 1
uint __stdcall rb_0044a7c0(int param_1, int param_2, int p3, int p4, int p5)
{
  void *p = DAT_005d1e84;
  if (p == 0) return 0;
  return (*(uint (__thiscall **)(void *, int, int))(*(int *)p + 0x28))(p, param_2, param_1);
}
