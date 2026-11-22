/* Rebuilt from lomse.exe FUN_004b69b0 @ 0x004b69b0 (34 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584430 (*(uint *)0x00584430)
#define DAT_00584434 (*(int * *)0x00584434)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004b69b0 1
void __stdcall rb_004b69b0(void)

{
  if (((char)DAT_00584430 == '\x06') && ((DAT_00584430 & 0x100) == 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_00584430,DAT_00584434);
  }
  return;
}
