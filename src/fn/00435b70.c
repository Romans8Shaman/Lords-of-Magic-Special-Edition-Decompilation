/* Rebuilt from lomse.exe FUN_00435b70 @ 0x00435b70 (246 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00435b70 1
void __thiscall rb_00435b70(void *this,void *param_1,int param_2,uint param_3,int *param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_2 == *(int *)((int)this + 8)) {
    iVar4 = 1;
  }
  else {
    if (param_2 != *(int *)((int)this + 0xc)) {
      return;
    }
    iVar4 = 0;
  }
  param_2 = 0;
  pcVar5 = (char *)((int)this + iVar4 * 0x2a + 0x2d);
  do {
    if (pcVar5[-1] == '\x05') {
      sVar2 = *(short *)(pcVar5 + -5);
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)param_1 + 0x50);
        iVar3 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar3;
        *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar3 * 8) = (int)sVar2;
      }
      cVar1 = *pcVar5;
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)param_1 + 0x50);
        iVar3 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar3;
        *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
        *(int *)(iVar4 + 4 + iVar3 * 8) = (int)cVar1;
      }
      FUN_004d05e0(param_1,param_3,param_4);
      iVar4 = *(int *)((int)param_1 + 0x6c);
      *(undefined4 *)((int)param_1 + 0x6c) = *(undefined4 *)((int)param_1 + 0x70);
      if (iVar4 != 0) {
        return;
      }
    }
    pcVar5 = pcVar5 + 6;
    param_2 = param_2 + 1;
    if (6 < param_2) {
      return;
    }
  } while( true );
}
