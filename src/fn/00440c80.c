/* Rebuilt from lomse.exe FUN_00440c80 @ 0x00440c80 (129 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0043db60 ((undefined4 (__thiscall *)(void *, void *, int))0x0043db60)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00440c80 1
undefined4 __thiscall rb_00440c80(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *this_00;
  int iVar5;
  
  this_00 = (void *)FUN_00482ac0(this,*param_1,2);
  pvVar4 = DAT_005a7b78;
  if (this_00 == (void *)0x0) {
    return 0;
  }
  iVar1 = param_1[2];
  iVar2 = param_1[3];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar5 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar5;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(int *)(iVar3 + iVar5 * 8) = iVar1;
    *(int *)(iVar3 + 4 + iVar5 * 8) = iVar2;
  }
  FUN_0043db60(this_00,DAT_005a7b78,param_1[1]);
  return 1;
}
