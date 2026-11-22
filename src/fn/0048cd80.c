/* Rebuilt from lomse.exe FUN_0048cd80 @ 0x0048cd80 (47 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b574 (*(undefined4 *)0x0055b574)
#define DAT_00583560 (*(undefined4 *)0x00583560)
#define DAT_00583574 (*(undefined4 *)0x00583574)
#define FUN_0048cdf0 ((undefined4 (__stdcall *)(void))0x0048cdf0)
#define _DAT_00583540 (*(undefined4 *)0x00583540)
#define _DAT_00583544 (*(undefined4 *)0x00583544)
#define _DAT_00583548 (*(undefined4 *)0x00583548)

#define LOM_SELF_0048cd80 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall rb_0048cd80(void)

{
  DAT_00583574 = 1;
  DAT_00583560 = 0;
  _DAT_00583540 = 0;
  _DAT_00583544 = 0;
  _DAT_00583548 = 0;
  DAT_0055b574 = 0xffffffff;
  FUN_0048cdf0();
  return;
}
