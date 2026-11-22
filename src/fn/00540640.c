/* Rebuilt from lomse.exe FUN_00540640 @ 0x00540640 (77 bytes). HAND (2026-11-13, was asmfn):
 * CRT getSystemCP(cp): fSystemSet = 0; -2 -> GetOEMCP(), -3 -> GetACP(), -4 -> __lc_codepage (each sets fSystemSet = 1);
 * otherwise cp unchanged. The two imports are tail-jumped in the original (same result/stack). */
#include "lom.h"

#define DAT_005d5544 (*(volatile int *)0x005d5544)
#define DAT_005d5320 (*(volatile int *)0x005d5320)
#define IAT_0054d158 (*(__typeof__(int (__stdcall *)(void)) *)0x0054d158)
#define IAT_0054d15c (*(__typeof__(int (__stdcall *)(void)) *)0x0054d15c)

#define LOM_SELF_00540640 1
int __cdecl rb_00540640(int cp)
{
  DAT_005d5544 = 0;
  if (cp == -2) { DAT_005d5544 = 1; return IAT_0054d158(); }
  if (cp == -3) { DAT_005d5544 = 1; return IAT_0054d15c(); }
  if (cp == -4) { cp = DAT_005d5320; DAT_005d5544 = 1; }
  return cp;
}
