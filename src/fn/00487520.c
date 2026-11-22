/* Rebuilt from lomse.exe op_setlastaudiosettings @ 0x00487520 (79 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585408 (*(undefined4 *)0x00585408)
#define DAT_0058677c (*(undefined4 *)0x0058677c)
#define DAT_00586780 (*(undefined4 *)0x00586780)
#define DAT_005aa144 (*(int *)0x005aa144)
#define DAT_005aa148 (*(undefined4 *)0x005aa148)
#define DAT_005aa14c (*(undefined4 *)0x005aa14c)
#define DAT_005aa150 (*(int *)0x005aa150)
#define FUN_00479a00 ((undefined4 (__thiscall *)(void *, int))0x00479a00)
#define FUN_00479b40 ((undefined4 (__thiscall *)(void *, undefined4))0x00479b40)
#define FUN_00479c30 ((undefined4 (__thiscall *)(void *, undefined4))0x00479c30)
#define FUN_00479d10 ((undefined4 (__thiscall *)(void *, int))0x00479d10)

#define LOM_SELF_00487520 1
void __cdecl rb_00487520(void)

{
  FUN_00479a00(&DAT_00585408,DAT_005aa144);
  FUN_00479b40(&DAT_00585408,DAT_005aa148);
  FUN_00479c30(&DAT_00585408,DAT_005aa14c);
  FUN_00479d10(&DAT_00585408,DAT_005aa150);
  DAT_00586780 = DAT_0058677c;
  return;
}
