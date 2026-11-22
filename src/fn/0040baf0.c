/* Rebuilt from lomse.exe op_cancelendofcombattickalarms @ 0x0040baf0 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee78 (*(undefined *)0x005aee78)
#define DAT_005af134 (*(uint *)0x005af134)
#define FUN_0040b620 ((undefined4 (__thiscall *)(void *, void *, uint, uint))0x0040b620)

#define LOM_SELF_0040baf0 1
void __cdecl rb_0040baf0(void *vm)

{
  FUN_0040b620(&DAT_005aee78,vm,DAT_005af134,1);
  return;
}
