/* Rebuilt from lomse.exe FUN_004876b0 @ 0x004876b0 (15 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004876c0 ((undefined4 (__thiscall *)(void *, undefined4))0x004876c0)

#define LOM_SELF_004876b0 1
void __fastcall rb_004876b0(void *param_1)

{
  *(undefined4 *)((int)param_1 + 0x10) = 2;
  FUN_004876c0(param_1,100);
  return;
}
