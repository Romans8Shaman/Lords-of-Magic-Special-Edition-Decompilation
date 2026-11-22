/* Rebuilt from lomse.exe FUN_004ef740 @ 0x004ef740 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004f59f0 ((undefined4 (__fastcall *)(undefined4 *))0x004f59f0)
#define PTR_FUN_0054dd88 (*(undefined * *)0x0054dd88)

#define LOM_SELF_004ef740 1
void __fastcall rb_004ef740(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0054dd88;
  FUN_004f59f0(param_1);
  return;
}
