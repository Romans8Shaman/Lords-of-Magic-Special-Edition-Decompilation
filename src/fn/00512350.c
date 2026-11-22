/* Rebuilt from lomse.exe FUN_00512350 @ 0x00512350 (954 bytes, __thiscall, ret 8). HAND (2026-11-13) from the full asm:
 * draws one map cell (param_1 = col, param_2 = row) through 00512710 (two triangles) and then clips/draws the cell's
 * bounding rect. Earlier gen/g112 C missed 4 stores of vertex 0 (y, u, v, w) because Ghidra merged them into local_68,
 * so 00512710 got uninitialised vertex data (r91b crash). All 20 ints of the four vertices are written here. */
#include "lom.h"
#define DAT_005ae9ac (*(int *)0x005ae9ac)
#define DAT_005aeb84 (*(int *)0x005aeb84)
#define DAT_005aeb88 (*(int *)0x005aeb88)
#define DAT_005aec3c (*(int *)0x005aec3c)
#define FUN_004755e0 ((int * (__fastcall *)(int))0x004755e0)
#define FUN_004756c0 ((undefined4 (__thiscall *)(void *, int *))0x004756c0)
#define FUN_00512710 ((undefined4 (__thiscall *)(void *, int *, int *, int *, int *, int))0x00512710)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)

#define LOM_SELF_00512350 1
void __thiscall rb_00512350(void *this, int param_1, int param_2)
{
  typedef int (__thiscall *cell_t)(void *, int, int, int, int, int, int);
  int V[20];
  int slot = param_1;   /* the original reuses the param_1 stack slot as a local (col*8+8) */
  int *piVar2;
  int *rec;
  int k, ia, ib, ic, id, bx, by;
  int x0, y0, x1, y1;
  char *th = (char *)this;
  x0 = -*(int *)(th + 0x1fc);
  y0 = -*(int *)(th + 0x200);
  x1 = (*(int *)(th + 0x1ec) * 2 - *(int *)(th + 0x1fc)) + 0x27f;
  y1 = (*(int *)(th + 0x1f0) * 2 - *(int *)(th + 0x200)) + 0x17f;
  k = (*(cell_t *)(th + 0x220))(this, param_1, param_2, x0, y0, x1, y1);
  if (k < 0) return;
  piVar2 = FUN_004755e0(0x584ae8);
  if (piVar2 == 0) {
    *(int *)(th + 0x202c8) = 1;
    return;
  }
  {
    int ci = (int)*(short *)(DAT_005ae9ac + (*(int *)(th + 0x202c0) * param_2 + param_1) * 8);
    if (ci < 0 || DAT_005aeb88 <= ci) rec = 0;
    else rec = (int *)(DAT_005aeb84 + ci * 0x10);
  }
  if (rec != 0) {
    int c8 = param_1 * 8;
    int cn = param_1 * 8 + 8;
    int *tab = *(int **)(th + 0x202ac);
    char *row0 = (char *)tab[param_2];
    char *row1 = (char *)tab[param_2 + 1];
    int M = *(int *)(th + 0x22c + k * 4), N = *(int *)(th + 0x250 + k * 4);
    int cx = *(int *)(th + 0x1fc), cy = *(int *)(th + 0x200);
    int r0 = rec[0], r1 = rec[1], r2 = rec[2], r3 = rec[3];
    slot = cn;
    V[0] = ((int)*(short *)(row0 + c8) + M + cx) * 0x10000;
    V[1] = ((int)*(short *)(row0 + c8 + 2) + N + cy) * 0x10000;
    V[2] = r0 * 0x10000;
    V[3] = r1 * 0x10000;
    V[4] = *(int *)(row0 + c8 + 4);
    V[5] = ((int)*(short *)(row0 + cn) + M + cx) * 0x10000;
    V[6] = ((int)*(short *)(row0 + c8 + 10) + N + cy) * 0x10000;
    V[7] = (r2 + r0) * 0x10000 - 0x10000;
    V[8] = r1 * 0x10000;
    V[9] = *(int *)(row0 + c8 + 0xc);
    V[10] = ((int)*(short *)(row1 + c8) + M + cx) * 0x10000;
    V[11] = ((int)*(short *)(row1 + c8 + 2) + N + cy) * 0x10000;
    V[12] = r0 * 0x10000;
    V[13] = (r3 + r1) * 0x10000 - 0x10000;
    V[14] = *(int *)(row1 + c8 + 4);
    V[15] = ((int)*(short *)(row1 + cn) + M + cx) * 0x10000;
    V[16] = ((int)*(short *)(row1 + c8 + 10) + N + cy) * 0x10000;
    V[17] = V[7];
    V[18] = V[13];
    V[19] = *(int *)(row1 + c8 + 0xc);
    FUN_00512710(this, piVar2, &V[0], &V[5], &V[10], *(int *)(th + 0x284));
    FUN_00512710(this, piVar2, &V[15], &V[10], &V[5], *(int *)(th + 0x284));
  }
  if (DAT_005aec3c == 0) { ia = 2; ib = 0; ic = 1; id = 3; }
  else if (DAT_005aec3c == 2) { ia = 3; ib = 2; ic = 0; id = 1; }
  else if (DAT_005aec3c == 4) { ia = 1; ib = 3; ic = 2; id = 0; }
  else if (DAT_005aec3c == 6) { ia = 0; ib = 1; ic = 3; id = 2; }
  else { ia = slot; ib = slot; ic = slot; id = slot; }
  bx = *(int *)(th + 0x1b0);
  by = *(int *)(th + 0x1b4);
  {
    int rx0 = (((int *)((char *)V + 0))[ia * 5] >> 16) - bx;
    int ry0 = (((int *)((char *)V + 4))[ib * 5] >> 16) - by;
    int rx1 = (((int *)((char *)V + 0))[ic * 5] >> 16) - bx;
    int ry1 = (((int *)((char *)V + 4))[id * 5] >> 16) - by;
    if (ry1 >= 0x180) ry1 = 0x17f;
    FUN_00500650((void *)0x584ae8, rx0, ry0, rx1, ry1);
    FUN_00476010((void *)0x5a7a14, rx0, ry0, rx1, ry1);
    FUN_004756c0((void *)0x584ae8, piVar2);
  }
}
