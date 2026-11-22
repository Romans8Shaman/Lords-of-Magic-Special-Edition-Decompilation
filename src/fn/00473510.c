/* Rebuilt from lomse.exe FUN_00473510 @ 0x00473510 (636 bytes, __thiscall, ret 0x14). HAND (2026-11-13, was asmfn):
 * Draws a framed text box into the surface at this+0x50. Args: ret (rect out, 4 ints), param_2/param_3 (passed on to
 * 00472f90), text (param_4, '\n'-separated lines), param_5 (flag). Measures the widest line with 0047ef30
 * (this->0x3c = font), width = max(maxline, font[1]*2+1)+1, height = font[2]*lines; creates the surface (004952c0),
 * fills it (0x47efd0 colours from this+0xd0..d8, or 5,5,5 when param_5; frame colour this+0xcc -> 0x32), draws the text
 * (0047f230) and a 4-line border in this+0xdc..e4 colour; copies the rect (474e00), calls 00472f90 and stores its
 * returned point at this+0xa8/0xac; DAT_00583650 is bumped by 0x10 net; the rect is returned in *ret.
 * The C++ EH frame (only unwinds on a throw) is omitted. */
#include "lom.h"

#define DAT_00583650 (*(int *)0x00583650)
#define FUN_0047ef30 ((int (__thiscall *)(void *, char *, int))0x0047ef30)
#define FUN_004952c0 ((void (__thiscall *)(void *, int, int, int))0x004952c0)
#define FUN_0047efd0 ((int (__thiscall *)(void *, int, int, int))0x0047efd0)
#define FUN_00497270 ((void (__thiscall *)(void *, int, int, int, int, int))0x00497270)
#define FUN_0047f230 ((void (__thiscall *)(void *, void *, char *, int *, int, int, int))0x0047f230)
#define FUN_004946d0 ((void (__thiscall *)(void *, int, int, int, int, int))0x004946d0)
#define FUN_00474e00 ((void (__thiscall *)(void *, int *))0x00474e00)
typedef struct { int a, b, c, d; } rb473510_rect;
#define FUN_00472f90 ((int * (__thiscall *)(void *, int *, uint, uint, rb473510_rect, int))0x00472f90)

#define LOM_SELF_00473510 1
int * __thiscall rb_00473510(void *this, int *param_1, uint param_2, uint param_3, char *param_4, int param_5)
{
  int cnt[2];
  int rc[4];            /* x, y, w, h */
  rb473510_rect rr;
  int maxw, i, start, k, col;
  int *r;
  void *surf;
  char *p;
  void *font;

  DAT_00583650 = DAT_00583650 + 0x10;
  cnt[0] = 0;
  rc[0] = 0; rc[1] = 0; rc[2] = 0; rc[3] = 0;
  maxw = 0; start = 0; i = 0;
  font = *(void **)((int)this + 0x3c);
  if (*param_4 != '\0') {
    p = param_4;
    do {
      if (*p == '\n') {
        k = FUN_0047ef30(*(void **)((int)this + 0x3c), param_4 + start, i - start);
        if (maxw < k) maxw = k;
        cnt[0] = cnt[0] + 1;
        start = i + 1;
      }
      i = i + 1;
      p = p + 1;
    } while (*p != '\0');
  }
  k = *(int *)(*(int *)((int)this + 0x3c) + 4) * 2 + 1;
  if (maxw < k) maxw = k;
  rc[2] = maxw + 1;
  rc[3] = *(int *)(*(int *)((int)this + 0x3c) + 8) * cnt[0];
  surf = (void *)((int)this + 0x50);
  rc[0] = 0; rc[1] = 0;
  FUN_004952c0(surf, rc[2], rc[3], 1);
  if (param_5 == 0)
    col = FUN_0047efd0(surf, *(int *)((int)this + 0xd0), *(int *)((int)this + 0xd4), *(int *)((int)this + 0xd8));
  else
    col = FUN_0047efd0(surf, 5, 5, 5);
  if (*(int *)((int)this + 0xcc) == 0)
    FUN_00497270(surf, 0, 0, *(int *)((int)this + 0x54), *(int *)((int)this + 0x58), col);
  else
    FUN_00497270(surf, 0, 0, *(int *)((int)this + 0x54), *(int *)((int)this + 0x58), 0x32);
  FUN_0047f230(*(void **)((int)this + 0x3c), surf, param_4, rc, 2, -1, 0);
  col = FUN_0047efd0(surf, *(int *)((int)this + 0xdc), *(int *)((int)this + 0xe0), *(int *)((int)this + 0xe4));
  FUN_004946d0(surf, rc[0], rc[1], (rc[0] - 1) + rc[2], rc[1], col);
  FUN_004946d0(surf, (rc[0] - 1) + rc[2], rc[1], (rc[0] - 1) + rc[2], (rc[1] - 1) + rc[3], col);
  FUN_004946d0(surf, (rc[0] - 1) + rc[2], (rc[1] - 1) + rc[3], rc[0], (rc[1] - 1) + rc[3], col);
  FUN_004946d0(surf, rc[0], (rc[1] - 1) + rc[3], rc[0], rc[1], col);
  FUN_00474e00(&rr, rc);
  r = FUN_00472f90(this, cnt, param_2, param_3, rr, param_5);
  *(int *)((int)this + 0xa8) = r[0];
  *(int *)((int)this + 0xac) = r[1];
  DAT_00583650 = DAT_00583650 + 0x10;
  param_1[0] = rc[0]; param_1[1] = rc[1]; param_1[2] = rc[2]; param_1[3] = rc[3];
  DAT_00583650 = DAT_00583650 - 0x10;
  return param_1;
}
