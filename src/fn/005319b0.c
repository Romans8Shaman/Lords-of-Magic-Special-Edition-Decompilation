/* Rebuilt from lomse.exe FUN_005319b0 @ 0x005319b0 (172 bytes, __thiscall). HAND (2026-11-13, was asmfn / hand_weak):
 * blit the 8-bit image this+8 (size (*this)->+4 x (*this)->+8) through the 16-bit palette table this+0xc onto
 * surface DAT_0058516c[param_1] (Lock with desc DAT_005851cc[param_1], 640-pixel pitch) at (param_2, param_3);
 * Unlock(lpSurface). eax = Unlock's return. */
#include "lom.h"
#define LOM_SELF_005319b0 1
uint __thiscall rb_005319b0(void *this, int param_1, int param_2, int param_3)
{
  int b = (int)this, *s, y, x, adv;
  uchar *src = *(uchar **)(b + 8);
  ushort *d;
  int surf;
  ushort *lp;
  surf = *(int *)(param_1 * 4 + 0x58516c);
  (*(int (__stdcall **)(int, int, int, int, int))(*(int *)surf + 0x64))(surf, 0, param_1 * 0x6c + 0x5851cc, 1, 0);
  lp = *(ushort **)(param_1 * 0x6c + 0x5851f0);
  s = *(int **)b;
  adv = 0x280 - s[1];
  d = lp + (param_3 * 640 + param_2);
  for (y = 0; y < (*(int **)b)[2]; y++) {
    for (x = 0; x < (*(int **)b)[1]; x++) *d++ = *(ushort *)(b + 0xc + (uint)*src++ * 2);
    d += adv;
  }
  surf = *(int *)(param_1 * 4 + 0x58516c);
  return (*(uint (__stdcall **)(int, ushort *))(*(int *)surf + 0x80))(surf, lp);
}
