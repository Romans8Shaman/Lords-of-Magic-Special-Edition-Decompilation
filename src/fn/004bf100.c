/* Rebuilt from lomse.exe FUN_004bf100 @ 0x004bf100 (138 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee70 (*(int * *)0x005aee70)
#define FUN_004bee50 ((undefined4 (__thiscall *)(void *, int))0x004bee50)
#define FUN_005397f0 ((uint (__cdecl *)(char *, uint, uint, int *))0x005397f0)

#define LOM_SELF_004bf100 1
undefined4 __thiscall rb_004bf100(void *this, int *volatile param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = param_1;
  uVar2 = FUN_005397f0((char *)&param_1,4,1,param_1);
  if (uVar2 != 1) {
    return 0;
  }
  iVar5 = (int)param_1 + 0x1f >> 5;
  if (0 < iVar5) {
    piVar3 = param_1;
    if ((int)param_1 < (int)DAT_005aee70) {
      piVar3 = DAT_005aee70;
    }
    iVar4 = FUN_004bee50(this,(int)piVar3);
    if (iVar4 == 0) {
      return 0;
    }
    uVar2 = FUN_005397f0(*(char **)this,iVar5 * 4,1,piVar1);
    if (uVar2 != 1) {
      return 0;
    }
    *(int **)((int)this + 4) = DAT_005aee70;
  }
  return 1;
}
