/* Rebuilt from lomse.exe FUN_0049f130 @ 0x0049f130 (19 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005836f4 (*(int *)0x005836f4)

#define LOM_SELF_0049f130 1
void __cdecl rb_0049f130(int param_1)

{
  *(int *)(param_1 + 0x3c) = DAT_005836f4;
  DAT_005836f4 = param_1;
  return;
}
