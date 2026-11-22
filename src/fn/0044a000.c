/* Rebuilt from lomse.exe FUN_0044a000 @ 0x0044a000 (11 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b6870 ((undefined4 (__fastcall *)(undefined4 *))0x004b6870)
#define PTR_FUN_0054d548 (*(undefined * *)0x0054d548)

#define LOM_SELF_0044a000 1
void __fastcall rb_0044a000(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0054d548;
  FUN_004b6870(param_1);
  return;
}
