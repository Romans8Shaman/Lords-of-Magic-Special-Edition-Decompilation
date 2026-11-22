/* Rebuilt from lomse.exe FUN_004756f0 @ 0x004756f0 (26 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00475710 ((char * (__cdecl *)(int))0x00475710)

#define LOM_SELF_004756f0 1
undefined4 __cdecl rb_004756f0(int param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  FUN_00475710(param_1);
  return 0;
}
