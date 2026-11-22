/* Rebuilt from lomse.exe FUN_00541d40 @ 0x00541d40 (149 bytes). HAND (2026-11-13, was asmfn):
 * CRT _isctype(c, mask): c in -1..255 -> _pctype[c] & mask; otherwise build the 1- or 2-byte (lead byte) MBCS string
 * in c's own argument slot (as the original does) and ask __crtGetStringTypeA(CT_CTYPE1, buf, n, &type, 0, 0, 1). */
#include "lom.h"

#define DAT_00574e88 (*(unsigned short **)0x00574e88)
#define FUN_00545c50 ((int (__cdecl *)(int, char *, int, unsigned short *, int, int, int))0x00545c50)

unsigned lom_inreg_00541d40[1] __asm__("lom_inreg_00541d40");
uint __cdecl lom_body_00541d40(int c, uint mask) __asm__("lom_body_00541d40");

#define LOM_SELF_00541d40 1
__attribute__((naked)) uint __cdecl rb_00541d40(int c, uint mask)
{
  __asm__("movl %ecx, lom_inreg_00541d40\n\tjmp lom_body_00541d40");
}

/* `type` lives in the slot of the original's `push ecx`: if the callee does not store it, it holds entry ECX's low word */
uint __cdecl lom_body_00541d40(int c, uint mask)
{
  unsigned short type = (unsigned short)lom_inreg_00541d40[0];
  volatile unsigned char *buf;
  int n;
  if ((uint)(c + 1) <= 0x100) return DAT_00574e88[c] & mask;
  buf = (volatile unsigned char *)&c;
  if (((unsigned char *)DAT_00574e88)[((c >> 8) & 0xff) * 2 + 1] & 0x80) {
    unsigned char hi = (unsigned char)(c >> 8), lo = (unsigned char)c;
    buf[0] = hi; buf[1] = lo; buf[2] = 0; n = 2;
  } else {
    buf[0] = (unsigned char)c; buf[1] = 0; n = 1;
  }
  if (FUN_00545c50(1, (char *)buf, n, &type, 0, 0, 1) == 0) return 0;
  return type & mask;
}
