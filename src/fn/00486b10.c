/* Rebuilt from lomse.exe op_disablemap @ 0x00486b10 (31 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00473930 ((undefined4 (__fastcall *)(int))0x00473930)
#define _DAT_005a79e0 (*(undefined4 *)0x005a79e0)
#define _DAT_005af180 (*(undefined4 *)0x005af180)

#define LOM_SELF_00486b10 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_00486b10(void)

{
  _DAT_005af180 = 1;
  FUN_00473930(0x5a9e04);
  _DAT_005a79e0 = 0;
  return;
}
