/* Rebuilt from lomse.exe FUN_004a0b70 @ 0x004a0b70 (141 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_004a0b70 1
void __stdcall rb_004a0b70(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = DAT_005ae98c;
  iVar5 = DAT_005ae998;
  if (DAT_005ae98c < DAT_005ae998) {
    return;
  }
  do {
    iVar2 = FUN_004f6000(&DAT_005ae974,iVar5);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 4) == 0)) && (*(int *)(iVar2 + 0x48) == param_1)) {
      iVar6 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        piVar7 = (int *)(iVar2 + 0xe0);
        do {
          iVar3 = *piVar7;
          if (iVar3 != 0) {
            uVar4 = 1 << (param_2 + 8U & 0x1f);
            do {
              if ((*(uint *)(iVar3 + 0x10) & uVar4) == 0) {
                *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | uVar4;
                return;
              }
              iVar3 = *(int *)(iVar3 + 0x14);
            } while (iVar3 != 0);
          }
          iVar6 = iVar6 + 1;
          piVar7 = piVar7 + 0x13;
        } while (iVar6 < *(int *)(iVar2 + 0x4c));
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 <= iVar1);
  return;
}
