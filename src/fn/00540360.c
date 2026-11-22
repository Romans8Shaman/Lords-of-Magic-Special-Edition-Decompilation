/* Rebuilt from lomse.exe FUN_00540360 @ 0x00540360 (17 bytes). HAND (2026-11-13, was asmfn):
 * CRT _clearfp helper: fnstsw; fnclex; return (int)(short)old status word. MSVC CRT source does this with __asm. */
#include "lom.h"

#define LOM_SELF_00540360 1
int __cdecl rb_00540360(void)
{
  short sw;
  __asm__ __volatile__("fnstsw %0\n\tfnclex" : "=m"(sw));
  return (int)sw;
}
