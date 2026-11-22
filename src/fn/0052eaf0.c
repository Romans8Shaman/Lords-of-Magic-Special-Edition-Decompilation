/* Rebuilt from lomse.exe FUN_0052eaf0 @ 0x0052eaf0 (65 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004078c0 ((undefined4 (__stdcall *)(int))0x004078c0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052eaf0 1
void __fastcall rb_0052eaf0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_1 + 6;
  iVar3 = 0x1e;
  do {
    uVar1 = FUN_00482ac0(&DAT_005aa12c,*piVar2,0);
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x48) == *param_1)) {
      FUN_004078c0(*(int *)(uVar1 + 0x28));
    }
    piVar2 = piVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
