/* Rebuilt from lomse.exe FUN_00454410 @ 0x00454410 (84 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define FUN_00469d80 ((undefined4 (__thiscall *)(void *, undefined4))0x00469d80)
#define FUN_00469e80 ((undefined4 (__thiscall *)(void *, undefined4))0x00469e80)
#define FUN_00481610 ((undefined4 (__thiscall *)(void *, int))0x00481610)
#define FUN_00505970 ((undefined4 (__thiscall *)(void *, int, int))0x00505970)
#define FUN_005059a0 ((undefined4 (__thiscall *)(void *, int, undefined4))0x005059a0)

#define LOM_SELF_00454410 1
undefined4 __fastcall rb_00454410(void *param_1)

{
  FUN_00469d80(&DAT_005876d0,*(undefined4 *)((int)param_1 + 0xbc));
  FUN_00469e80(&DAT_005876d0,*(undefined4 *)((int)param_1 + 0xc0));
  FUN_00505970(&DAT_00584ae8,2,0x42);
  FUN_005059a0(&DAT_00584ae8,8,0x3e19999a);
  FUN_00481610(param_1,2);
  return 1;
}
