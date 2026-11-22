/* Rebuilt from lomse.exe FUN_0053cd30 @ 0x0053cd30 (51 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0053bce0 ((undefined4 (__cdecl *)(undefined *))0x0053bce0)

#define LOM_SELF_0053cd30 1
void __cdecl rb_0053cd30(undefined4 *param_1)

{
  if (((param_1[3] & 0x83) != 0) && ((param_1[3] & 8) != 0)) {
    FUN_0053bce0((undefined *)param_1[2]);
    param_1[3] = param_1[3] & 0xfffffbf7;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = 0;
  }
  return;
}
