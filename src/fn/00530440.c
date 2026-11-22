/* Rebuilt from lomse.exe FUN_00530440 @ 0x00530440 (33 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_005303b0 ((undefined4 (__stdcall *)(undefined4))0x005303b0)

#define LOM_SELF_00530440 1
undefined4 __stdcall rb_00530440(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  FUN_005303b0(*(undefined4 *)(param_1 + 0x28));
  return 1;
}
