/* Hand-written from lomse.exe 0x00457b60 (__thiscall, ret 0x24, 9 stack args) + Ghidra decomp: terrain/cell-mask update for a
 * rectangle (x0,y0,x1,y1 = p1..p4). Averages the float height table (this+0x54, idx*8+4) over the rect (float32 accumulator,
 * x87 fadds/fstps like the original), then for every cell of the whole grid (this+0x6c w, +0x70 h): height := average,
 * flags(this+0x64 table, dword at idx*8+4) &= 0xff5c0fff, inside the rect |= 0x1000, outside |= 0x4000/0x2000 by mode p9
 * (1/3/5/7 corner pairing with |dx| vs |dy|). Then re-smooths the border column/row with 00455d70, marks a 3-cell strip if
 * DAT_005ae918>1, and calls 004551f0 / 00455890 on 005ae8e8. */
#include "lom.h"

#define DAT_005ae8e8 (*(undefined *)0x005ae8e8)
#define DAT_005ae918 (*(int *)0x005ae918)
#define FUN_004551f0 ((undefined4 (__thiscall *)(void *, undefined1, undefined1, undefined1))0x004551f0)
#define FUN_00455890 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined1, undefined4, undefined4))0x00455890)
#define FUN_00455d70 ((float10 (__thiscall *)(void *, int, int))0x00455d70)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)

#define LOM_SELF_00457b60 1
static inline int _abs_(int d) { unsigned s = (unsigned)d >> 31; return (int)(((unsigned)d ^ (0u - s)) + s); }
/* original: a=|..|, b=|..|; a>=b <=> SBORROW(a,b)==((a-b)<0) */
#define GE(a,b) (SBORROW4((a),(b)) == ((int)((a) - (b)) < 0))

void __thiscall
rb_00457b60(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,undefined1 param_8,int param_9)
{
  volatile float acc;      /* original keeps this in a stack float (fadds mem / fstps) */
  int cnt = 0;
  int row, col, w, i, k;
  int p1 = param_1, p2 = param_2, p3 = param_3, p4 = param_4;
  uint *cell;
  uint flg;

  acc = 0.0f;
  for (row = p2; row <= p4; row++) {
    if (p1 <= p3) {
      cnt = cnt + 1 + (p3 - p1);
      col = p1;
      do {
        k = FUN_004a5170(this, col, row);
        col++;
        acc = *(float *)(*(int *)((int)this + 0x54) + 4 + k * 8) + acc;
      } while (col <= p3);
    }
  }
  if (0 < cnt) {
    acc = (float)((float10)acc / (float10)cnt);
  }
  row = 0;
  if (0 < *(int *)((int)this + 0x70)) {
    do {
      w = *(int *)((int)this + 0x6c);
      col = 0;
      if (0 < w) {
        do {
          k = FUN_004a5170(this, col, row);
          i = (row * w + col) * 8;
          *(float *)(*(int *)((int)this + 0x54) + 4 + k * 8) = acc;
          cell = (uint *)(*(int *)((int)this + 100) + 4 + i);
          *cell = *cell & 0xff5c0fff;
          flg = 0;
          if (col < p1 || p3 < col || row < p2 || p4 < row) {
            if (param_9 == 1) {
              if (col < p3) flg = 0x4000;
              else if (p2 < row) flg = 0x2000;
              else { int a = _abs_(row - p2), b = _abs_(col - p3); flg = GE(a, b) ? 0x4000 : 0x2000; }
            } else if (param_9 == 3) {
              if (col < p3) flg = 0x4000;
              else if (p4 <= row) { int a = _abs_(row - p4), b = _abs_(col - p3); flg = GE(a, b) ? 0x4000 : 0x2000; }
              else flg = 0x2000;
            } else if (param_9 == 5) {
              if (row < p4) flg = 0x2000;
              else if (p1 < col) flg = 0x4000;
              else { int a = _abs_(col - p1), b = _abs_(row - p4); flg = (a <= b) ? 0x4000 : 0x2000; }
            } else if (param_9 == 7) {
              if (p1 < col) flg = 0x4000;
              else if (row <= p2) { int a = _abs_(col - p1), b = _abs_(row - p2); flg = GE(b, a) ? 0x4000 : 0x2000; }
              else flg = 0x2000;
            }
          } else {
            flg = 0x1000;
          }
          if (flg) *cell = *cell | flg;
          w = *(int *)((int)this + 0x6c);
          col++;
        } while (col < w);
      }
      row++;
    } while (row < *(int *)((int)this + 0x70));
  }
  if ((p1 < 1) || (*(int *)((int)this + 0x6c) + -1 <= p1)) {
    col = p3 + 1;
  } else {
    col = p1 + -1;
  }
  if ((p2 < 1) || (w = p2 + -1, *(int *)((int)this + 0x70) + -1 <= p2)) {
    w = p4 + 1;
  }
  for (; p2 <= p4; p2++) {
    k = FUN_004a5170(this, col, p2);
    *(float *)(*(int *)((int)this + 0x54) + 4 + k * 8) = (float)FUN_00455d70(this, col, p2);
  }
  for (; p1 <= p3; p1++) {
    k = FUN_004a5170(this, p1, w);
    *(float *)(*(int *)((int)this + 0x54) + 4 + k * 8) = (float)FUN_00455d70(this, p1, w);
  }
  if (1 < DAT_005ae918) {
    if ((param_7 == 0) || (param_7 == 4)) {
      for (i = 0; i < 3; i++) {
        k = (param_6 * *(int *)((int)this + 0x6c) + i + -1 + param_5) * 8;
        cell = (uint *)(*(int *)((int)this + 100) + 4 + k);
        *cell = *cell & 0xff5c0fff;
        *(byte *)(*(int *)((int)this + 100) + 6 + k) |= 1;
        *cell = *cell | 0x400000;
      }
    } else {
      for (i = 0; i < 3; i++) {
        k = ((i + -1 + param_6) * *(int *)((int)this + 0x6c) + param_5) * 8;
        cell = (uint *)(*(int *)((int)this + 100) + 4 + k);
        *cell = *cell & 0xff5c0fff;
        *(byte *)(*(int *)((int)this + 100) + 5 + k) |= 0x80;
        *cell = *cell | 0x400000;
      }
    }
  }
  FUN_004551f0(&DAT_005ae8e8, (char)param_7, param_8, (char)param_9);
  FUN_00455890(&DAT_005ae8e8, param_5, param_6, (char)param_7, 0xffffffff, 0xffffffff);
  return;
}
