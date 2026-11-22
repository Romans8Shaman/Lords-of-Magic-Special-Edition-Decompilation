/* Rebuilt from lomse.exe op_cleargroups @ 0x00498cd0 (63 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005577c8 (*(int *)0x005577c8)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004986b0 ((undefined4 (__fastcall *)(int))0x004986b0)

#define LOM_SELF_00498cd0 1
void __cdecl rb_00498cd0(void)

{
  undefined *puVar1;
  
  if ((DAT_005577c8 < 0) || (0xf < DAT_005577c8)) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_005af194 + DAT_005577c8 * 0x1d84;
  }
  if ((puVar1 == (undefined *)0x0) || (puVar1 + 0x15e0 == (undefined *)0x0)) {
    return;
  }
  FUN_004986b0((int)(puVar1 + 0x15e0));
  return;
}
