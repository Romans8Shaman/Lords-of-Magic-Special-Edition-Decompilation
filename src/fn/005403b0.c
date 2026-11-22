/* Hand-written from lomse.exe 0x005403b0 disassembly (CRT x87 exception raiser, cdecl, 1 arg byte at [ebp+8]).
 * Raises x87 conditions selected by the flag byte: 0x01 invalid (fistp of 2^1041 into the arg slot),
 * 0x08 overflow (2^1041 -> double), 0x10 underflow (2^-4095 -> double), 0x04 zero-divide (1/0), 0x20 inexact (pi -> double).
 * Each test is followed by an FWAIT so unmasked exceptions fire at the same point. Constants live at 0x574cb8 / 0x574cc8. */
#include "lom.h"
#define BIG (*(volatile long double *)0x574cb8)
#define TINY (*(volatile long double *)0x574cc8)
#define LOM_SELF_005403b0 1
void __cdecl rb_005403b0(unsigned char flags)
{
  volatile double d;
  volatile int arg;
  int *argslot = (int *)__builtin_frame_address(0) + 2;  /* the caller's arg slot [ebp+8] */
  volatile long double zero = 0.0L, one = 1.0L, q;
  volatile long double pi = 3.14159265358979323846264338327950288L;  /* fldpi value, rounded to double by the store */
  if (flags & 1) { long double b = BIG; __asm__ volatile("fistpl %0" : "=m"(*argslot) : "t"(b) : "st"); __asm__ volatile("fwait"); }  /* fistp with the current rounding mode (C (int) would truncate via FCW) */
  if (flags & 8) { __asm__ volatile("fwait"); d = (double)BIG; __asm__ volatile("fwait"); }
  if (flags & 0x10) { d = (double)TINY; __asm__ volatile("fwait"); }
  if (flags & 4) { q = one / zero; __asm__ volatile("fwait"); }
  if (flags & 0x20) { d = (double)pi; __asm__ volatile("fwait"); }
}
