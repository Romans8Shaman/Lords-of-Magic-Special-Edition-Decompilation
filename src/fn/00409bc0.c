/* Rebuilt from lomse.exe FUN_00409bc0 @ 0x00409bc0 (56 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00409b90 ((undefined4 (__fastcall *)(int))0x00409b90)
#define FUN_0047c9e0 ((uint (__thiscall *)(void *, int))0x0047c9e0)

#define LOM_SELF_00409bc0 1
undefined4 __stdcall rb_00409bc0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0047c9e0(&DAT_005aa12c,*(int *)(param_1 + 0x48));
  if (uVar1 != 0) {
    iVar2 = FUN_00409b90(param_1);
    if ((iVar2 != 0) && (param_2 < 4)) {
      return 1;
    }
  }
  return 0;
}
