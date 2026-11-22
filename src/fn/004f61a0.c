/* Rebuilt from lomse.exe FUN_004f61a0 @ 0x004f61a0 (204 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00455c60 ((undefined4 (__thiscall *)(void *, int))0x00455c60)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)
#define _DAT_0054ded0 (*(float *)0x0054ded0)

#define LOM_SELF_004f61a0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl rb_004f61a0(int *volatile param_1, int *volatile param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  iVar4 = FUN_00455c60(&DAT_005ae958,iVar1);
  iVar5 = FUN_00455c60(&DAT_005ae958,iVar2);
  if (iVar4 < iVar5) {
    return 0xffffffff;
  }
  if (iVar5 < iVar4) {
    return 1;
  }
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)(iVar1 + 0x1c));
  if ((((uint)param_1 & 0x800000) != 0) && (*(int *)(iVar1 + 4) != 0)) {
    return 0xffffffff;
  }
  FUN_004a9a60(&DAT_005ae958,&param_1,*(int *)(iVar2 + 0x1c));
  if ((((uint)param_1 & 0x800000) != 0) && (*(int *)(iVar2 + 4) != 0)) {
    return 1;
  }
  fVar3 = *(float *)(iVar1 + 8) - *(float *)(iVar2 + 8);
  if ((__LOM_ISNAN(fVar3) || __LOM_ISNAN(_DAT_0054ded0)) || fVar3 < _DAT_0054ded0) {
    return 0xffffffff;
  }
  if ((!__LOM_ISNAN(fVar3) && !__LOM_ISNAN(_DAT_0054ded0)) && _DAT_0054ded0 < fVar3) {
    return 1;
  }
  return 0;
}
