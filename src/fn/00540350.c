/* Rebuilt from lomse.exe FUN_00540350 @ 0x00540350 (16 bytes). HAND (2026-11-13, was asmfn):
 * CRT _statusfp helper: wait; fnstsw; return (int)(short)status word. MSVC CRT source does this with __asm. */
#include "lom.h"

#define LOM_SELF_00540350 1
int __cdecl rb_00540350(void)
{
  short sw;
  __asm__ __volatile__("wait\n\tfnstsw %0" : "=m"(sw));
  return (int)sw;
}
