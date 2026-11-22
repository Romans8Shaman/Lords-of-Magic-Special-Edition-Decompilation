/* Rebuilt from lomse.exe FUN_00406510 @ 0x00406510 (243 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_00406510 1
void __thiscall
rb_00406510(void *this,int param_1,int param_2,int param_3,uint param_4,int *param_5,void *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = FUN_004a51c0(this,param_1,param_2);
  iVar6 = *(int *)((int)this + 0x40);
  iVar1 = *(int *)((int)this + 0x34);
  do {
    if (iVar1 < iVar6) {
      return;
    }
    iVar4 = FUN_004f6000(&DAT_005ae974,iVar6);
    if ((((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) && (iVar5 = FUN_00407d50(iVar4), iVar5 == 0))
       && ((iVar5 = FUN_00420620(iVar4), iVar5 == 0 &&
           (iVar5 = FUN_004a8960(this,*(int *)(iVar4 + 0x1c),iVar3), iVar5 <= param_3)))) {
      uVar2 = *(undefined4 *)(iVar4 + 0x28);
      if (*(int *)((int)param_6 + 0x54) == 0) {
        *(undefined4 *)((int)param_6 + 0x90) = 3;
        FUN_004d4550(param_6);
        *(undefined4 *)((int)param_6 + 0x90) = 0;
        *(undefined4 *)((int)param_6 + 0xa4) = 0;
      }
      else {
        iVar4 = *(int *)((int)param_6 + 0x50);
        iVar5 = *(int *)((int)param_6 + 0x54) + -1;
        *(int *)((int)param_6 + 0x54) = iVar5;
        *(undefined4 *)(iVar4 + iVar5 * 8) = 1;
        *(undefined4 *)(iVar4 + 4 + iVar5 * 8) = uVar2;
      }
      FUN_004d05e0(param_6,param_4,param_5);
      iVar4 = *(int *)((int)param_6 + 0x6c);
      *(undefined4 *)((int)param_6 + 0x6c) = *(undefined4 *)((int)param_6 + 0x70);
      if (iVar4 != 0) {
        return;
      }
    }
    iVar6 = iVar6 + 1;
  } while( true );
}
