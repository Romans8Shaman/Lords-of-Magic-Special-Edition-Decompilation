/* Rebuilt from lomse.exe FUN_0046f350 @ 0x0046f350 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6870 ((undefined4 (__fastcall *)(undefined4 *))0x004b6870)
#define PTR_FUN_0054d838 (*(undefined * *)0x0054d838)

#define LOM_SELF_0046f350 1
void __fastcall rb_0046f350(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0054d838;
  FUN_004b6870(param_1);
  return;
}
