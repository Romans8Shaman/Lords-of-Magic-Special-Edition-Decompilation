/* Rebuilt from lomse.exe FUN_004c2520 @ 0x004c2520 (43 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00420630 ((undefined4 (__fastcall *)(int))0x00420630)
#define FUN_004c2550 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004c2550)

#define LOM_SELF_004c2520 1
void __fastcall rb_004c2520(int param_1)

{
  FUN_004c2550(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x5b4));
  *(undefined4 *)(param_1 + 0x5b4) = 0xffffffff;
  FUN_00420630(param_1);
  return;
}
