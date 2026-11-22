/* Rebuilt from lomse.exe FUN_00533530 @ 0x00533530 (10 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d3830 (*(undefined4 *)0x005d3830)
#define thunk_FUN_00531a80 ((undefined4 (__fastcall *)(int *))0x00531a70)

#define LOM_SELF_00533530 1
void __cdecl rb_00533530(void)

{
  thunk_FUN_00531a80(&DAT_005d3830);
  return;
}
