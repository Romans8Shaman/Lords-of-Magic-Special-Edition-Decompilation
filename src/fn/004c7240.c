/* Rebuilt from lomse.exe FUN_004c7240 @ 0x004c7240 (148 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c7240 1
void __thiscall rb_004c7240(void *this,uint param_1,int *param_2,void *param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0x198);
  do {
    if (iVar5 == 0) {
      return;
    }
    sVar2 = *(short *)(iVar5 + 2);
    if (*(int *)((int)param_3 + 0x54) == 0) {
      *(undefined4 *)((int)param_3 + 0x90) = 3;
      FUN_004d4550(param_3);
      *(undefined4 *)((int)param_3 + 0x90) = 0;
      *(undefined4 *)((int)param_3 + 0xa4) = 0;
    }
    else {
      iVar3 = *(int *)((int)param_3 + 0x50);
      iVar4 = *(int *)((int)param_3 + 0x54) + -1;
      *(int *)((int)param_3 + 0x54) = iVar4;
      *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
      *(int *)(iVar3 + 4 + iVar4 * 8) = (int)sVar2;
    }
    FUN_004d05e0(param_3,param_1,param_2);
    iVar3 = *(int *)((int)param_3 + 0x6c);
    *(undefined4 *)((int)param_3 + 0x6c) = *(undefined4 *)((int)param_3 + 0x70);
    if (iVar3 != 0) {
      return;
    }
    psVar1 = (short *)(iVar5 + 2);
    iVar5 = *(int *)(iVar5 + 4);
    if (iVar5 == 0) {
      return;
    }
    do {
      if (*psVar1 != *(short *)(iVar5 + 2)) break;
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
  } while( true );
}
