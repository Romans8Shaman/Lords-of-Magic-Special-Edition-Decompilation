/* Rebuilt from lomse.exe FUN_0041b670 @ 0x0041b670 (88 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005af194 (*(undefined *)0x005af194)
#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_0041b670 1
undefined4 __fastcall rb_0041b670(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 < 0) || (0xf < iVar1)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar1 * 0x1d84;
  }
  if (puVar2 != (undefined *)0x0) {
    iVar1 = *(int *)(puVar2 + 0x15dc);
    if (DAT_005d1e84 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = FUN_004b7dd0(DAT_005d1e84);
    }
    if (iVar1 == iVar3) {
      return 1;
    }
  }
  return 0;
}
