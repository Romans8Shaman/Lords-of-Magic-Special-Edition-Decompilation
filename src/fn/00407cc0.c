/* Rebuilt from lomse.exe FUN_00407cc0 @ 0x00407cc0 (48 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c19b0 ((undefined4 (__stdcall *)(int, undefined4))0x004c19b0)

#define LOM_SELF_00407cc0 1
void __stdcall rb_00407cc0(int param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_004c19b0(param_1,2);
    return;
  }
  FUN_004c19b0(param_1,1);
  return;
}
