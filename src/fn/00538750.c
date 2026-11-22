/* Rebuilt from lomse.exe FUN_00538750 @ 0x00538750 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d4158 (*(undefined *)0x005d4158)

#define LOM_SELF_00538750 1
undefined * __cdecl rb_00538750(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 - param_2;
  return &DAT_005d4158 + (iVar1 - param_2) * 8;
}
