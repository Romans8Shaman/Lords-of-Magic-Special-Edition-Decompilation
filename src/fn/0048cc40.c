/* Rebuilt from lomse.exe FUN_0048cc40 @ 0x0048cc40 (39 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00489960 ((undefined4 (__fastcall *)(undefined4 *))0x00489960)

#define LOM_SELF_0048cc40 1
int __fastcall rb_0048cc40(int param_1)

{
  FUN_00489960((undefined4 *)(param_1 + 9));
  *(undefined1 *)(param_1 + 6) = 0xff;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return param_1;
}
