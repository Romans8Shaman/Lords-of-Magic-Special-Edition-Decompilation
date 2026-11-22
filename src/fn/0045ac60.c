/* Rebuilt from lomse.exe FUN_0045ac60 @ 0x0045ac60 (53 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d0 (*(undefined4 *)0x005aa7d0)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005aadac (*(undefined4 *)0x005aadac)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0045ac60 1
undefined4 __stdcall rb_0045ac60(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = DAT_005aa7d0;
  if (DAT_005aa7d4 != *(int *)(uVar1 + 0x48)) {
    uVar2 = DAT_005aadac;
  }
  return uVar2;
}
