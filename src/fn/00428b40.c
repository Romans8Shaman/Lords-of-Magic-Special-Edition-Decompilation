/* Rebuilt from lomse.exe FUN_00428b40 @ 0x00428b40 (95 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(int *)0x00555d6c)
#define DAT_005788c4 (*(int * *)0x005788c4)
#define FUN_00427b80 ((undefined4 (__cdecl *)(int))0x00427b80)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00428b40 1
void __thiscall rb_00428b40(void *this,void *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)this + 0x1c);
  do {
    do {
      piVar2 = piVar1;
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar1 = (int *)piVar2[5];
      iVar3 = FUN_00427b80(*piVar2);
    } while ((*(byte *)(iVar3 + 0x18) & 0x10) == 0);
    DAT_00555d6c = piVar2[3];
    DAT_005788c4 = piVar2;
    FUN_004d05e0(param_1,param_2,param_3);
    iVar3 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
  } while (iVar3 == 0);
  return;
}
