/* Rebuilt from lomse.exe FUN_00522f00 @ 0x00522f00 (21 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa780 (*(undefined4 *)0x005aa780)
#define FUN_00523530 ((uint (__thiscall *)(void *, undefined4))0x00523530)

#define LOM_SELF_00522f00 1
uint __fastcall rb_00522f00(void *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00523530(param_1,DAT_005aa780);
  return (uint)(uVar1 != 0);
}
