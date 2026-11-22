/* Rebuilt from lomse.exe FUN_00407d60 @ 0x00407d60 (10 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00407d60 1
uint __fastcall rb_00407d60(int param_1)

{
  return *(uint *)(param_1 + 0x30) >> 10 & 1;
}
