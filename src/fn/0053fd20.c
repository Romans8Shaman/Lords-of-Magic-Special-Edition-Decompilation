/* Hand C for lomse.exe FUN_0053fd20 @ 0x0053fd20 (816 bytes, __cdecl).
 * CRT _handle_exc. Written from the original instruction stream in
 * src/asmfn/0053fd20.c. Raises 005403b0 for unmasked exceptions, rewrites
 * *pvalue on overflow (rounding via cw & 0xc00 against +/-inf at 0x574c90
 * and +/-DBL_MAX at 0x574ca0) and on underflow (00540240 + denormal shift).
 * Returns 1 iff no bits of (flags & 0x1f) remain after handling.
 * x87 compares use fldl/fcompl/fnstsw to match the original C0/C3 tests
 * (test ah,0x41 / 0x40 / 0x01). Sign of overflow/underflow stores uses
 * fchs the same way. The original aligns ESP to 8 and uses a 0x14-byte
 * scratch frame; C does not need that exact layout (no SEH / no fs:0).
 * Verification needs an FPSW compare (same reason as 005403b0 / g223).
 */
#include "lom.h"

#define LOM_SELF_0053fd20 1

#define FUN_005403b0 ((void (__cdecl *)(uint))0x005403b0)
#define FUN_00540240 ((float10 (__cdecl *)(uint, uint, int *))0x00540240)

#define DAT_INF  (*(double *)0x00574c90)
#define DAT_MAX  (*(double *)0x00574ca0)
#define DAT_ZERO (*(double *)0x0054f0f8)

static unsigned short fcompl_sw(double *p)
{
  unsigned short sw;
  __asm__ volatile (
    "fldl %1\n"
    "fcompl %2\n"
    "fnstsw %0"
    : "=a"(sw)
    : "m"(*p), "m"(DAT_ZERO)
    : "st", "cc", "memory"
  );
  return sw;
}

static void store_neg(double *dst, double *src)
{
  __asm__ volatile (
    "fldl %1\n"
    "fchs\n"
    "fstpl %0"
    : "=m"(*dst)
    : "m"(*src)
    : "st", "memory"
  );
}

uint __cdecl rb_0053fd20(uint flags, double *pvalue, uint cw)
{
  uint esi;
  int exp;
  int neg;
  uint nshift;
  uint lo;
  uint hi;
  unsigned short sw;
  union {
    double d;
    struct { uint lo; uint hi; } w;
    unsigned char b[8];
  } local;

  esi = flags & 0x1f;

  if (((flags & 8) != 0) && ((cw & 1) != 0)) {
    FUN_005403b0(1);
    esi &= 0xfffffff7;
    goto end_join;
  }
  if (((flags & 4) != 0) && ((cw & 4) != 0)) {
    FUN_005403b0(4);
    esi &= 0xfffffffb;
    goto end_join;
  }
  if (((flags & 1) != 0) && ((cw & 8) != 0)) {
    FUN_005403b0(8);
    {
      uint rc = cw & 0xc00;
      sw = fcompl_sw(pvalue);
      if (rc > 0x400) {
        if (rc == 0x800) {
          if ((sw & 0x4100) == 0) {
            *pvalue = DAT_INF;
          } else {
            store_neg(pvalue, &DAT_MAX);
          }
        } else if (rc == 0xc00) {
          if ((sw & 0x4100) == 0) {
            *pvalue = DAT_MAX;
          } else {
            store_neg(pvalue, &DAT_MAX);
          }
        }
      } else if (rc == 0x400) {
        if ((sw & 0x4100) == 0) {
          *pvalue = DAT_MAX;
        } else {
          store_neg(pvalue, &DAT_INF);
        }
      } else if (rc == 0) {
        if ((sw & 0x4100) == 0) {
          *pvalue = DAT_INF;
        } else {
          store_neg(pvalue, &DAT_INF);
        }
      }
      esi &= 0xfffffffe;
    }
    goto end_join;
  }

  if (((flags & 2) != 0) && ((cw & 0x10) != 0)) {
    esi = 0;
    if ((flags & 0x10) != 0) {
      esi = 1;
    }
    lo = *(uint *)pvalue;
    hi = *((uint *)pvalue + 1);
    local.w.lo = lo;
    local.w.hi = hi;
    sw = fcompl_sw(&local.d);
    if ((sw & 0x4000) != 0) {
      esi = 1;
    } else {
      local.d = (double)FUN_00540240(lo, hi, &exp);
      exp += -0x600;
      if (exp < -0x432) {
        esi = 1;
        *(uint *)pvalue = 0;
        *((uint *)pvalue + 1) = 0;
        local.w.lo = 0;
        local.w.hi = 0;
      } else {
        sw = fcompl_sw(&local.d);
        neg = ((sw & 0x0100) != 0);
        {
          uint ax = ((uint)local.b[6] & 0xf) | 0x10;
          local.b[6] = (unsigned char)ax;
          local.b[7] = (unsigned char)(ax >> 8);
        }
        if (exp < -0x3fd) {
          nshift = (uint)(0xfffffc03 - exp);
          do {
            if (((local.w.lo & 1) != 0) && (esi == 0)) {
              esi = 1;
            }
            lo = local.w.lo >> 1;
            local.w.lo = lo;
            if ((local.w.hi & 1) != 0) {
              local.w.lo |= 0x80000000;
            }
            local.w.hi >>= 1;
            nshift = nshift - 1;
          } while (nshift != 0);
        }
        if (neg) {
          store_neg(&local.d, &local.d);
        }
        *(uint *)pvalue = local.w.lo;
        *((uint *)pvalue + 1) = local.w.hi;
      }
    }
    if (esi != 0) {
      FUN_005403b0(0x10);
    }
    esi = (flags & 0x1f) & 0xfffffffd;
  }

end_join:
  if (((flags & 0x10) != 0) && ((cw & 0x20) != 0)) {
    FUN_005403b0(0x20);
    esi &= 0xffffffef;
  }
  return (uint)(esi == 0);
}
