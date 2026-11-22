/* Rebuilt from lomse.exe FUN_00540380 @ 0x00540380 (40 bytes). HAND (2026-11-13, was asmfn):
 * CRT _control87 core: old = fnstcw; fldcw((new & mask) | (old & ~mask)); return (int)(short)old.
 * The new word is stored over the `mask` arg slot before fldcw, as in the original. */
#include "lom.h"

#define LOM_SELF_00540380 1
int __cdecl rb_00540380(unsigned int newv, unsigned int mask)
{
  unsigned int old = 0;
  __asm__ __volatile__("wait\n\tfnstcw %0" : "=m"(*(unsigned short *)&old));
  mask = (newv & mask) | (old & ~mask);
  __asm__ __volatile__("fldcw %0" : : "m"(*(volatile unsigned short *)&mask));
  return (int)(short)old;
}
