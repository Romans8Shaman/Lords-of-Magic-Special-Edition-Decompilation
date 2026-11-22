/* Rebuilt from lomse.exe FUN_004304f0 @ 0x004304f0 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004304f0 1
undefined4 __fastcall rb_004304f0(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*param_1 + 0x10);
}
