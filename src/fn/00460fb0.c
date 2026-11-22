/* Rebuilt from lomse.exe FUN_00460fb0 @ 0x00460fb0 (109 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)

#define LOM_SELF_00460fb0 1
uint __fastcall rb_00460fb0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  uVar1 = 0;
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 3) {
    iVar2 = 0;
    puVar3 = (uint *)(param_1 + 0x6640);
    do {
      if (((*puVar3 & 0x18) != 0) && ((*puVar3 & 2) == 0)) {
        uVar1 = uVar1 | 1 << ((byte)iVar2 & 0x1f);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 0x761;
    } while (iVar2 < 0x10);
    return uVar1;
  }
  iVar2 = 0;
  puVar3 = (uint *)(param_1 + 0x6640);
  do {
    if (((*puVar3 & 1) != 0) && ((*puVar3 & 2) == 0)) {
      uVar1 = uVar1 | 1 << ((byte)iVar2 & 0x1f);
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x761;
  } while (iVar2 < 0x10);
  return uVar1;
}
