/* Rebuilt from lomse.exe FUN_004b6520 @ 0x004b6520 (24 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005851a0 (*(undefined4 *)0x005851a0)
#define DAT_005aa64c (*(undefined *)0x005aa64c)
#define FUN_004b1bc0 ((undefined4 (__thiscall *)(void *, int))0x004b1bc0)

#define LOM_SELF_004b6520 1
void __stdcall rb_004b6520(undefined4 param_1)

{
  DAT_005851a0 = param_1;
  FUN_004b1bc0(&DAT_005aa64c,0);
  return;
}
