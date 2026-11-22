/* Rebuilt from lomse.exe FUN_0043dd50 @ 0x0043dd50 (46 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_0043dbf0 ((undefined4 (__stdcall *)(int))0x0043dbf0)
#define FUN_0043dd80 ((undefined4 (__fastcall *)(int))0x0043dd80)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0043dd50 1
void __fastcall rb_0043dd50(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0043dd80(param_1);
  if (-1 < iVar1) {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar1,2);
    rb_0043dd50(uVar2);
  }
  FUN_0043dbf0(param_1);
  return;
}
