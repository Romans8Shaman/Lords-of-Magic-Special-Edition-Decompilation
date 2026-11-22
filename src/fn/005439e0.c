/* Rebuilt from lomse.exe FUN_005439e0 @ 0x005439e0 (139 bytes). HAND (2026-11-13, was asmfn; Ghidra body was empty):
 * CRT _hw_cw(abstract control word) -> x87 control word: exception masks, precision (_MCW_PC), rounding (_MCW_RC),
 * infinity control (_IC_AFFINE). */
#include "lom.h"

#define LOM_SELF_005439e0 1
uint __cdecl rb_005439e0(uint cw)
{
  uint r = 0;
  if (cw & 0x10) r = 1;            /* _EM_INVALID  -> IM */
  if (cw & 0x8) r |= 4;            /* _EM_ZERODIVIDE -> ZM */
  if (cw & 0x4) r |= 8;            /* _EM_OVERFLOW -> OM */
  if (cw & 0x2) r |= 0x10;         /* _EM_UNDERFLOW -> UM */
  if (cw & 0x1) r |= 0x20;         /* _EM_INEXACT -> PM */
  if (cw & 0x80000) r |= 2;        /* _EM_DENORMAL -> DM */
  switch (cw & 0x300) {            /* rounding */
  case 0x100: r |= 0x400; break;
  case 0x200: r |= 0x800; break;
  case 0x300: r |= 0xc00; break;
  }
  switch (cw & 0x30000) {          /* precision */
  case 0: r |= 0x300; break;
  case 0x10000: r |= 0x200; break;
  }
  if (cw & 0x40000) r |= 0x1000;   /* _IC_AFFINE */
  return r;
}
