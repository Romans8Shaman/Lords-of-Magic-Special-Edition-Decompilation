/* Rebuilt from lomse.exe FUN_00420560 @ 0x00420560 (31 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_00420580 ((undefined4 (__fastcall *)(int))0x00420580)

#define LOM_SELF_00420560 1
undefined4 __fastcall rb_00420560(int param_1)

{
  int iVar1;
  
  if ((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 4) {
    return 0;
  }
  iVar1 = FUN_00420580(param_1);
  return (uint)(iVar1 == 0);
}
