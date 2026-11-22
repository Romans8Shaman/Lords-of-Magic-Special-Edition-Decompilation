/* Rebuilt from lomse.exe op_previousarmy @ 0x004e1780 (35 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_0052c990 ((undefined4 (__fastcall *)(int *))0x0052c990)

#define LOM_SELF_004e1780 1
void __cdecl rb_004e1780(void)

{
  FUN_0052c990((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}
