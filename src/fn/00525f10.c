/* Rebuilt from lomse.exe FUN_00525f10 @ 0x00525f10 (15 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00525f10 1
uint __fastcall rb_00525f10(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return *(uint *)(*(int *)(param_1 + 0x14) + 8) & 1;
}
