/* Rebuilt from lomse.exe FUN_00506100 @ 0x00506100 (10 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00506100 1
uint __fastcall rb_00506100(int param_1)

{
  return *(uint *)(param_1 + 0x30) >> 0x1d & 1;
}
