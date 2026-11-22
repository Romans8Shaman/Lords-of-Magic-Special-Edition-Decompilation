/* Hand-written from lomse.exe 0x004a59d0 (__thiscall, ret 0xc: x, y, float h): terrain "flood" of height h around (x,y).
 * Sets cell(x,y).h = h (old value kept for the direction test), notifies 00517a50/004a55d0 for the 2x2 cell block, then
 * walks rings of radius r (from 1.0 down by DAT_0054dab0) around (x,y); on each ring steps angle with cos/sin __ftol and
 * lowers (or raises) neighbouring cells to a slope-limited height l14. Always returns 1.
 * x87 detail kept from the asm (float10 intermediates): fildl*double, da94/sum*da98, l18-da88, c*t +/- h, and every fcomps
 * compares the UNROUNDED float10 value (fsts/fstps keep st0 / compare before the store is rounded away). Ghidra had narrowed
 * the double constants to float and compared the rounded floats. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_004a5170 ((int (__thiscall *)(void *, int, int))0x004a5170)
#define FUN_004a55d0 ((undefined4 (__thiscall *)(void *, int, int))0x004a55d0)
#define FUN_00517a50 ((undefined4 (__thiscall *)(void *, int, int))0x00517a50)
#define K_da88 (*(double *)0x0054da88)
#define K_da90 (*(float *)0x0054da90)
#define K_da94 (*(float *)0x0054da94)
#define K_da98 (*(double *)0x0054da98)
#define K_daa0 (*(double *)0x0054daa0)
#define K_daa8 (*(float *)0x0054daa8)
#define K_daac (*(float *)0x0054daac)
#define K_dab0 (*(float *)0x0054dab0)

#define LOM_SELF_004a59d0 1
/* x87 fcomps/fcompl + fnstsw with a MEMORY operand, like the original: C0 (0x100) = st0<src or unordered, C3 (0x4000) = equal
 * or unordered. A C float compare would use fucom (no IE on QNaN) and load the operand separately (DE even when the other
 * operand is a NaN), so the original's compare is reproduced with the real instruction. */
static inline unsigned _fcomps_sw(float10 a, const volatile float *m) {
  volatile float10 va = a; unsigned sw;
  __asm__ volatile("fldt %1\n\tfcomps %2\n\tfnstsw %%ax" : "=a"(sw) : "m"(va), "m"(*m) : "cc");
  return sw;
}
static inline unsigned _fcompl_sw(float10 a, const volatile double *m) {
  volatile float10 va = a; unsigned sw;
  __asm__ volatile("fldt %1\n\tfcompl %2\n\tfnstsw %%ax" : "=a"(sw) : "m"(va), "m"(*m) : "cc");
  return sw;
}
#define FCOMS_C0(a, m) ((_fcomps_sw((float10)(a), &(m)) & 0x100) != 0)
#define FCOMS_C0C3(a, m) ((_fcomps_sw((float10)(a), &(m)) & 0x4100) != 0)
#define FCOML_C0(a, m) ((_fcompl_sw((float10)(a), &(m)) & 0x100) != 0)

undefined4 __thiscall rb_004a59d0(void *this, int param_1, int param_2, uint p3bits)
{
  volatile float l18, l14, ang, fv3, step;   /* stack floats of the original (0x10,0x14,0x18,0x20,0x24) */
  float old;
  float *pf;
  int idx, flag, found, nx, ny, a, b, m;
  float10 t, res, s;
  float param_3 = __BC(float, p3bits);
  volatile float p3m = param_3;       /* the original's stack argument (fcomps operand) */

  idx = FUN_004a5170(this, param_1, param_2);
  pf = (float *)(*(int *)((int)this + 0x54) + 4 + idx * 8);
  old = *pf;
  flag = !FCOMS_C0(old, p3m);       /* fcomps + test C0: 0 when old < p3 or unordered */
  *(uint *)pf = p3bits;
  FUN_00517a50(&DAT_005876d0, param_1, param_2);
  FUN_004a55d0(this, param_1, param_2);
  FUN_004a55d0(this, param_1 - 1, param_2);
  FUN_004a55d0(this, param_1, param_2 - 1);
  FUN_004a55d0(this, param_1 - 1, param_2 - 1);
  a = *(int *)((int)this + 0x5c);
  b = *(int *)((int)this + 0x60);
  m = (a < b) ? b : a;
  l18 = 1.0f;
  fv3 = (float)((float10)m * (float10)K_da88);
  if (!FCOMS_C0(K_da90, fv3)) return 1;   /* fcomps: da90 < fv3 or unordered continues */
  for (;;) {
    a = *(int *)((int)this + 0x5c);
    b = *(int *)((int)this + 0x60);
    step = (float)(((float10)K_da94 / (float10)(a + b)) * (float10)K_da98);
    t = (float10)l18 - (float10)K_da88;
    if (flag) {
      l14 = (float)((float10)*(float *)((int)this + 0xc) * t + (float10)param_3);
    } else {
      res = (float10)param_3 - (float10)*(float *)((int)this + 0xc) * t;
      l14 = (float)res;
      if (FCOML_C0(res, K_daa0)) return 1;
    }
    found = 0;
    ang = 0.0f;
    do {
      float10 an = (float10)ang;
      nx = (int)(long long)(fcos(an) * (float10)l18) + param_1;
      ny = (int)(long long)(fsin((float10)ang) * (float10)l18) + param_2;
      idx = FUN_004a5170(this, nx, ny);
      pf = (float *)(*(int *)((int)this + 0x54) + 4 + idx * 8);
      if (flag) {
        res = (float10)l14 - (float10)K_daa8;
        if (FCOMS_C0(res, *pf)) goto write;
      } else {
        res = (float10)l14 - (float10)K_daac;
        if (!FCOMS_C0C3(res, *pf)) goto write;
      }
      goto next;
    write:
      *(uint *)pf = __BC(uint, (float)l14);
      FUN_00517a50(&DAT_005876d0, nx, ny);
      FUN_004a55d0(this, nx, ny);
      FUN_004a55d0(this, nx - 1, ny);
      FUN_004a55d0(this, nx, ny - 1);
      FUN_004a55d0(this, nx - 1, ny - 1);
      found = 1;
    next:
      s = (float10)step + (float10)ang;
      ang = (float)s;
    } while (FCOMS_C0(s, K_da94));
    if (!found) return 1;
    s = (float10)l18 - (float10)K_dab0;
    l18 = (float)s;
    if (!FCOMS_C0(s, fv3)) return 1;
  }
}
