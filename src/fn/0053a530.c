/* Rebuilt from lomse.exe FUN_0053a530 @ 0x0053a530 (44 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0053a530 1
void __cdecl rb_0053a530(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != param_2) && (param_3 != 0)) {
    do {
      uVar1 = *param_1;
      *param_1 = *param_2;
      param_1 = param_1 + 1;
      *param_2 = uVar1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}
