/* Rebuilt from lomse.exe FUN_00489b50 @ 0x00489b50 (17 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b580 (*(undefined *)0x0055b580)

#define LOM_SELF_00489b50 1
int __stdcall rb_00489b50(int param_1)

{
  return *(int *)(&DAT_0055b580 + param_1 * 8) + 0x15;
}
