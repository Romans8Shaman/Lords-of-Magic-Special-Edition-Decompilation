/* Rebuilt from lomse.exe FUN_00405a00 @ 0x00405a00 (10 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00405a00 1
uint __fastcall rb_00405a00(int param_1)

{
  return ((int)*(char *)(param_1 + 0x10) & 2U) >> 1;
}
