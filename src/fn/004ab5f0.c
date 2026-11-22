/* Rebuilt from lomse.exe op_resetvisibility @ 0x004ab5f0 (26 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004a90b0 ((undefined4 (__thiscall *)(void *, int))0x004a90b0)

#define LOM_SELF_004ab5f0 1
void __cdecl rb_004ab5f0(void)

{
  FUN_004a90b0(&DAT_005ae958,*(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  return;
}
