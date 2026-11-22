/* Rebuilt from lomse.exe FUN_00418f30 @ 0x00418f30 (59 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)

#define LOM_SELF_00418f30 1
uint __fastcall rb_00418f30(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 == (undefined *)0x0) {
    return 0;
  }
  return ~*(uint *)(puVar2 + 0x15d8) >> 1 & 1;
}
