/* Rebuilt from lomse.exe op_balkothdeathcounter @ 0x00487bc0 (21 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa154 (*(int *)0x005aa154)
#define FUN_00487220 ((undefined4 (__fastcall *)(int))0x00487220)

#define LOM_SELF_00487bc0 1
void __cdecl rb_00487bc0(void *vm)

{
  DAT_005aa154 = DAT_005aa154 + 1;
  FUN_00487220(0x5aa12c);
  return;
}
