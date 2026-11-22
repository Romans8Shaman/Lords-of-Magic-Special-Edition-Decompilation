/* Rebuilt from lomse.exe FUN_00453200 @ 0x00453200 (24 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792fc (*(int *)0x005792fc)
#define _DAT_005792f4 (*(undefined4 *)0x005792f4)

#define LOM_SELF_00453200 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall rb_00453200(void)

{
  _DAT_005792f4 = 0;
  DAT_005792fc = DAT_005792fc + 0x28;
  return;
}
