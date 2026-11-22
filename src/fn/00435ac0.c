/* Rebuilt from lomse.exe FUN_00435ac0 @ 0x00435ac0 (169 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00435ac0 1
void __thiscall rb_00435ac0(void *this,void *param_1,int param_2,uint param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  if (param_2 == *(int *)((int)this + 8)) {
    iVar3 = 1;
  }
  else {
    if (param_2 != *(int *)((int)this + 0xc)) {
      return;
    }
    iVar3 = 0;
  }
  iVar4 = 0;
  psVar5 = (short *)((int)this + iVar3 * 0x2a + 0x28);
  do {
    if ((char)psVar5[2] == '\n') {
      sVar1 = *psVar5;
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)param_1 + 0x50);
        iVar2 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar2;
        *(undefined4 *)(iVar3 + iVar2 * 8) = 1;
        *(int *)(iVar3 + 4 + iVar2 * 8) = (int)sVar1;
      }
      FUN_004d05e0(param_1,param_3,param_4);
      iVar3 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 3;
    if (6 < iVar4) {
      return;
    }
  } while( true );
}
