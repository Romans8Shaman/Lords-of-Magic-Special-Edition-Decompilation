/* Rebuilt from lomse.exe FUN_00475580 @ 0x00475580 (23 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005832a8 (*(undefined *)0x005832a8)
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_00475580 1
void __cdecl rb_00475580(void)

{
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)&DAT_005832a8);
  return;
}
