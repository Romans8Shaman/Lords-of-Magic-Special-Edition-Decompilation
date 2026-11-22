/* Rebuilt from lomse.exe FUN_00505f10 @ 0x00505f10 (29 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584424 (*(undefined4 *)0x00584424)
#define DAT_00584604 (*(uint *)0x00584604)
#define DAT_005d2460 (*(undefined *)0x005d2460)
#define FUN_00505f30 ((undefined4 (__stdcall *)(undefined1 *, uint, undefined4))0x00505f30)

#define LOM_SELF_00505f10 1
undefined * __stdcall rb_00505f10(void)

{
  FUN_00505f30(&DAT_005d2460,DAT_00584604,DAT_00584424);
  return &DAT_005d2460;
}
