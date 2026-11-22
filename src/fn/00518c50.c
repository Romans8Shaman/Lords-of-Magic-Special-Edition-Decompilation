/* Rebuilt from lomse.exe FUN_00518c50 @ 0x00518c50 (1142 bytes, __thiscall, ret 0x24). HAND (2026-11-13, was asmfn):
 * Draws a map-cell grid area through 00512710 (triangle pair per cell). Args (Ghidra lost most): a1..a4 = rect (x0,y0,x1,y1?)
 * as passed to the this+0x220 cell-test callback after subtracting the camera (this+0x1fc / +0x200), a5..a8 = second rect
 * (subtracted only when this+0x1d8 != 0), a9 = incremental flag. Returns 0 if this+0x284 == 0 or 004755e0(0x584ae8) is NULL.
 * Walks rows (this+0x1e8 .. this+0x202c4) x cols (this+0x1e4 .. this+0x202c0) (restart at 0,0 when a9 == 0); per cell calls the
 * callback (col,row,rect1) [and (col,row,rect2) if this+0x1d8; first non -1 wins]; -1 = skip. Cell entry = DAT_005ae9ac[(row*cols+col)*8]
 * short -> record in table DAT_005aeb84 (16 bytes, DAT_005aeb88 count, else NULL = skip). Builds 4 vertices of 5 ints (16.16 x,y from the
 * cell corner tables at this+0x202ac plus offsets this+0x22c/0x250[k], texture u/v from the record, +w) and calls 00512710 twice
 * (v0,v1,v2 and v3,v2,v1). In incremental mode (a9) stops after this+0x208 drawn cells and stores the next cell in this+0x1e4/0x1e8.
 * Finally 004756c0(0x584ae8, piVar1); returns 1. */
#include "lom.h"

#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005aeb84 (*(int *)0x005aeb84)
#define DAT_005aeb88 (*(int *)0x005aeb88)
#define FUN_004755e0 ((int * (__fastcall *)(int))0x004755e0)
#define FUN_004756c0 ((undefined4 (__thiscall *)(void *, int *))0x004756c0)
#define FUN_00512710 ((undefined4 (__thiscall *)(void *, int *, int *, int *, int *, int))0x00512710)

#define LOM_SELF_00518c50 1
undefined4 __thiscall rb_00518c50(void *this, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int flag)
{
  typedef int (__thiscall *cell_t)(void *, int, int, int, int, int, int);
  int *piVar1;
  int B[20];
  int row, col, k, k2, cnt, idx;
  int *piVar6;
  int R0, R1;
  int sx, sy, bx, by;
  int cols;

  if (*(int *)((int)this + 0x284) == 0) return 0;
  piVar1 = FUN_004755e0(0x584ae8);
  if (piVar1 == 0) return 0;
  a1 = a1 - *(int *)((int)this + 0x1fc);
  a3 = a3 - *(int *)((int)this + 0x1fc);
  a2 = a2 - *(int *)((int)this + 0x200);
  a4 = a4 - *(int *)((int)this + 0x200);
  if (*(int *)((int)this + 0x1d8) != 0) {
    a5 = a5 - *(int *)((int)this + 0x1fc);
    a7 = a7 - *(int *)((int)this + 0x1fc);
    a6 = a6 - *(int *)((int)this + 0x200);
    a8 = a8 - *(int *)((int)this + 0x200);
  }
  cnt = 0;
  if (flag == 0) {
    *(int *)((int)this + 0x1e4) = 0;
    *(int *)((int)this + 0x1e8) = 0;
  }
  row = *(int *)((int)this + 0x1e8);
  col = *(int *)((int)this + 0x1e4); /* the original reads an uninitialised stack slot here when row >= rows */
  if (row >= *(int *)((int)this + 0x202c4)) goto done;
  for (;;) {
    col = *(int *)((int)this + 0x1e4);
    if (col < *(int *)((int)this + 0x202c0)) {
      do {
        if (*(int *)((int)this + 0x1d8) != 0) {
          k = (*(cell_t *)((int)this + 0x220))(this, col, row, a1, a2, a3, a4);
          k2 = (*(cell_t *)((int)this + 0x220))(this, col, row, a5, a6, a7, a8);
          if (k == -1) {
            if (k2 == -1) goto next;
            k = k2;
          }
        } else {
          k = (*(cell_t *)((int)this + 0x220))(this, col, row, a1, a2, a3, a4);
          if (k == -1) goto next;
        }
        idx = (int)*(short *)(DAT_005ae9ac + (row * *(int *)((int)this + 0x202c0) + col) * 8);
        if (idx < 0 || idx >= DAT_005aeb88) piVar6 = 0;
        else piVar6 = (int *)(idx * 16 + DAT_005aeb84);
        if (piVar6 != 0) {
          R0 = *(int *)(*(int *)((int)this + 0x202ac) + row * 4);
          R1 = *(int *)(*(int *)((int)this + 0x202ac) + row * 4 + 4);
          sx = *(int *)((int)this + k * 4 + 0x22c) + *(int *)((int)this + 0x1fc);
          sy = *(int *)((int)this + k * 4 + 0x250) + *(int *)((int)this + 0x200);
          B[0] = ((int)*(short *)(R0 + col * 8) + sx) * 0x10000;
          B[1] = ((int)*(short *)(R0 + col * 8 + 2) + sy) * 0x10000;
          B[4] = *(int *)(R0 + col * 8 + 4);
          B[5] = ((int)*(short *)(R0 + col * 8 + 8) + sx) * 0x10000;
          B[6] = ((int)*(short *)(R0 + col * 8 + 10) + sy) * 0x10000;
          B[9] = *(int *)(R0 + col * 8 + 0xc);
          B[10] = ((int)*(short *)(R1 + col * 8) + sx) * 0x10000;
          B[11] = ((int)*(short *)(R1 + col * 8 + 2) + sy) * 0x10000;
          B[14] = *(int *)(R1 + col * 8 + 4);
          B[15] = ((int)*(short *)(R1 + col * 8 + 8) + sx) * 0x10000;
          B[16] = ((int)*(short *)(R1 + col * 8 + 10) + sy) * 0x10000;
          B[19] = *(int *)(R1 + col * 8 + 0xc);
          bx = piVar6[0] * 0x10000;
          by = piVar6[1] * 0x10000;
          B[2] = bx; B[12] = bx;
          B[3] = by; B[8] = by;
          B[7] = (piVar6[2] + piVar6[0]) * 0x10000 - 0x10000; B[17] = B[7];
          B[13] = (piVar6[3] + piVar6[1]) * 0x10000 - 0x10000; B[18] = B[13];
          FUN_00512710(this, piVar1, &B[0], &B[5], &B[10], *(int *)((int)this + 0x284));
          FUN_00512710(this, piVar1, &B[15], &B[10], &B[5], *(int *)((int)this + 0x284));
        }
        if (flag != 0) {
          cnt = cnt + 1;
          if (cnt >= *(int *)((int)this + 0x208)) {
            *(int *)((int)this + 0x1e4) = col + 1;
            *(int *)((int)this + 0x1e8) = row;
            if (col + 1 >= *(int *)((int)this + 0x202c0)) {
              *(int *)((int)this + 0x1e4) = 0;
              *(int *)((int)this + 0x1e8) = row + 1;
            }
            goto fin;
          }
        }
next:
        col = col + 1;
      } while (col < *(int *)((int)this + 0x202c0));
    }
    row = row + 1;
    *(int *)((int)this + 0x1e4) = 0;
    if (row >= *(int *)((int)this + 0x202c4)) break;
  }
done:
  *(int *)((int)this + 0x1e4) = col;
  *(int *)((int)this + 0x1e8) = row;
fin:
  FUN_004756c0((void *)0x584ae8, piVar1);
  return 1;
}
