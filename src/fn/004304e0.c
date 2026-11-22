/* Rebuilt from lomse.exe FUN_004304e0 @ 0x004304e0 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004304e0 1
undefined4 __fastcall rb_004304e0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0xc);
}
