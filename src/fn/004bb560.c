/* Rebuilt from lomse.exe FUN_004bb560 @ 0x004bb560 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d1e84 (*(int *)0x005d1e84)
#define FUN_0048a400 ((undefined4 (__fastcall *)(int))0x0048a400)
#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)

#define LOM_SELF_004bb560 1
undefined4 __fastcall rb_004bb560(int param_1)

{
  int iVar1;
  
  if (DAT_005d1e84 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_004b7dd0(DAT_005d1e84);
  }
  if (*(int *)(param_1 + 0x15dc) != iVar1) {
    iVar1 = FUN_0048a400(0x584ae8);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}
