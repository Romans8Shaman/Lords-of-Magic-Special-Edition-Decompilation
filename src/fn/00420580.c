/* Rebuilt from lomse.exe FUN_00420580 @ 0x00420580 (89 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005af194 (*(undefined *)0x005af194)

#define LOM_SELF_00420580 1
undefined4 __fastcall rb_00420580(int param_1)

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
    return 1;
  }
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 4) {
    return 1;
  }
  return (uint)((*(uint *)(puVar2 + 0x15d8) & 0x18) != 0);
}
