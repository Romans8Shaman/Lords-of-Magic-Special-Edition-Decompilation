/* Rebuilt from lomse.exe FUN_0052b600 @ 0x0052b600 (57 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0052b600 1
void __fastcall rb_0052b600(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  iVar2 = 0x1e;
  do {
    puVar1[-1] = 0xffffffff;
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    puVar1[0x5a] = 0xffffffff;
    puVar1[0x5b] = 0xffffffff;
    puVar1[0x5c] = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
