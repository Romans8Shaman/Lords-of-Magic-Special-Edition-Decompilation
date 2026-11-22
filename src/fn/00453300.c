/* Rebuilt from lomse.exe FUN_00453300 @ 0x00453300 (28 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792c8 (*(undefined *)0x005792c8)
#define FUN_004d61b0 ((int (__thiscall *)(void *, int))0x004d61b0)
#define _DAT_005792c8 (*(undefined4 *)0x005792c8)
#define _DAT_005792cc (*(undefined4 *)0x005792cc)

#define LOM_SELF_00453300 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl rb_00453300(void)

{
  _DAT_005792c8 = 0;
  _DAT_005792cc = 0;
  FUN_004d61b0(&DAT_005792c8,0x579300);
  return;
}
