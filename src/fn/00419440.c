/* Rebuilt from lomse.exe FUN_00419440 @ 0x00419440 (20 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00419440 1
uint __fastcall rb_00419440(int param_1)

{
  return *(uint *)(param_1 + 0xe8 + *(int *)(param_1 + 0x50) * 0x4c) & 2;
}
