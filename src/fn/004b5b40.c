/* Rebuilt from lomse.exe op_deselectfaith @ 0x004b5b40 (50 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_004b7b10 ((undefined4 (__stdcall *)(undefined4, undefined4))0x004b7b10)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004b5b40 1
void __cdecl rb_004b5b40(void)

{
  int iVar1;
  
  if (DAT_005d1e84 == 0) {
    FUN_004b7b10(0,0xffffffff);
    return;
  }
  iVar1 = FUN_004b7dd0(DAT_005d1e84);
  FUN_004b7b10(iVar1 + -1,0xffffffff);
  return;
}
