/* Rebuilt from lomse.exe FUN_004c6fd0 @ 0x004c6fd0 (279 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c6fd0 1
void __thiscall rb_004c6fd0(void *this,int param_1,uint param_2,int *param_3,void *param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  
  psVar8 = *(short **)((int)this + 0x198);
  if (psVar8 != (short *)0x0) {
    do {
      if (param_1 == psVar8[1]) break;
      psVar8 = *(short **)(psVar8 + 2);
    } while (psVar8 != (short *)0x0);
    if (psVar8 != (short *)0x0) {
      while (param_1 == psVar8[1]) {
        sVar1 = *psVar8;
        puVar5 = FUN_004c6fc0();
        iVar3 = *(int *)(puVar5 + 0x6c);
        sVar2 = *psVar8;
        puVar5 = FUN_004c6fc0();
        iVar4 = *(int *)(puVar5 + 0x6c);
        if (*(int *)((int)param_4 + 0x54) == 0) {
          *(undefined4 *)((int)param_4 + 0x90) = 3;
          FUN_004d4550(param_4);
          *(undefined4 *)((int)param_4 + 0x90) = 0;
          *(undefined4 *)((int)param_4 + 0xa4) = 0;
        }
        else {
          iVar7 = *(int *)((int)param_4 + 0x50);
          iVar6 = *(int *)((int)param_4 + 0x54) + -1;
          *(int *)((int)param_4 + 0x54) = iVar6;
          *(undefined4 *)(iVar7 + iVar6 * 8) = 1;
          *(int *)(iVar7 + 4 + iVar6 * 8) = (int)sVar1 % iVar3;
        }
        if (*(int *)((int)param_4 + 0x54) == 0) {
          *(undefined4 *)((int)param_4 + 0x90) = 3;
          FUN_004d4550(param_4);
          *(undefined4 *)((int)param_4 + 0x90) = 0;
          *(undefined4 *)((int)param_4 + 0xa4) = 0;
        }
        else {
          iVar3 = *(int *)((int)param_4 + 0x50);
          iVar7 = *(int *)((int)param_4 + 0x54) + -1;
          *(int *)((int)param_4 + 0x54) = iVar7;
          *(undefined4 *)(iVar3 + iVar7 * 8) = 1;
          *(int *)(iVar3 + 4 + iVar7 * 8) = (int)sVar2 / iVar4;
        }
        FUN_004d05e0(param_4,param_2,param_3);
        iVar3 = *(int *)((int)param_4 + 0x6c);
        *(undefined4 *)((int)param_4 + 0x6c) = *(undefined4 *)((int)param_4 + 0x70);
        if (iVar3 != 0) {
          return;
        }
        psVar8 = *(short **)(psVar8 + 2);
        if (psVar8 == (short *)0x0) {
          return;
        }
      }
    }
  }
  return;
}
