/* Rebuilt from lomse.exe FUN_004a0a00 @ 0x004a0a00 (133 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00416a30 ((undefined4 (__fastcall *)(int))0x00416a30)
#define FUN_004a9220 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x004a9220)
#define FUN_004abdc0 ((undefined4 (__thiscall *)(void *, int, int))0x004abdc0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004a0a00 1
void __thiscall rb_004a0a00(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae998 <= DAT_005ae98c) {
    while ((((iVar2 = FUN_004f6000(&DAT_005ae974,iVar4), iVar2 == 0 || (*(int *)(iVar2 + 4) != 0))
            || (*(int *)(iVar2 + 0x48) != param_1)) ||
           ((iVar3 = FUN_00416a30(iVar2), iVar3 == 0 ||
            (iVar3 = FUN_004abdc0(this,*(int *)(iVar2 + 0x1c),param_2), iVar3 != 0))))) {
      iVar4 = iVar4 + 1;
      if (iVar1 < iVar4) {
        return;
      }
    }
    FUN_004a9220(this,*(int *)(iVar2 + 0x1c),2,0,param_2);
  }
  return;
}
