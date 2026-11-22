/* Rebuilt from lomse.exe FUN_0052bf50 @ 0x0052bf50 (42 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00574320 (*(undefined *)0x00574320)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_0052bf50 1
undefined4 __fastcall rb_0052bf50(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00((int *)(param_1 + 0xc4));
  if (((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0x164), iVar1 < 0)) || (0x22 < iVar1)) {
    return 0xffffffff;
  }
  return *(undefined4 *)(&DAT_00574320 + iVar1 * 4);
}
