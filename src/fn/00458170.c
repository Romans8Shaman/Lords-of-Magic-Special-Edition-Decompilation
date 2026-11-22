/* Rebuilt from lomse.exe FUN_00458170 @ 0x00458170 (15 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae935 (*(char *)0x005ae935)

#define LOM_SELF_00458170 1
uint __stdcall rb_00458170(void)

{
  return (uint)(DAT_005ae935 != '\a');
}
