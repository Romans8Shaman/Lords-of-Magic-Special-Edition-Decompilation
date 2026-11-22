/* Rebuilt from lomse.exe FUN_004b2440 @ 0x004b2440 (277 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define FUN_004b29e0 ((undefined4 (__thiscall *)(void *, int, int, char *))0x004b29e0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004b2440 1
undefined4 __thiscall rb_004b2440(void *this,int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar2 = DAT_005a7b78;
  iVar1 = (&DAT_005a8078)[DAT_005a7d8c * 0x100];
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 6)))) {
    FUN_004b29e0(this,*param_1,param_1[1],(char *)(param_1 + 2));
    return 1;
  }
  iVar1 = *param_1;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
    iVar4 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
    *(int *)(iVar4 + 4 + iVar3 * 8) = iVar1;
  }
  pvVar2 = DAT_005a7b78;
  if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
    *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
    FUN_004d4550(pvVar2);
    *(undefined4 *)((int)pvVar2 + 0x90) = 0;
    *(undefined4 *)((int)pvVar2 + 0xa4) = 0;
  }
  else {
    iVar4 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
    *(int *)((int)DAT_005a7b78 + 0x54) = iVar4;
    iVar1 = *(int *)((int)pvVar2 + 0x50);
    *(undefined4 *)(iVar1 + iVar4 * 8) = 8;
    *(int **)(iVar1 + 4 + iVar4 * 8) = param_1 + 2;
  }
  FUN_004d05e0(DAT_005a7b78,*(uint *)((int)this + 0x5c4),*(int **)((int)this + 0x5c8));
  return 1;
}
