/* Rebuilt from lomse.exe FUN_005291e0 @ 0x005291e0 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_005291e0 1
uint __fastcall rb_005291e0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    return 0;
  }
  return uVar1 & (*(int *)(uVar1 + 4) != 3) - 1;
}
