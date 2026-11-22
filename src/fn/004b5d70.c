/* Rebuilt from lomse.exe op_justentered @ 0x004b5d70 (27 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define FUN_004b8e20 ((undefined4 (__stdcall *)(undefined4))0x004b8e20)

#define LOM_SELF_004b5d70 1
void __cdecl rb_004b5d70(void)

{
  undefined4 uVar1;
  
  if (DAT_005d1e84 != 0) {
    uVar1 = FUN_004b7dd0(DAT_005d1e84);
    FUN_004b8e20(uVar1);
  }
  return;
}
