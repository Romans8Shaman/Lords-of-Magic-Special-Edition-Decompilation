/* Rebuilt from lomse.exe FUN_005438e0 @ 0x005438e0 (59 bytes). HAND (2026-11-13, was asmfn):
 * CRT _controlfp(new, mask): abs = _abstract_cw(fnstcw); abs = (new & mask) | (abs & ~mask);
 * fldcw(_hw_cw(abs)); return abs.
 * The original stores the CW into the slot made by `push ecx`, so the dword passed to _abstract_cw has the
 * entry ECX high half (uninitialised local in the CRT source); captured with the inreg stub to stay identical. */
#include "lom.h"

#define FUN_00543940 ((uint (__cdecl *)(uint))0x00543940)
#define FUN_005439e0 ((uint (__cdecl *)(uint))0x005439e0)
unsigned lom_inreg_005438e0[1] __asm__("lom_inreg_005438e0");
uint __cdecl lom_body_005438e0(uint newv, uint mask) __asm__("lom_body_005438e0");

#define LOM_SELF_005438e0 1
__attribute__((naked)) uint __cdecl rb_005438e0(uint newv, uint mask)
{
  __asm__("movl %ecx, lom_inreg_005438e0\n\tjmp lom_body_005438e0");
}

uint __cdecl lom_body_005438e0(uint newv, uint mask)
{
  uint cw = lom_inreg_005438e0[0], a;
  __asm__ __volatile__("wait\n\tfnstcw %0" : "+m"(*(unsigned short *)&cw));
  a = FUN_00543940(cw);
  a = (newv & mask) | (a & ~mask);
  mask = FUN_005439e0(a);
  __asm__ __volatile__("fldcw %0" : : "m"(*(volatile unsigned short *)&mask));
  return a;
}
