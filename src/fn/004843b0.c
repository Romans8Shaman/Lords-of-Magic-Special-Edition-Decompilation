/* Rebuilt from lomse.exe FUN_004843b0 @ 0x004843b0 (25 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd358 (*(undefined *)0x005cd358)
#define FUN_004b7380 ((undefined4 (__thiscall *)(void *, int))0x004b7380)

#define LOM_SELF_004843b0 1
undefined4 __stdcall rb_004843b0(int *param_1)

{
  FUN_004b7380(&DAT_005cd358,*param_1);
  return 1;
}
