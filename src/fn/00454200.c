/* Hand-written from lomse.exe 0x00454200 disassembly (__thiscall, ret 0xc): draws the outline of a 4-corner cell
 * quad: for corners (x,y),(x+1,y),(x+1,y+1),(x,y+1) it builds a 3-float vector {x-(w>>1), y-(h>>1), height(x,y)}
 * (this+0x5c / +0x60 half sizes, height via 004a5210), projects it with 00469ae0 on 005876d0 (out = v[3], v[4]),
 * converts with __ftol, then draws 4 edges with 00454030(x0,y0,x1,y1,colour). Behaviour-match target. */
#include "lom.h"

#define FUN_00454030 ((void (__cdecl *)(int, int, int, int, int))0x00454030)
#define FUN_00469ae0 ((undefined4 (__thiscall *)(void *, float *))0x00469ae0)
#define FUN_004a5210 ((float10 (__thiscall *)(void *, int, int))0x004a5210)
#define DAT_005876d0 (*(int *)0x005876d0)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00454200 1
void __thiscall rb_00454200(void *this, int x, int y, int colour)
{
  float v[5];
  longlong l[8];
  int i;
  int dx, dy;
  for (i = 0; i < 4; i++) {
    dx = (i == 1 || i == 2) ? 1 : 0;
    dy = (i >= 2) ? 1 : 0;
    v[0] = (float)((x - (*(int *)((int)this + 0x5c) >> 1)) + dx);
    v[1] = (float)((y - (*(int *)((int)this + 0x60) >> 1)) + dy);
    v[2] = (float)FUN_004a5210(this, x + dx, y + dy);
    FUN_00469ae0(&DAT_005876d0, v);
    l[2 * i] = __ftol((float10)v[3]);
    l[2 * i + 1] = __ftol((float10)v[4]);
  }
  FUN_00454030((int)l[0], (int)l[1], (int)l[2], (int)l[3], colour);
  FUN_00454030((int)l[2], (int)l[3], (int)l[4], (int)l[5], colour);
  FUN_00454030((int)l[4], (int)l[5], (int)l[6], (int)l[7], colour);
  FUN_00454030((int)l[6], (int)l[7], (int)l[0], (int)l[1], colour);
  return;
}
