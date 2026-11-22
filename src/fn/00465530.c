/* Rebuilt from lomse.exe op_select_new_play @ 0x00465530 (122 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005af134 (*(undefined4 *)0x005af134)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_00465530 1
void __cdecl rb_00465530(void)

{
  undefined *puVar1;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar1 != (undefined *)0x0) && (puVar1 != (undefined *)0xffffea20)) {
    if (((char)*(uint *)(puVar1 + 0x1a84) == '\x06') && ((*(uint *)(puVar1 + 0x1a84) & 0x100) == 0))
    {
      *(undefined4 *)(puVar1 + 0x1a78) = DAT_005af134;
      FUN_004d09a0(DAT_005a7b78,*(uint *)(puVar1 + 0x1a84),*(int **)(puVar1 + 0x1a88),0);
    }
  }
  return;
}
