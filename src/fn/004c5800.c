/* Rebuilt from lomse.exe FUN_004c5800 @ 0x004c5800 (52 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c5800 1
void __fastcall rb_004c5800(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 0x58);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 0;
    puVar1[0x10] = 0;
    puVar1[0x20] = 0;
    puVar1[0x30] = 0;
    puVar1[0x40] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}
