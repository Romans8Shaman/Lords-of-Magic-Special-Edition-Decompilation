/* Rebuilt from lomse.exe FUN_00543b00 @ 0x00543b00 (254 bytes, __cdecl). HAND (2026-11-13, was asmfn; gen REJECT partial3w):
 * CRT _tolower_lk(c): C locale (__lc_handle[LC_CTYPE] [5d5310] == 0) -> ASCII 0x41..0x5a + 0x20. Otherwise c < 0x100 must pass
 * _isctype(c, 1) (or _pctype[c] & 1 when MB_CUR_MAX [575094] < 2); the 1- or 2-byte (lead byte) string is
 * built in c's own argument slot as the original does, then __crtLCMapStringA(lc, 0x100, buf, n, out, 3, 0, 1):
 * 0 -> c, 1 -> out[0], 2 -> out[1]<<8 | out[0]. */
#include "lom.h"

#define DAT_005d5310 (*(int *)0x005d5310)
#define DAT_00575094 (*(int *)0x00575094)
#define DAT_00574e88 (*(unsigned char **)0x00574e88)
#define FUN_00541d40 ((int (__cdecl *)(int, int))0x00541d40)
#define FUN_0053f680 ((int (__cdecl *)(int, int, unsigned char *, int, unsigned char *, int, int, int))0x0053f680)

#define LOM_SELF_00543b00 1
uint __cdecl rb_00543b00(uint c)
{
  unsigned char out[8];
  unsigned char *buf;
  int t, n;
  if (DAT_005d5310 == 0) {
    if ((int)c >= 0x41 && (int)c <= 0x5a) return c + 0x20;
    return c;
  }
  if ((int)c < 0x100) {
    if (DAT_00575094 > 1) t = FUN_00541d40((int)c, 1);
    else t = DAT_00574e88[(int)c * 2] & 1;
    if (t == 0) return c;
  }
  uint c0 = c;
  buf = (unsigned char *)&c;
  if (DAT_00574e88[(((int)c0 >> 8) & 0xff) * 2 + 1] & 0x80) {
    unsigned char hi = (unsigned char)((int)c0 >> 8), lo = (unsigned char)c0;
    buf[0] = hi; buf[1] = lo; buf[2] = 0; n = 2;
  } else {
    buf[0] = (unsigned char)c0; buf[1] = 0; n = 1;
  }
  t = FUN_0053f680(DAT_005d5310, 0x100, buf, n, out, 3, 0, 1);
  if (t == 0) return c0;
  if (t == 1) return out[0];
  return ((uint)out[1] << 8) | out[0];
}
