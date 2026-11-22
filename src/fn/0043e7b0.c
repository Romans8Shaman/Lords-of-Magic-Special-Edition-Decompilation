/* Rebuilt from lomse.exe FUN_0043e7b0 @ 0x0043e7b0 (97 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0043e7b0 1
uint __fastcall rb_0043e7b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x80),2);
  uVar3 = FUN_00482ac0(&DAT_005aa12c,*(int *)(param_1 + 0x80),3);
  while (uVar2 != 0) {
    piVar1 = (int *)(uVar2 + 0x80);
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*(int *)(uVar2 + 0x80),2);
    uVar3 = FUN_00482ac0(&DAT_005aa12c,*piVar1,3);
  }
  return uVar3;
}
