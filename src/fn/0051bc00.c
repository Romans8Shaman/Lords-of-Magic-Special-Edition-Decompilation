/* Rebuilt from lomse.exe FUN_0051bc00 @ 0x0051bc00 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004baa70 ((undefined4 (__fastcall *)(LPCRITICAL_SECTION))0x004baa70)

#define LOM_SELF_0051bc00 1
void __fastcall rb_0051bc00(int param_1)

{
  *(undefined4 *)(param_1 + 0x6c) = 0;
  FUN_004baa70((LPCRITICAL_SECTION)(param_1 + 0xe0));
  return;
}
