/* Rebuilt from lomse.exe FUN_005406f0 @ 0x005406f0 (50 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5328 (*(undefined4 *)0x005d5328)
#define DAT_005d5530 (*(undefined4 *)0x005d5530)
#define DAT_005d5534 (*(undefined4 *)0x005d5534)
#define _DAT_005d5538 (*(undefined4 *)0x005d5538)
#define _DAT_005d553c (*(undefined4 *)0x005d553c)
#define _DAT_005d5540 (*(undefined4 *)0x005d5540)
#define _DAT_005d6b24 (*(undefined4 *)0x005d6b24)

#define LOM_SELF_005406f0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall rb_005406f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005d5328;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_005d5530 = 0;
  _DAT_005d6b24 = 0;
  DAT_005d5534 = 0;
  _DAT_005d5538 = 0;
  _DAT_005d553c = 0;
  _DAT_005d5540 = 0;
  return;
}
