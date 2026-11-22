/* Rebuilt from lomse.exe FUN_004321b0 @ 0x004321b0 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004321b0 1
undefined4 __fastcall rb_004321b0(int param_1)

{
  if ((*(int *)(param_1 + 0x18) == 7) || (*(int *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  return 1;
}
