/* Hand-written from lomse.exe 0x004f4490 (cdecl, 6 stack args, plain ret; Storm-style sub-byte blit): Locks DirectDraw surface
 * obj (vtable+0x64, DDSURFACEDESC of 0x6c bytes on the stack, flags 1), then expands src bytes into the 8-bit surface.
 * Per pixel (running counter cnt, NOT reset per row): shift = ((s8)((u8)cnt & (u8)A4) * (s8)F8) & 31 (imulb + shr %cl),
 * index = (*src >> shift) & (F0 & 0xff), dst = lut[index] (lut defaults to 0x573298); src advances when
 * (cnt & A4) == A4. A4/F8/F0 are dwords +4/+8/+0 of the struct at [0x584aa8] (default struct 0x573288 when NULL), re-read per
 * pixel as in the asm. flag==0: rows top-down left-to-right (dst += pitch - w per row); flag!=0: every row written right to left
 * (start at surf+w-1, dst += pitch + w per row). Unlock via vtable+0x80, returns 0. Loops are do-while like the asm (w,h >= 1). */
#include "lom.h"

#define GP() (*(int **)0x00584aa8 ? *(int **)0x00584aa8 : (int *)0x00573288)

#define LOM_SELF_004f4490 1

int rb_004f4490(uchar *src, int *obj, int w, int h, uchar *lut, int flag)
{
  int desc[0x1b];
  int i, cnt, rows, cols, pitchskip;
  uchar *dst;
  int *g;
  int a4, f8, f0, sh;
  signed char m8;

  if (lut == (uchar *)0) lut = (uchar *)0x00573298;
  for (i = 0; i < 0x1b; i++) desc[i] = 0;
  desc[0] = 0x6c;
  ((int (__stdcall *)(void *, int, int *, int, int))(*(void **)(*obj + 0x64)))(obj, 0, desc, 1, 0);
  cnt = 0;
  if (flag == 0) {
    dst = (uchar *)desc[9];          /* lpSurface (+0x24) */
    pitchskip = desc[4] - w;                        /* lPitch (+0x10) - width */
    rows = h;
    do {
      cols = w;
      do {
        g = GP(); a4 = g[1]; f8 = g[2]; f0 = g[0] & 0xff;
        m8 = (signed char)((uchar)cnt & (uchar)a4);
        sh = ((int)m8 * (int)(signed char)f8) & 0x1f;
        *dst++ = lut[(((uint)*src) >> sh) & (uint)f0];
        g = GP();
        src += ((cnt & g[1]) == g[1]);
        cnt++;
      } while (--cols != 0);
      dst += pitchskip;
    } while (--rows != 0);
  } else {
    dst = (uchar *)desc[9] + w - 1;
    pitchskip = desc[4] + w;
    rows = h;
    do {
      cols = w;
      do {
        g = GP(); a4 = g[1]; f8 = g[2]; f0 = g[0] & 0xff;
        m8 = (signed char)((uchar)cnt & (uchar)a4);
        sh = ((int)m8 * (int)(signed char)f8) & 0x1f;
        *dst-- = lut[(((uint)*src) >> sh) & (uint)f0];
        g = GP();
        src += ((cnt & g[1]) == g[1]);
        cnt++;
      } while (--cols != 0);
      dst += pitchskip;
    } while (--rows != 0);
  }
  ((int (__stdcall *)(void *, int))(*(void **)(*obj + 0x80)))(obj, 0);
  return 0;
}
