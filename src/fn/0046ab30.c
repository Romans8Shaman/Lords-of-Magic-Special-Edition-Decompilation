/* Rebuilt from lomse.exe op_perspective @ 0x0046ab30 (37 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469fa0 ((undefined4 (__fastcall *)(int *))0x00469fa0)
#define FUN_00504ce0 ((undefined4 (__thiscall *)(void *, int, int))0x00504ce0)
#define FUN_00519b30 ((undefined4 (__thiscall *)(void *, int))0x00519b30)

#define LOM_SELF_0046ab30 1
void __cdecl rb_0046ab30(void)

{
  FUN_00469fa0(&DAT_005876d0);
  FUN_00519b30(&DAT_005876d0,1);
  FUN_00504ce0(&DAT_00584ae8,1,0);
  return;
}
