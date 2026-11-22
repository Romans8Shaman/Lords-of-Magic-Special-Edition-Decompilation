/* Rebuilt from lomse.exe FUN_00428ba0 @ 0x00428ba0 (74 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555d6c (*(undefined4 *)0x00555d6c)
#define DAT_005788c4 (*(int *)0x005788c4)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_00428ba0 1
void __thiscall rb_00428ba0(void *this,void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x1c);
  iVar3 = DAT_005788c4;
  do {
    DAT_005788c4 = iVar1;
    if (DAT_005788c4 == 0) {
      DAT_005788c4 = iVar3;
      return;
    }
    iVar1 = *(int *)(DAT_005788c4 + 0x14);
    DAT_00555d6c = *(undefined4 *)(DAT_005788c4 + 0xc);
    FUN_004d05e0(param_1,param_2,param_3);
    iVar2 = *(int *)((int)param_1 + 0x6c);
    *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
    iVar3 = DAT_005788c4;
  } while (iVar2 == 0);
  return;
}
