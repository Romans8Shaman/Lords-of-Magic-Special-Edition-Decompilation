/* Rebuilt from lomse.exe FUN_00402020 @ 0x00402020 (283 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555158 (*(undefined4 *)0x00555158)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_004193e0 ((undefined4 (__thiscall *)(void *, int))0x004193e0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004fbe60 ((undefined4 (__thiscall *)(void *, int, int))0x004fbe60)

#define LOM_SELF_00402020 1
void __stdcall rb_00402020(void *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[8];
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
  
  iVar4 = 0;
  piVar3 = local_20;
  do {
    iVar1 = FUN_004a8300(&DAT_005ae958,
                         *(int *)(DAT_005ae970 + (iVar4 + *(int *)((int)param_1 + 0x1c) * 8) * 4),0)
    ;
    uVar2 = FUN_00482ac0(&DAT_005aa12c,iVar1,0);
    if (((uVar2 == 0) || (*(int *)(uVar2 + 0x48) == *(int *)((int)param_1 + 0x48))) ||
       (*(int *)(uVar2 + 0x74) != *(int *)((int)param_1 + 0x28))) {
      *piVar3 = 0;
    }
    else {
      *piVar3 = 1;
    }
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar4 < 8);
  iVar4 = 0;
  piVar3 = &DAT_00555158;
  do {
    uVar2 = *(int *)((int)param_1 + 0x44) + *piVar3 & 7;
    if (local_20[uVar2] != 0) break;
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
  } while ((int)piVar3 < 0x555178);
  if (7 < iVar4) {
    for (iVar4 = FUN_004fbe60(&DAT_005ae974,0,9); iVar4 != 0;
        iVar4 = FUN_004fbe60(&DAT_005ae974,iVar4,9)) {
      if (*(int *)(iVar4 + 0x5c) == *(int *)((int)param_1 + 0x28)) {
        iVar1 = FUN_004a8b50(&DAT_005ae958,*(int *)((int)param_1 + 0x1c),*(int *)(iVar4 + 0x1c));
        local_20[iVar1] = 1;
      }
    }
    iVar4 = 0;
    piVar3 = &DAT_00555158;
    do {
      uVar2 = *(int *)((int)param_1 + 0x44) + *piVar3 & 7;
      if (local_20[uVar2] != 0) break;
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + 1;
    } while ((int)piVar3 < 0x555178);
    if (7 < iVar4) {
      return;
    }
  }
  FUN_004193e0(param_1,uVar2);
  return;
#undef local_20
}
