/* Rebuilt from lomse.exe FUN_0044c4b0 @ 0x0044c4b0 (91 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0044c4b0 1
undefined4 * __fastcall rb_0044c4b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[0x334] = 0;
  puVar2 = param_1 + 0x16;
  for (iVar1 = 0xa8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar3 = 0xc0;
  puVar2 = param_1 + 0xbe;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0xdc;
  for (iVar1 = 0x78; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x244;
  do {
    puVar2[-0xf0] = 0xffffffff;
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}
