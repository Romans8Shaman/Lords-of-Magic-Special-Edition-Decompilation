/* Rebuilt from lomse.exe FUN_0050ca10 @ 0x0050ca10 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)

#define LOM_SELF_0050ca10 1
void __fastcall rb_0050ca10(int param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 4) != 0) {
    if (*(int **)(param_1 + 0x58) != (int *)0x0) {
      FUN_004245a0(*(int **)(param_1 + 0x58));
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffffe3;
  }
  return;
}
