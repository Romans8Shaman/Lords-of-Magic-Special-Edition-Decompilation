/* Rebuilt from lomse.exe FUN_00498b70 @ 0x00498b70 (25 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00498b70 1
undefined4 * __fastcall rb_00498b70(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x14] = 0;
  puVar2 = param_1;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}
