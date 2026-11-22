/* Rebuilt from lomse.exe FUN_004b69e0 @ 0x004b69e0 (34 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584438 (*(uint *)0x00584438)
#define DAT_0058443c (*(int * *)0x0058443c)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004b69e0 1
void __stdcall rb_004b69e0(void)

{
  if (((char)DAT_00584438 == '\x06') && ((DAT_00584438 & 0x100) == 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_00584438,DAT_0058443c);
  }
  return;
}
