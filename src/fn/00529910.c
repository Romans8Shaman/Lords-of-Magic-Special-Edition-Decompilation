/* Rebuilt from lomse.exe FUN_00529910 @ 0x00529910 (159 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aee6c (*(int *)0x005aee6c)
#define FUN_004beef0 ((undefined4 (__thiscall *)(void *, int))0x004beef0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_00529360 ((undefined4 (__thiscall *)(void *, uint, uint, int))0x00529360)

#define LOM_SELF_00529910 1
void __thiscall rb_00529910(void *this,int param_1,void *param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < DAT_005aee6c) {
    do {
      iVar1 = FUN_004beef0((void *)(param_1 + 0x34),iVar3);
      if ((iVar1 != 0) && (iVar1 = FUN_00529360(this,2,3,iVar3), iVar1 != 0)) {
        if (*(int *)((int)param_2 + 0x54) == 0) {
          *(undefined4 *)((int)param_2 + 0x90) = 3;
          FUN_004d4550(param_2);
          *(undefined4 *)((int)param_2 + 0x90) = 0;
          *(undefined4 *)((int)param_2 + 0xa4) = 0;
        }
        else {
          iVar1 = *(int *)((int)param_2 + 0x50);
          iVar2 = *(int *)((int)param_2 + 0x54) + -1;
          *(int *)((int)param_2 + 0x54) = iVar2;
          *(undefined4 *)(iVar1 + iVar2 * 8) = 1;
          *(int *)(iVar1 + 4 + iVar2 * 8) = iVar3;
        }
        FUN_004d05e0(param_2,param_3,param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_005aee6c);
  }
  return;
}
