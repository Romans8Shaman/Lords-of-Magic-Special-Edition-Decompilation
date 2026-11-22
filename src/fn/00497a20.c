/* Rebuilt from lomse.exe FUN_00497a20 @ 0x00497a20 (19 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583640 (*(undefined4 *)0x00583640)
#define FUN_00497aa0 ((undefined4 (__thiscall *)(void *, char *, size_t))0x00497aa0)

#define LOM_SELF_00497a20 1
void __fastcall rb_00497a20(int param_1)

{
  FUN_00497aa0(&DAT_00583640,*(char **)(param_1 + 8),*(size_t *)(param_1 + 0x10));
  return;
}
