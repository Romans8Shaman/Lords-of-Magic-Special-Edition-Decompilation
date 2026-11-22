/* Rebuilt from lomse.exe FUN_00544720 @ 0x00544720 (20 bytes). HAND (2026-11-12, was uncovered; Ghidra cc unknown):
 * CRT exit helper: call 0053ce20; if byte [005d52e8] != 0 tail-jump to 00547940 (no args, returns its eax);
 * otherwise return eax of 0053ce20 with AL replaced by the (zero) flag byte (`mov al,[5d52e8]; test; je; ret`). */
#include "lom.h"

#define FUN_0053ce20 ((uint (__cdecl *)(void))0x0053ce20)
#define FUN_00547940 ((int (__cdecl *)(void))0x00547940)
#define DAT_005d52e8 (*(volatile unsigned char *)0x005d52e8)

#define LOM_SELF_00544720 1
uint __cdecl rb_00544720(void)
{
  uint r = FUN_0053ce20();
  unsigned char f = DAT_005d52e8;
  if (f != 0) return (uint)FUN_00547940();
  return (r & 0xffffff00u) | f;
}
