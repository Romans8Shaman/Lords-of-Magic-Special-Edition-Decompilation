/* Rebuilt from lomse.exe FUN_004bc950 @ 0x004bc950 (28 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004bc950 1
undefined4 __thiscall rb_004bc950(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)((int)this + 0x15d0) = param_1;
  *(undefined4 *)((int)this + 0x15d4) = param_2;
  return 1;
}
