/* Rebuilt from lomse.exe op_combatviewtoworld @ 0x0045cdb0 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae8c4 (*(int *)0x005ae8c4)
#define FUN_0045c7b0 ((undefined4 (__fastcall *)(int))0x0045c7b0)
#define FUN_00488540 ((undefined4 (__fastcall *)(int))0x00488540)

#define LOM_SELF_0045cdb0 1
void __cdecl rb_0045cdb0(void *vm)

{
  if (DAT_005ae8c4 < 0) {
    FUN_0045c7b0(0x5aa12c);
    return;
  }
  FUN_00488540(0x5aa12c);
  return;
}
