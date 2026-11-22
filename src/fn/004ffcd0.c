/* Rebuilt from lomse.exe op_modalloop @ 0x004ffcd0 (24 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_004ffc90 ((undefined4 (__fastcall *)(void *))0x004ffc90)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)

#define LOM_SELF_004ffcd0 1
void __cdecl rb_004ffcd0(void *vm)

{
  FUN_00504ce0(&DAT_00584ae8,1,0);
  FUN_004ffc90(&DAT_00584ae8);
  return;
}
