/* Rebuilt from lomse.exe FUN_0049d980 @ 0x0049d980 (22 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0049d920 ((uint (__thiscall *)(void *, uint))0x0049d920)

#define LOM_SELF_0049d980 1
uint __fastcall rb_0049d980(int param_1)

{
  uint uVar1;
  
  if (*(void **)(param_1 + 0x3c) == (void *)0x0) {
    return 0;
  }
  uVar1 = FUN_0049d920(*(void **)(param_1 + 0x3c),*(uint *)(param_1 + 4));
  return uVar1;
}
