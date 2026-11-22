/* Rebuilt from lomse.exe FUN_00401fd0 @ 0x00401fd0 (76 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)

#define LOM_SELF_00401fd0 1
void __thiscall rb_00401fd0(void *this,void *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0xc),0);
  if ((uVar1 == 0) && (uVar1 = FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 4),0), uVar1 == 0)) {
    return;
  }
  iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(uVar1 + 0x1c));
  FUN_004193e0(param_1,iVar2);
  return;
}
