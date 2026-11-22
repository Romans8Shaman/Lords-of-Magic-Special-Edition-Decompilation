/* Rebuilt from lomse.exe FUN_0053f8d0 @ 0x0053f8d0 (80 bytes). HAND (2026-11-13, was asmfn):
 * CRT math error helper (_handle_qnan1-style): (op, double x, cw).
 * If [00577b9c] == 0: return FUN_00540050(1, op, x, 0.0, x, cw) (result in st0).
 * Else: *_errno() = EDOM (0x21); _control87(cw, 0xffff); return x.
 * x is moved as two raw dwords (no x87 load) like the original, so a NaN/SNaN argument reaches the callee unchanged;
 * the only x87 load is the final fld of x on the errno path, as in the original. */
#include "lom.h"

#define DAT_00577b9c (*(volatile int *)0x00577b9c)
#define FUN_00540050 ((double (__cdecl *)(int, int, uint, uint, uint, uint, uint, uint, uint))0x00540050)
#define FUN_0053b4c0 ((int *(__cdecl *)(void))0x0053b4c0)
#define FUN_00540380 ((int (__cdecl *)(uint, uint))0x00540380)

#define LOM_SELF_0053f8d0 1
double __cdecl rb_0053f8d0(int op, uint x_lo, uint x_hi, uint cw)
{
  if (DAT_00577b9c == 0)
    return FUN_00540050(1, op, x_lo, x_hi, 0, 0, x_lo, x_hi, cw);
  *FUN_0053b4c0() = 0x21;
  FUN_00540380(cw, 0xffff);
  return *(volatile double *)&x_lo;
}
