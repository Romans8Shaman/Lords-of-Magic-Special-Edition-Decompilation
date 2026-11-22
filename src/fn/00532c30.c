/* Rebuilt from lomse.exe @ 0x00532c30 (__thiscall, ret 0x10): spiral search on the this+0x6c x this+0x70 grid.
 * Starts at cell param_3 (x = p3 % w, y = p3 / w), walks rings outward (right/down/left/up/right legs, ring count
 * limited by param_2), and for every cell index 004a51c0(this,x,y) accepted by 00532820(this, idx, 0, p3, 0, p4) keeps
 * the one with the smallest (*param_1)[idx]. Returns that index (-1 if none) once the ring limit is passed, or -1
 * after w*h steps. Both divisions are done up front, as in the original (w == 0 faults there too).
 * Hand-written from the disassembly. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_00532820 ((int (__thiscall *)(void *, int, int, int, int, int))0x00532820)

#define LOM_SELF_00532c30 1
int __thiscall rb_00532c30(void *this_, int **param_1, int param_2, int param_3, int param_4)
{
  volatile int vx, vy;
  int x, y, count, idx, v;
  int state = 0, leg = 0, len = 1, ring = 0;
  int best = 0x7ffffffe, bestidx = -1;
  int w = *(int *)((char *)this_ + 0x6c);

  vx = param_3 % w;
  vy = param_3 / w;
  x = vx;
  y = vy;
  count = *(int *)((char *)this_ + 0x70) * w;
  if (count <= 0) return -1;
  do {
    idx = FUN_004a51c0(this_, x, y);
    if (FUN_00532820(this_, idx, 0, param_3, 0, param_4) != 0) {
      v = (*param_1)[idx];
      if (v < best) {
        best = v;
        bestidx = idx;
      }
    }
    switch (state) {
    case 0:
      ring = ring + 1;
      if (ring > param_2) return bestidx;
      x = x + 1;
      len = len + 2;
      state = 1;
      leg = len - 2;
      break;
    case 1:
      y = y + 1;
      leg = leg - 1;
      if (leg == 0) { state = 2; leg = len - 1; }
      break;
    case 2:
      x = x - 1;
      leg = leg - 1;
      if (leg == 0) { state = 3; leg = len - 1; }
      break;
    case 3:
      y = y - 1;
      leg = leg - 1;
      if (leg == 0) { state = 4; leg = len - 1; }
      break;
    case 4:
      x = x + 1;
      leg = leg - 1;
      if (leg == 0) state = 0;
      break;
    }
    count = count - 1;
  } while (count > 0);
  return -1;
}
