/* Rebuilt from lomse.exe op_refreshdirty @ 0x004da070 (43 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055c338 (*(undefined4 *)0x0055c338)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define FUN_00476c20 ((undefined4 (__fastcall *)(void *))0x00476c20)
#define FUN_005007e0 ((undefined4 (__thiscall *)(void *, int))0x005007e0)

#define LOM_SELF_004da070 1
void __cdecl rb_004da070(void)

{
  DAT_0055c338 = 0;
  FUN_005007e0(&DAT_00584ae8,0);
  FUN_00476c20(&DAT_00584ae8);
  DAT_0055c338 = 1;
  return;
}
