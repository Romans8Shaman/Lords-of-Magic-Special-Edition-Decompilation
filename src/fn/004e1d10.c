/* Rebuilt from lomse.exe op_endturn @ 0x004e1d10 (26 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0048a080 ((undefined4 (__thiscall *)(void *, int))0x0048a080)

#define LOM_SELF_004e1d10 1
void __cdecl rb_004e1d10(void)

{
  FUN_0048a080(&DAT_005aa12c,*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  return;
}
