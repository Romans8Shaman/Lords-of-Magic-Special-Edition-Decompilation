/* Rebuilt from lomse.exe FUN_0052e9e0 @ 0x0052e9e0 (65 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_00407860 ((undefined4 (__thiscall *)(void *, int))0x00407860)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052e9e0 1
void __fastcall rb_0052e9e0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 6;
  iVar3 = 0x1e;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar2,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      FUN_00407860(&DAT_005aa12c,*(int *)(uVar1 + 0x28));
    }
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
