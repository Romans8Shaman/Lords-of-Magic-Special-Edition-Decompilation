/* Rebuilt from lomse.exe FUN_0041cad0 @ 0x0041cad0 (135 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define FUN_0041de50 ((undefined4 (__cdecl *)(int *, int, int, void *))0x0041de50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0041cad0 1
undefined4 __thiscall rb_0041cad0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)FUN_00482ac0(this,*param_1,0);
  pvVar4 = DAT_005a7b78;
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar1 = param_1[3];
  iVar2 = param_1[4];
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar4);
    *(undefined4 *)((int)pvVar4 + 0x90) = 0;
    *(undefined4 *)((int)pvVar4 + 0xa4) = 0;
  }
  else {
    iVar6 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar6;
    iVar3 = *(int *)((int)pvVar4 + 0x50);
    *(int *)(iVar3 + iVar6 * 8) = iVar1;
    *(int *)(iVar3 + 4 + iVar6 * 8) = iVar2;
  }
  FUN_0041de50(piVar5,param_1[1],param_1[2],DAT_005a7b78);
  return 1;
}
