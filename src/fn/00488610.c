/* Rebuilt from lomse.exe FUN_00488610 @ 0x00488610 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00488610 1
undefined4 __fastcall rb_00488610(int param_1)

{
  if (*(char *)(param_1 + 0x47b0) == '\0') {
    return 0;
  }
  FUN_004d09a0(DAT_005a7b78,*(uint *)(param_1 + 0x47b0),*(int **)(param_1 + 0x47b4),0);
  return 1;
}
