/* Rebuilt from lomse.exe FUN_004b9b30 @ 0x004b9b30 (28 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058446c (*(undefined *)0x0058446c)
#define FUN_004b9a00 ((undefined4 (__thiscall *)(void *, int))0x004b9a00)

#define LOM_SELF_004b9b30 1
void __fastcall rb_004b9b30(int *param_1)

{
  if (*param_1 != 0) {
    FUN_004b9a00(&DAT_0058446c,*param_1);
    *param_1 = 0;
  }
  return;
}
