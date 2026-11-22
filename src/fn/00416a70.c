/* Rebuilt from lomse.exe FUN_00416a70 @ 0x00416a70 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)

#define LOM_SELF_00416a70 1
bool __fastcall rb_00416a70(int param_1)

{
  return *(int *)(param_1 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
}
