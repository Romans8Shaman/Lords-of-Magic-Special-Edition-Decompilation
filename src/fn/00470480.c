/* HAND-WRITTEN: OutputDebugStringA(s_557f4c); if (DAT_005d1e84) DAT_005d1e84->vt[0x18](); param ignored. */
#include "lom.h"
#define OutputDebugStringA (*(void (__stdcall **)(const char *))0x0054d0f8)
#define DAT_005d1e84 (*(void **)0x005d1e84)
#define LOM_SELF_00470480 1
void __stdcall rb_00470480(int param_1)
{
  void *p;
  OutputDebugStringA((const char *)0x557f4c);
  p = DAT_005d1e84;
  if (p != 0) (*(void (__thiscall **)(void *))(*(int *)p + 0x18))(p);
}
