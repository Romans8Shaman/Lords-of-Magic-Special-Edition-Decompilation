/* Rebuilt from lomse.exe op_cancelordermode @ 0x004d9e70 (25 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00503040 ((undefined4 (__thiscall *)(void *, undefined4))0x00503040)

#define LOM_SELF_004d9e70 1
void __cdecl rb_004d9e70(void)

{
  FUN_00503040(&DAT_00584ae8,1);
  FUN_00503040(&DAT_00584ae8,0);
  return;
}
