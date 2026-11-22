/* Rebuilt from lomse.exe FUN_00497e00 @ 0x00497e00 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00497e00 1
undefined4 __fastcall rb_00497e00(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  if ((-1 < iVar1) && ((*(byte *)(param_1 + 0x1c) & 1) != 0)) {
    *(int *)(param_1 + 0x20) = iVar1;
  }
  return *(undefined4 *)(param_1 + 0x20);
}
