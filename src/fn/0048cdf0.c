/* Rebuilt from lomse.exe FUN_0048cdf0 @ 0x0048cdf0 (67 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583550 (*(undefined4 *)0x00583550)
#define DAT_00583554 (*(undefined4 *)0x00583554)
#define DAT_0058355c (*(DWORD *)0x0058355c)
#define DAT_00583568 (*(undefined4 *)0x00583568)
#define DAT_0058357c (*(undefined4 *)0x0058357c)
#define DAT_00583588 (*(undefined4 *)0x00583588)
#define DAT_0058358c (*(undefined4 *)0x0058358c)
#define _DAT_0058354c (*(undefined4 *)0x0058354c)
#define _DAT_00583590 (*(undefined4 *)0x00583590)
#define timeGetTime (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d33c) /* WINMM.DLL!timeGetTime via IAT */

#define LOM_SELF_0048cdf0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall rb_0048cdf0(void)

{
  DAT_0058357c = 0;
  _DAT_0058354c = 0;
  DAT_00583550 = 0;
  DAT_00583568 = 0;
  DAT_0058355c = timeGetTime();
  _DAT_00583590 = 0;
  DAT_00583554 = 0;
  DAT_00583588 = 1;
  DAT_0058358c = 1;
  return;
}
