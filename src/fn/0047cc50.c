/* Rebuilt from lomse.exe FUN_0047cc50 @ 0x0047cc50 (28 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058340c (*(int *)0x0058340c)
#define FUN_0047cb00 ((undefined4 (__fastcall *)(int))0x0047cb00)

#define LOM_SELF_0047cc50 1
void __cdecl rb_0047cc50(int param_1)

{
  FUN_0047cb00(param_1);
  *(int *)(param_1 + 0x3c) = DAT_0058340c;
  DAT_0058340c = param_1;
  return;
}
