/* Rebuilt from lomse.exe FUN_00406a30 @ 0x00406a30 (73 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406a30 1
int __thiscall rb_00406a30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar3 = 0;
  for (iVar4 = *(int *)((int)this + 0x40); iVar4 <= iVar1; iVar4 = iVar4 + 1) {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(int *)(iVar2 + 0x48) == param_1)) &&
       (iVar2 = FUN_00407d50(iVar2), iVar2 == 0)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}
