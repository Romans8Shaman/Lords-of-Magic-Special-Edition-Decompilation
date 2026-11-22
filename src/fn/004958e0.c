/* Rebuilt from lomse.exe FUN_004958e0 @ 0x004958e0 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058676c (*(int *)0x0058676c)

#define LOM_SELF_004958e0 1
void __fastcall rb_004958e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  if (-1 < DAT_0058676c) {
    *(int *)(param_1 + 0x14) = DAT_0058676c;
  }
  return;
}
