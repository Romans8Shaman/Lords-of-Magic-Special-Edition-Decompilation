/* Rebuilt from lomse.exe FUN_0041da00 @ 0x0041da00 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0041da00 1
undefined4 __fastcall rb_0041da00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return uVar1;
}
