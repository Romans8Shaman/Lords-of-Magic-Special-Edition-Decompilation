/* HAND-WRITTEN: if (this->+0x4a0 && !this->+0xd4) { this->+0x36c = 0; DPSESSIONDESC2 sd = {0}; sd.dwSize = 0x50; sd.guidApplication = GUID @00556898;
 * FUN_004756f0(dp->vt[0x34](dp, &sd, 0x32, LAB_0044ab50, 0, 1) [EnumSessions], s_005570dc) }  (logger msg pushed before the COM call). */
#include "lom.h"
#define FUN_004756f0 ((int (__cdecl *)(int, ...))0x004756f0)
#define LOM_SELF_0044b0a0 1
void __thiscall rb_0044b0a0(void *this)
{
  int *p = *(int **)((int)this + 0x4a0);
  uint sd[20];
  int i;
  if (p == 0 || *(int *)((int)this + 0xd4) != 0) return;
  *(int *)((int)this + 0x36c) = 0;
  for (i = 0; i < 20; i++) sd[i] = 0;
  sd[0] = 0x50;
  sd[6] = *(uint *)0x556898; sd[7] = *(uint *)0x55689c; sd[8] = *(uint *)0x5568a0; sd[9] = *(uint *)0x5568a4;
  FUN_004756f0((*(int (__stdcall **)(int *, uint *, int, int, int, int))(*p + 0x34))(p, sd, 0x32, 0x44ab50, 0, 1), 0x5570dc);
}
