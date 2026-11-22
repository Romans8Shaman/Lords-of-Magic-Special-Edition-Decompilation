/* Rebuilt from lomse.exe op_uncheckallhelppanels @ 0x00486fc0 (52 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa1f4 (*(int *)0x005aa1f4)
#define DAT_005aa1f8 (*(int *)0x005aa1f8)

#define LOM_SELF_00486fc0 1
void __cdecl rb_00486fc0(void *vm)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < DAT_005aa1f4) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(undefined4 *)(DAT_005aa1f8 + 4 + iVar2) = 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < DAT_005aa1f4);
  }
  return;
}
