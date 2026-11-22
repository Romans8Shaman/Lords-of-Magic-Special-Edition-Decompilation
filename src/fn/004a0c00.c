/* Rebuilt from lomse.exe FUN_004a0c00 @ 0x004a0c00 (155 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004a0c00 1
undefined4 __stdcall rb_004a0c00(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar1 = DAT_005ae98c;
  iVar4 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return 0;
  }
  do {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar4);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(int *)(iVar2 + 0x48) == param_1)) {
      iVar5 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        piVar6 = (int *)(iVar2 + 0xe0);
        do {
          iVar3 = *piVar6;
          if (iVar3 != 0) {
            do {
              if ((*(uint *)(iVar3 + 0x10) & 1 << (param_2 + 8U & 0x1f)) == 0) {
                return 1;
              }
              iVar3 = *(int *)(iVar3 + 0x14);
            } while (iVar3 != 0);
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 0x13;
        } while (iVar5 < *(int *)(iVar2 + 0x4c));
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 <= iVar1);
  return 0;
}
