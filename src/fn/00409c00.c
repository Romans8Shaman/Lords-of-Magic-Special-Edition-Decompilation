/* Rebuilt from lomse.exe FUN_00409c00 @ 0x00409c00 (78 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00409c00 1
undefined4 __stdcall rb_00409c00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((~*(uint *)(param_1 + 0x30) & 0x100) == 0) || ((~*(uint *)(param_2 + 0x30) & 0x100) == 0))
     || (*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48))) {
    return 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0xc0) = 0x18;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(short *)(param_1 + 0xc2) = (short)uVar1;
  return 1;
}
