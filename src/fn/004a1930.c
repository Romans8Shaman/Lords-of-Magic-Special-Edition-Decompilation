/* Rebuilt from lomse.exe FUN_004a1930 @ 0x004a1930 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004a1930 1
void __fastcall rb_004a1930(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x32;
  do {
    *param_1 = 0xffffffff;
    param_1[0x32] = 0xffffffff;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}
