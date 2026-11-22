/* Rebuilt from lomse.exe FUN_0051b790 @ 0x0051b790 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004baa20 ((LPCRITICAL_SECTION (__fastcall *)(LPCRITICAL_SECTION))0x004baa20)

#define LOM_SELF_0051b790 1
undefined4 * __fastcall rb_0051b790(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004baa20((LPCRITICAL_SECTION)(param_1 + 0x38));
  *param_1 = 0;
  param_1[0x2f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0x2e] = 0xffffffff;
  puVar2 = param_1 + 4;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  param_1[0x3f] = param_1;
  return param_1;
}
