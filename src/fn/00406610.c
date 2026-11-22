/* Rebuilt from lomse.exe FUN_00406610 @ 0x00406610 (199 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406610 1
void __thiscall rb_00406610(void *this,int param_1,uint param_2,int *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x34);
  iVar5 = *(int *)((int)this + 0x40);
  do {
    if (iVar1 < iVar5) {
      return;
    }
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar5);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (iVar4 = FUN_00407d50(iVar3), iVar4 == 0))
       && ((iVar4 = FUN_00420620(iVar3), iVar4 == 0 && (*(int *)(iVar3 + 0x48) == param_1)))) {
      uVar2 = *(undefined4 *)(iVar3 + 0x28);
      if (*(int *)((int)param_4 + 0x54) == 0) {
        *(undefined4 *)((int)param_4 + 0x90) = 3;
        FUN_004d4550(param_4);
        *(undefined4 *)((int)param_4 + 0x90) = 0;
        *(undefined4 *)((int)param_4 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)param_4 + 0x50);
        iVar4 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
      }
      FUN_004d05e0(param_4,param_2,param_3);
      iVar3 = *(int *)((int)param_4 + 0x6c);
      *(undefined4 *)((int)param_4 + 0x6c) = *(undefined4 *)((int)param_4 + 0x70);
      if (iVar3 != 0) {
        return;
      }
    }
    iVar5 = iVar5 + 1;
  } while( true );
}
