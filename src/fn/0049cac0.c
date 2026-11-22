/* HAND-WRITTEN: if (this->+0x34) { GetSurfaceDesc (vt[0x58], DDSURFACEDESC 0x6c, dwFlags 0); DAT_0058372c -= lPitch * dwHeight;
 * Release (vt[8]); this->+0x34 = 0; } */
#include "lom.h"
#define DAT_0058372c (*(int *)0x0058372c)
#define LOM_SELF_0049cac0 1
void __fastcall rb_0049cac0(int param_1)
{
  int *p = *(int **)(param_1 + 0x34);
  uint sd[27];
  if (p == 0) return;
  sd[0] = 0x6c;
  sd[1] = 0;
  (*(int (__stdcall **)(int *, uint *))(*p + 0x58))(p, sd);
  DAT_0058372c = DAT_0058372c - (int)(sd[4] * sd[2]);
  p = *(int **)(param_1 + 0x34);
  (*(int (__stdcall **)(int *))(*p + 8))(p);
  *(int **)(param_1 + 0x34) = 0;
}
