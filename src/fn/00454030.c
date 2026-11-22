/* Rebuilt from lomse.exe @ 0x00454030 (__cdecl void(x0, y0, x1, y1, colour index)): Bresenham line on the
 * DAT_00585170 DirectDraw surface. Locks it into the DDSURFACEDESC at 00585238 (result ignored), steps from
 * (x0,y0) to (x1,y1) (the start pixel itself is not drawn), and writes the 16-bit colour DAT_005851b8[idx]
 * to pixels strictly inside 0 < x < 0x27f, 0 < y < 0x17f (pitch = lPitch >> 1). Unlocks with the surface pointer.
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585170 (*(void **)0x00585170)
#define DAT_005851b8 (*(ushort **)0x005851b8)
#define DAT_00585248 (*(int *)0x00585248)
#define DAT_0058525c (*(ushort **)0x0058525c)

typedef int (__stdcall *t_lock)(void *, void *, void *, int, int);
typedef int (__stdcall *t_unlock)(void *, void *);
#define VT(o, n) ((*(void ***)(o))[n])

#define LOM_SELF_00454030 1
void __cdecl rb_00454030(int param_1, int param_2, int param_3, int param_4, int param_5)
{
  ushort colour = DAT_005851b8[param_5];
  void *surf = DAT_00585170;
  ushort *pix;
  int x = param_1, y = param_2;
  int dx, dy, sx = 1, sy = 1, pitch, rowoff, rowstep, err, n;

  ((t_lock)VT(surf, 25))(surf, 0, (void *)0x00585238, 1, 0);
  pix = DAT_0058525c;
  dx = param_3 - param_1; if (dx < 0) dx = -dx;
  dy = param_4 - param_2; if (dy < 0) dy = -dy;
  pitch = DAT_00585248 >> 1;
  if (param_1 > param_3) sx = -1;
  if (param_2 > param_4) sy = -1;
  if (dx > dy) {
    err = dy * 2 - dx;
    n = dx + 1;
    if (n > 0) {
      rowoff = pitch * y;
      rowstep = pitch * sy;
      do {
        if (err < 0) err = err + dy * 2;
        else {
          err = err + (dy - dx) * 2;
          y = y + sy;
          rowoff = rowoff + rowstep;
        }
        x = x + sx;
        if (x > 0 && x < 0x27f && y > 0 && y < 0x17f) pix[rowoff + x] = colour;
        n = n - 1;
      } while (n != 0);
    }
  }
  else {
    err = dx * 2 - dy;
    n = dy + 1;
    if (n > 0) {
      rowoff = pitch * y;
      rowstep = pitch * sy;
      do {
        if (err < 0) err = err + dx * 2;
        else {
          err = err + (dx - dy) * 2;
          x = x + sx;
        }
        y = y + sy;
        rowoff = rowoff + rowstep;
        if (x > 0 && x < 0x27f && y > 0 && y < 0x17f) pix[rowoff + x] = colour;
        n = n - 1;
      } while (n != 0);
    }
  }
  surf = DAT_00585170;
  ((t_unlock)VT(surf, 32))(surf, pix);
}
