/* Rebuilt from lomse.exe FUN_0051f400 @ 0x0051f400 (49 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005aeea0 (*(undefined *)0x005aeea0)
#define DAT_005d2ed0 (*(undefined4 *)0x005d2ed0)
#define DAT_005d2ed4 (*(undefined4 *)0x005d2ed4)
#define FUN_0040cb30 ((undefined4 (__thiscall *)(void *, void *, int))0x0040cb30)

#define LOM_SELF_0051f400 1
void __stdcall rb_0051f400(int param_1)

{
  DAT_005d2ed4 = *(undefined4 *)(param_1 + 0x28);
  DAT_005d2ed0 = 0x13;
  FUN_0040cb30(&DAT_005aeea0,DAT_005a7b78,*(int *)(param_1 + 0x550));
  return;
}
