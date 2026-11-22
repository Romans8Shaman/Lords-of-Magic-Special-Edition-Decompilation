/* Rebuilt from lomse.exe FUN_004ffed0 @ 0x004ffed0 (42 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004ffed0 1
void __fastcall rb_004ffed0(int param_1)

{
  if ((*(void **)(param_1 + 0x23090) != (void *)0x0) && (*(char *)(param_1 + 0x25638) != '\0')) {
    FUN_004d05e0(*(void **)(param_1 + 0x23090),*(uint *)(param_1 + 0x25638),
                 *(int **)(param_1 + 0x2563c));
  }
  return;
}
