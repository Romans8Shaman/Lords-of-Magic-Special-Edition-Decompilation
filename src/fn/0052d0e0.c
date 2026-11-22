/* Rebuilt from lomse.exe FUN_0052d0e0 @ 0x0052d0e0 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052d0e0 1
undefined4 __fastcall rb_0052d0e0(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x18);
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar2,3);
    if (uVar1 != 0) {
      return *(undefined4 *)(uVar1 + 0x28);
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 3;
  } while (iVar3 < 0x1e);
  return 0xffffffff;
}
