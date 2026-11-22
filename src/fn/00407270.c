/* Rebuilt from lomse.exe FUN_00407270 @ 0x00407270 (125 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00407270 1
int __thiscall rb_00407270(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar5 = *(int *)((int)this + 0x40);
  if (iVar1 < iVar5) {
    return -1;
  }
  do {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar5);
    if ((((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (iVar3 = FUN_00407d50(iVar2), iVar3 == 0))
       && (*(int *)(iVar2 + 0x48) == param_1)) {
      iVar3 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        piVar4 = (int *)(iVar2 + 0xc4);
        do {
          if (*piVar4 == param_2) {
            return iVar5;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 0x13;
        } while (iVar3 < *(int *)(iVar2 + 0x4c));
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 <= iVar1);
  return -1;
}
