/* Rebuilt from lomse.exe FUN_004f5940 @ 0x004f5940 (27 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004f5940 1
undefined4 __fastcall rb_004f5940(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 < 1) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    return 1;
  }
  return 0;
}
