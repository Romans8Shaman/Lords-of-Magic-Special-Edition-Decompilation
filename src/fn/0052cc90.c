/* Rebuilt from lomse.exe op_nextarmymps @ 0x0052cc90 (35 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_0052c9f0 ((undefined4 (__fastcall *)(int *))0x0052c9f0)

#define LOM_SELF_0052cc90 1
void __cdecl rb_0052cc90(void)

{
  FUN_0052c9f0((int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}
