/* Hand-written from lomse.exe 0x004ba2b0 disassembly + Ghidra C (__thiscall, ret 0xc; 3rd stack arg unused):
 * draws a moving object (this) across the map: when the current view matches, it projects the cell of this+0x1c
 * (and its neighbour via tables 0055d608/0055d628 indexed by this+0x54) with 004a6600, then steps 0..n-1 (or
 * n-1..0) calling 004f6890 at interpolated screen positions, and for state 2/3 draws the final frame and the
 * "%d turns" caption. Behaviour-match target. */
#include "lom.h"

#define FUN_004a6600 ((void * (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004ba060 ((int (__thiscall *)(void *))0x004ba060)
#define FUN_004f6890 ((void (__thiscall *)(void *, int, int, int))0x004f6890)
#define FUN_004f5b30 ((void (__thiscall *)(void *, int))0x004f5b30)
#define FUN_004747d0 ((void (__thiscall *)(void *, int, int, int))0x004747d0)
#define FUN_0053a090 ((void (__cdecl *)(void *, void *, int))0x0053a090)
#define FUN_004950f0 ((void (__thiscall *)(void *, void *, int))0x004950f0)
#define FUN_0047f230 ((void (__thiscall *)(void *, void *, void *, void *, int, int, int))0x0047f230)
#define FUN_00500650 ((void (__thiscall *)(void *, int, int, int, int))0x00500650)
#define FUN_00495590 ((void (__thiscall *)(void *))0x00495590)
#define DAT_005a7d90 ((char *)0x005a7d90)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005cc9d4 (*(int *)0x005cc9d4)
#define DAT_00583650 (*(int *)0x00583650)
#define DAT_00583648 (*(int *)0x00583648)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005ae958 ((void *)0x005ae958)
#define DAT_005ae974 (*(int *)0x005ae974)
#define DAT_005a9e04 ((void *)0x005a9e04)
#define DAT_005a9de8 (*(int *)0x005a9de8)
#define DAT_005a9dec (*(void **)0x005a9dec)
#define DAT_005d22f0 ((void *)0x005d22f0)
#define PTR_s___d_turns_0055d600 (*(void **)0x0055d600)
#define DAT_00585170 (*(int *)0x00585170)
#define DAT_00584ae8 ((void *)0x00584ae8)
#define DAT_0055d608 ((int *)0x0055d608)
#define DAT_0055d628 ((int *)0x0055d628)
#define DAT_0054dcb8 (*(double *)0x0054dcb8)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004ba2b0 1
undefined4 __thiscall rb_004ba2b0(void *this, int px, int py, int unused)
{
  float v[6];     /* local_40: projection out, v[3..5] used */
  int w[5];       /* local_74 (caption surface), local_70, local_6c, local_68, local_64 */
  int rect[4];
  int n, step, start, end, i;
  int cell_x, cell_y, k, sx, dxs, dys, rev;
  float10 t;
  double d68, d64, fdx, fdy;
  unsigned st;

  rect[0] = rect[1] = rect[2] = rect[3] = 0;
  DAT_00583650 = DAT_00583650 + 0x10;
  if (*(int *)(DAT_005a7d90 + DAT_005a7d8c * 0x400) != DAT_005cc9d4) {
    DAT_00583650 = DAT_00583650 - 0x10;
    return 1;
  }
  if ((*(byte *)((int)this + 0x30) & 2) != 0) {
    DAT_00583650 = DAT_00583650 - 0x10;
    return 0;
  }
  if (FUN_004ba060(this) != 0) {
    DAT_00583650 = DAT_00583650 - 0x10;
    return 1;
  }
  k = *(int *)((int)this + 0x44);
  if (k < 0) {
    DAT_00583650 = DAT_00583650 - 0x10;
    return 1;
  }
  if (k == 4) {
    *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
    FUN_004f6890(this, px, py, 2);
    DAT_00583650 = DAT_00583650 - 0x10;
    return 1;
  }
  if (k == 2) FUN_004f5b30(this, 0);
  if (*(int *)((int)this + 0x44) == 3) FUN_004f5b30(this, 1);
  cell_y = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  cell_x = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
  FUN_004a6600(DAT_005ae958, v, cell_x, cell_y);
  sx = (int)__ftol(v[3]);
  w[1] = (int)__ftol(v[4]);
  w[2] = (int)__ftol(v[5]);
  k = *(int *)((int)this + 0x54) * 4;
  FUN_004a6600(DAT_005ae958, v, *(int *)((int)DAT_0055d608 + k) + cell_x, *(int *)((int)DAT_0055d628 + k) + cell_y);
  w[3] = (int)__ftol(v[3]);
  w[4] = (int)__ftol(v[4]);
  rev = ((int)__ftol(v[5]) > w[2]);
  n = *(int *)((int)this + 0x50);
  k = *(int *)((int)this + 0x44);
  dxs = (int)((unsigned)(sx - w[3]) << 8);
  dys = (int)((unsigned)(w[1] - w[4]) << 8);
  if (k == 2 || k == 3) n = n - 1;
  if (n < 1) n = 1;
  dxs = (dxs / n) >> 8;
  dys = (dys / n) >> 8;
  if (!rev) {
    start = 0; end = n; step = 1;
  } else {
    start = n - 1; end = -1; step = -1;
  }
  i = start;
  if (i != end) {
    fdx = (double)dxs; fdy = (double)dys; d68 = (double)w[3]; d64 = (double)w[4];
    do {
      t = (float10)i - (float10)DAT_0054dcb8;
      *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
      {
        int yy = (int)__ftol(((float10)fdy) * t + (float10)d64);
        int xx = (int)__ftol(((float10)fdx) * t + (float10)d68);
        FUN_004f6890(this, xx + px - sx, yy + py - w[1], 2);
      }
      i += step;
    } while (i != end);
  }
  st = *(unsigned *)((int)this + 0x44);
  if (st == 2 || st == 3) {
    FUN_004f5b30(this, (int)st);
    *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
    FUN_004f6890(this, px, py, 2);
    if (DAT_005ae974 == 0) {
      FUN_004747d0(DAT_005a9e04, px, py, 1);
      DAT_005ae974 = 1;
    }
    if (DAT_005a9de8 >= 1) {
      FUN_0053a090(DAT_005d22f0, PTR_s___d_turns_0055d600, DAT_005a9de8);
      FUN_004950f0(&w[0], (void *)DAT_00585170, 0);
      if (w[0] != 0) {
        w[2] = 0x180;
        rect[0] = px; rect[1] = py; rect[2] = 100; rect[3] = 0x14;
        FUN_0047f230(DAT_005a9dec, &w[0], DAT_005d22f0, rect, 2, -1, 0);
        FUN_00500650(DAT_00584ae8, rect[0], rect[1], rect[0] + rect[2], rect[1] + rect[3]);
      }
      DAT_00583648 = DAT_00583648 - 0x20;
      FUN_00495590(&w[0]);
    }
  }
  DAT_00583650 = DAT_00583650 - 0x10;
  return 1;
}
