/* Rebuilt from lomse.exe FUN_004f5750 @ 0x004f5750 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584aac (*(undefined4 *)0x00584aac)

#define LOM_SELF_004f5750 1
void __fastcall rb_004f5750(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = DAT_00584aac;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  return;
}
