/* Rebuilt from lomse.exe FUN_004ba940 @ 0x004ba940 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004fbe20 ((undefined4 (__fastcall *)(int))0x004fbe20)

#define LOM_SELF_004ba940 1
void __fastcall rb_004ba940(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_004fbe20(0x5ae974);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}
