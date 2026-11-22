/* Rebuilt from lomse.exe FUN_0053f340 @ 0x0053f340 (32 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0053f340 1
void __cdecl rb_0053f340(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      ((undefined4 (__stdcall *)(void))(*(code *)*param_1))();
    }
  }
  return;
}
