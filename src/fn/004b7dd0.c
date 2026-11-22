/* Rebuilt from lomse.exe FUN_004b7dd0 @ 0x004b7dd0 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004b7dd0 1
undefined4 __fastcall rb_004b7dd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *(int *)(param_1 + 0x100)) {
    uVar1 = *(undefined4 *)(param_1 + 0x120);
  }
  return uVar1;
}
