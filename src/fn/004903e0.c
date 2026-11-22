/* Rebuilt from lomse.exe FUN_004903e0 @ 0x004903e0 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)

#define LOM_SELF_004903e0 1
void __fastcall rb_004903e0(int param_1)

{
  if (((char)*(uint *)(param_1 + 0x2c) == '\x06') && ((*(uint *)(param_1 + 0x2c) & 0x100) == 0)) {
    FUN_004d09a0(DAT_005a7b78,*(uint *)(param_1 + 0x2c),*(int **)(param_1 + 0x30),0);
  }
  return;
}
