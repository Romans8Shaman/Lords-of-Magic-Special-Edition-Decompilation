/* Rebuilt from lomse.exe FUN_00453070 @ 0x00453070 (108 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792c4 (*(int *)0x005792c4)

#define LOM_SELF_00453070 1
int __cdecl rb_00453070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 == 0) {
    return iVar4;
  }
  iVar3 = *(int *)(param_1 + 0x348);
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == param_2) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(iVar1 + 0x24);
      }
      else {
        *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar1 + 0x24);
      }
      *(undefined4 *)(iVar1 + 0x24) = 0;
      iVar4 = iVar4 + 1;
      *(int *)(iVar1 + 0x24) = DAT_005792c4;
      DAT_005792c4 = iVar1;
      if (iVar2 == 0) {
        iVar3 = *(int *)(param_1 + 0x348);
      }
      else {
        iVar3 = *(int *)(iVar2 + 0x24);
      }
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x24);
      iVar2 = iVar1;
    }
  }
  return iVar4;
}
