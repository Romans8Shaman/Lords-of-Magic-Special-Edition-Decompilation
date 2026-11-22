/* Rebuilt from lomse.exe FUN_00404f30 @ 0x00404f30 (38 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00404f30 1
undefined4 __stdcall rb_00404f30(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 0xc0) = 0xb;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined2 *)(param_1 + 0xc2) = param_2;
  return 1;
}
