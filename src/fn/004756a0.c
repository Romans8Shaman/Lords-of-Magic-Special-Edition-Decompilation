/* Rebuilt from lomse.exe FUN_004756a0 @ 0x004756a0 (23 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583288 (*(undefined *)0x00583288)
#define DAT_00583648 (*(int *)0x00583648)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)

#define LOM_SELF_004756a0 1
void __cdecl rb_004756a0(void)

{
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590((int *)&DAT_00583288);
  return;
}
