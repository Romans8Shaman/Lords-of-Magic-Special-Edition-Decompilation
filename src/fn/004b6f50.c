/* Rebuilt from lomse.exe FUN_004b6f50 @ 0x004b6f50 (18 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058443c (*(undefined4 *)0x0058443c)

#define LOM_SELF_004b6f50 1
void __stdcall rb_004b6f50(int param_1)

{
  (&DAT_0058443c)[param_1] = 1;
  return;
}
