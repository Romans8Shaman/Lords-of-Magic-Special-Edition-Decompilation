/* Rebuilt from lomse.exe FUN_00511ad0 @ 0x00511ad0 (864 bytes, __thiscall). HAND (2026-11-12):
 * builds 256 shaded 16-bit palettes (this+0x2a4, 256 rows of 256 entries) from the 768-byte RGB palette loaded by
 * FUN_004a2380(0x5aea70). Row k (1..256) brightness f = (float)(k * 1/256); n = 150 - (k-1):
 *   n >= 40: grey  = (r+g+b)*4 * 1/3 * f;  0 <= n < 40: desaturate by s = clamp(n * 0.025, 0, 1):
 *   c' = (c*4*(1-s) + (r+g+b)*4 * 1/3 * s) * f;  n < 0: c' = c*4 * f.  Each ftol'd, clamped to 0..255 and packed
 *   with the pixel-format shifts at 0x5853ec..0x585400. Ghidra's version lost the x87 values kept across the
 *   __ftol calls (extraout_ST*); this follows the asm's x87 stack (A = 1-s, B = s, T = sum*1/3*s). */
#include "lom.h"

#define FUN_004a2380 ((undefined4 (__cdecl *)(LPCSTR, int))0x004a2380)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define K256 (*(float *)0x0054e980)   /* 1/256 */
#define K40  (*(float *)0x0054e984)   /* 0.025 */
#define K1   (*(float *)0x0054e988)   /* 1.0 */
#define K0   (*(float *)0x0054e98c)   /* 0.0 */
#define K3   (*(float *)0x0054e990)   /* 1/3 */

static inline int clamp255(int v) { v = v & ((v < 1) - 1); return v > 0xff ? 0xff : v; }
static inline short pack(int r, int g, int b)
{
  return (short)(((g >> (*(unsigned char *)0x5853f8 & 0x1f)) << (*(unsigned char *)0x5853f4 & 0x1f)) +
                 ((r >> (*(unsigned char *)0x5853f0 & 0x1f)) << (*(unsigned char *)0x5853ec & 0x1f)) +
                 ((b >> (*(unsigned char *)0x585400 & 0x1f)) << (*(unsigned char *)0x5853fc & 0x1f)));
}

#define LOM_SELF_00511ad0 1
void __thiscall rb_00511ad0(void *this)
{
  unsigned char pal[0x300];
  short *row = (short *)((int)this + 0x2a4);
  int k = 0, n = 0x96;
  FUN_004a2380((LPCSTR)0x5aea70, (int)pal);
  do {
    k++;
    volatile float f3 = (float)((float10)k * (float10)K256);
    unsigned char *p = pal;
    short *o = row;
    int i;
    if (n < 0) {
      for (i = 0x100; i != 0; i--, p += 3, o++) {
        int r = (int)__ftol((float10)(int)(p[0] << 2) * (float10)f3);
        int g = (int)__ftol((float10)(int)(p[1] << 2) * (float10)f3);
        int b = (int)__ftol((float10)(int)(p[2] << 2) * (float10)f3);
        *o = pack(clamp255(r), clamp255(g), clamp255(b));
      }
    } else if (n < 0x28) {
      float10 s = (float10)n * (float10)K40;
      if (s > (float10)K1) s = (float10)K1;
      else if (s < (float10)K0) s = (float10)K0;
      float10 A = (float10)K1 - s;
      for (i = 0x100; i != 0; i--, p += 3, o++) {
        int rr = p[0] * 4, gg = p[1] * 4, bb = p[2] * 4;
        float10 T = (float10)(bb + gg + rr) * (float10)K3 * s;
        int r = (int)__ftol(((float10)rr * A + T) * (float10)f3);
        int g = (int)__ftol(((float10)gg * A + T) * (float10)f3);
        int b = (int)__ftol(((float10)bb * A + T) * (float10)f3);
        *o = pack(clamp255(r), clamp255(g), clamp255(b));
      }
    } else {
      for (i = 0x100; i != 0; i--, p += 3, o++) {
        int v = clamp255((int)__ftol((float10)((p[0] + p[2] + p[1]) * 4) * (float10)K3 * (float10)f3));
        *o = pack(v, v, v);
      }
    }
    n--;
    row += 0x100;
  } while (n > -0x6a);
}
