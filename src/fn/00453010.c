/* Rebuilt from lomse.exe FUN_00453010 @ 0x00453010 (86 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792f8 (*(int *)0x005792f8)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00453010 1
void __cdecl rb_00453010(int param_1,void *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    uVar3 = DAT_005792f8;
    for (iVar1 = *(int *)(param_1 + 0x348); DAT_005792f8 = uVar3, iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x24)) {
      DAT_005792f8 = iVar1;
      FUN_004d05e0(param_2,param_3,param_4);
      iVar2 = *(int *)((int)param_2 + 0x6c);
      DAT_005792f8 = uVar3;
      *(undefined4 *)((int)param_2 + 0x6c) = *(undefined4 *)((int)param_2 + 0x70);
      if (iVar2 != 0) {
        return;
      }
      uVar3 = DAT_005792f8;
    }
  }
  return;
}
