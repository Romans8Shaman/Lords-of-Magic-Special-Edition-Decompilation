/* HAND-WRITTEN: low-memory warning: GlobalMemoryStatus; avail = dwAvailPhys + dwAvailPageFile; if (avail < 100,000,000)
 * { sprintf(DAT_005d22f0, s_005736e0, param_2, avail / 1000000, param_3); MessageBoxA(this->+0x26c, DAT_005d22f0, param_1, 0); } */
#include "lom.h"
#define GlobalMemoryStatus (*(void (__stdcall **)(uint *))0x0054d0b8)
#define MessageBoxA (*(int (__stdcall **)(uint, char *, char *, uint))0x0054d28c)
#define FUN_0053a090 ((int (__cdecl *)(void *, void *, ...))0x0053a090)
#define LOM_SELF_00505d00 1
void __thiscall rb_00505d00(void *this, char *param_1, uint param_2, uint param_3)
{
  uint ms[8];
  uint avail;
  ms[0] = 0x20;
  GlobalMemoryStatus(ms);
  avail = ms[3] + ms[5];
  if (avail < 100000000u) {
    FUN_0053a090((void *)0x5d22f0, (void *)0x5736e0, param_2, avail / 1000000u, param_3);
    MessageBoxA(*(uint *)((int)this + 0x26c), (char *)0x5d22f0, param_1, 0);
  }
}
