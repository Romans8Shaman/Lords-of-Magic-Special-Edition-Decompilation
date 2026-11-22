/* Rebuilt from lomse.exe FUN_00497940 @ 0x00497940 (80 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047ee90 ((int (__thiscall *)(void *, char *, int))0x0047ee90)

#define LOM_SELF_00497940 1
int __fastcall rb_00497940(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar4 = (char *)param_1[2];
  uVar3 = 0xffffffff;
  iVar5 = 0;
  pcVar7 = pcVar4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  iVar6 = 0;
  if (-1 < (int)(~uVar3 - 2)) {
    do {
      iVar2 = FUN_0047ee90((void *)param_1[5],pcVar4 + iVar6,*param_1);
      pcVar4 = (char *)param_1[2];
      iVar6 = iVar6 + iVar2;
      if (((pcVar4[iVar6] == ' ') || (pcVar4[iVar6] == '\n')) || (iVar2 < 1)) {
        iVar6 = iVar6 + 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar6 <= (int)(~uVar3 - 2));
  }
  return iVar5;
}
