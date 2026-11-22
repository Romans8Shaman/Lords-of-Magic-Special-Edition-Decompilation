/* Rebuilt from lomse.exe FUN_004b4940 @ 0x004b4940 (43 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005843e4 (*(int *)0x005843e4)
#define DAT_005843e8 (*(uint *)0x005843e8)
#define DAT_005843ec (*(int * *)0x005843ec)
#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004b4940 1
void __stdcall rb_004b4940(void)

{
  if (((DAT_005843e4 != 0) && ((char)DAT_005843e8 == '\x06')) && ((DAT_005843e8 & 0x100) == 0)) {
    FUN_004d05e0(DAT_005a7b78,DAT_005843e8,DAT_005843ec);
  }
  return;
}
