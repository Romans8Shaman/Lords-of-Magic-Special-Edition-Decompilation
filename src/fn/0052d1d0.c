/* Rebuilt from lomse.exe FUN_0052d1d0 @ 0x0052d1d0 (103 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052d1d0 1
undefined4 __fastcall rb_0052d1d0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  piVar4 = param_1 + 6;
  piVar2 = param_1;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar4,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      if (iVar3 == 0) {
        piVar2 = (int *)(int)*(char *)(uVar1 + 0x5ac);
      }
      else if (piVar2 != (int *)(int)*(char *)(uVar1 + 0x5ac)) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 3;
  } while (iVar5 < 0x1e);
  return 0;
}
