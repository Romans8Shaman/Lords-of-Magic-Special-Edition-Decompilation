/* Rebuilt from lomse.exe FUN_00525e80 @ 0x00525e80 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00525e80 1
undefined4 __fastcall rb_00525e80(int param_1)

{
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  return (uint)(*(int *)(*(int *)(param_1 + 0x14) + 4) != 3);
}
