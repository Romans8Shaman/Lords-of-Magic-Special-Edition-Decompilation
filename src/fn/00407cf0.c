/* Rebuilt from lomse.exe FUN_00407cf0 @ 0x00407cf0 (87 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_00407cf0 1
undefined4 __stdcall rb_00407cf0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,param_1,0);
  if (uVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00482ac0(&DAT_005aa12c,param_2,0);
  if (uVar2 == 0) {
    return 0;
  }
  *(short *)(uVar1 + 0xc2) = (short)param_2;
  *(undefined1 *)(uVar1 + 0xc0) = 3;
  *(undefined1 *)(uVar1 + 0xc1) = 0;
  return 1;
}
