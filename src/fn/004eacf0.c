/* Rebuilt from lomse.exe FUN_004eacf0 @ 0x004eacf0 (23 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058471c (*(undefined4 *)0x0058471c)
#define FUN_004eb080 ((undefined4 (__fastcall *)(undefined4 *))0x004eb080)

#define LOM_SELF_004eacf0 1
void __fastcall rb_004eacf0(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    FUN_004eb080(param_1);
  }
  DAT_0058471c = 0;
  return;
}
