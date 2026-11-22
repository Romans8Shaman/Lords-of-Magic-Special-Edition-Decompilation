/* Rebuilt from lomse.exe FUN_00481240 @ 0x00481240 (75 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00481020 ((undefined4 (__thiscall *)(void *, int *))0x00481020)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004c1cf0 ((undefined4 (__fastcall *)(int))0x004c1cf0)

#define LOM_SELF_00481240 1
void __fastcall rb_00481240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(param_1 + 8) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x24), iVar3 <= *(int *)(param_1 + 0x18))) {
    do {
      piVar1 = (int *)FUN_00482ac0(&DAT_005aa12c,iVar3,0);
      if ((piVar1 != (int *)0x0) && (iVar2 = FUN_004c1cf0((int)piVar1), iVar2 == 0)) {
        FUN_00481020(&DAT_005ae958,piVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= *(int *)(param_1 + 0x18));
  }
  return;
}
