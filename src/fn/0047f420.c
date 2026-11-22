/* Rebuilt from lomse.exe FUN_0047f420 @ 0x0047f420 (187 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0047ee90 ((int (__thiscall *)(void *, char *, int))0x0047ee90)

#define LOM_SELF_0047f420 1
undefined4 __thiscall rb_0047f420(void *this,char *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  pcVar2 = param_1;
  uVar4 = 0xffffffff;
  iVar5 = 0;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  param_1 = (char *)0x0;
  iVar6 = ~uVar4 - 2;
  if (0 < param_4) {
    do {
      iVar3 = FUN_0047ee90(this,pcVar2 + iVar5,param_2);
      iVar5 = iVar5 + iVar3;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (iVar6 < iVar5) {
    return 1;
  }
  do {
    iVar3 = FUN_0047ee90(this,pcVar2 + iVar5,param_2);
    if (iVar3 < 1) {
      return 0;
    }
    if ((int)(~uVar4 - 1) < iVar3 + iVar5) {
      iVar3 = (iVar6 - iVar5) + 1;
    }
    iVar5 = iVar5 + iVar3;
    if (pcVar2[iVar5] == ' ') {
      iVar5 = iVar5 + 1;
    }
    param_1 = param_1 + *(int *)((int)this + 8);
    if (iVar6 < iVar5) {
      return 1;
    }
    if (param_3 < (int)(param_1 + *(int *)((int)this + 8))) {
      return 0;
    }
  } while (iVar5 <= iVar6);
  return 1;
}
