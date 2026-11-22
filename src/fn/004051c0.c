/* Rebuilt from lomse.exe FUN_004051c0 @ 0x004051c0 (35 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004051c0 1
undefined4 __stdcall rb_004051c0(int param_1)

{
  *(undefined1 *)(param_1 + 0xc0) = 0x13;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined2 *)(param_1 + 0xc2) = 0xffff;
  return 1;
}
