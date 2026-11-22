/* Rebuilt from lomse.exe FUN_004c5220 @ 0x004c5220 (13 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579274 (*(undefined1 *)0x00579274)

#define LOM_SELF_004c5220 1
undefined1 * __fastcall rb_004c5220(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0xc);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00579274;
  }
  return puVar1;
}
