/* Rebuilt from lomse.exe FUN_00406a80 @ 0x00406a80 (207 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406a80 1
int __thiscall rb_00406a80(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)((int)this + 0x34);
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  for (iVar3 = *(int *)((int)this + 0x40); iVar3 <= iVar4; iVar3 = iVar3 + 1) {
    iVar1 = FUN_004f6000(&DAT_005ae974,iVar3);
    if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) && (*(int *)(iVar1 + 0x48) == param_1)) &&
       ((iVar2 = FUN_00407d50(iVar1), iVar2 == 0 &&
        ((param_2 == -1 || (*(char *)(iVar1 + 0x5ac) == param_2)))))) {
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + *(int *)(iVar1 + 0x1c) % DAT_005ae9c4;
      iVar6 = iVar6 + *(int *)(iVar1 + 0x1c) / DAT_005ae9c4;
    }
  }
  if (iVar7 < 1) {
    return -1;
  }
  iVar4 = FUN_004a51c0(&DAT_005ae958,iVar5 / iVar7,iVar6 / iVar7);
  return iVar4;
}
