/* Rebuilt from lomse.exe FUN_0046cfd0 @ 0x0046cfd0 (82 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0046ea30 ((undefined4 (__thiscall *)(void *, int, int))0x0046ea30)

#define LOM_SELF_0046cfd0 1
undefined4 __fastcall rb_0046cfd0(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar2 = *(int *)((int)param_1 + 0xc);
  if (0 < iVar2) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar4 + 0x28 + *(int *)((int)param_1 + 4)) < 1) &&
         (iVar1 = iVar5 + 1, iVar1 < iVar2)) {
        piVar3 = (int *)(iVar4 + 0x58 + *(int *)((int)param_1 + 4));
        do {
          if (0 < *piVar3) {
            FUN_0046ea30(param_1,iVar5,iVar1);
            break;
          }
          iVar1 = iVar1 + 1;
          piVar3 = piVar3 + 0xc;
        } while (iVar1 < iVar2);
      }
      iVar2 = *(int *)((int)param_1 + 0xc);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x30;
    } while (iVar5 < iVar2);
  }
  return 1;
}
