/* Rebuilt from lomse.exe FUN_0048a400 @ 0x0048a400 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0048a400 1
undefined4 __fastcall rb_0048a400(int param_1)

{
  switch(*(undefined4 *)(*(int *)(param_1 + 0x232a4) * 0x400 + 0x23590 + param_1)) {
  case 2:
  case 5:
  case 6:
    return 1;
  case 3:
    return 2;
  default:
    return 0;
  }
}
