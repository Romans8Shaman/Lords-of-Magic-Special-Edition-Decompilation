/* Rebuilt from lomse.exe FUN_00435440 @ 0x00435440 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00435440 1
undefined4 __fastcall rb_00435440(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 0:
    return *(undefined4 *)(param_1 + 8);
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    return *(undefined4 *)(param_1 + 0x14);
  case 6:
    return *(undefined4 *)(param_1 + 0x10);
  default:
    return 0xffffffff;
  }
}
