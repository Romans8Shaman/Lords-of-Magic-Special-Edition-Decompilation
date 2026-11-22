/* Rebuilt from lomse.exe FUN_004fe180 @ 0x004fe180 (37 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004fe020 ((undefined4 (__fastcall *)(int))0x004fe020)

#define LOM_SELF_004fe180 1
void __fastcall rb_004fe180(int param_1)

{
  FUN_004d05e0(DAT_005a7b78,*(uint *)(param_1 + 0x22ebc),*(int **)(param_1 + 0x22ec0));
  FUN_004fe020(param_1);
  return;
}
