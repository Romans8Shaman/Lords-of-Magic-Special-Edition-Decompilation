/* Rebuilt from lomse.exe FUN_004c5620 @ 0x004c5620 (204 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_004c5620 1
void __thiscall rb_004c5620(void *this,int param_1,uint param_2,int *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar5 = *(int *)((int)this + 0x24), iVar5 <= *(int *)((int)this + 0x18))) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 8) + iVar5 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) {
        uVar3 = FUN_004c5e60(&DAT_005aef04,*(int *)(iVar1 + 0x1c));
        iVar4 = FUN_004c5ec0(&DAT_005aef04,uVar3);
        if (iVar4 == param_1) {
          uVar2 = *(undefined4 *)(iVar1 + 0x28);
          if (*(int *)((int)param_4 + 0x54) == 0) {
            *(undefined4 *)((int)param_4 + 0x90) = 3;
            FUN_004d4550(param_4);
            *(undefined4 *)((int)param_4 + 0x90) = 0;
            *(undefined4 *)((int)param_4 + 0xa4) = 0;
          }
          else {
            iVar1 = *(int *)((int)param_4 + 0x50);
            iVar4 = *(int *)((int)param_4 + 0x54) + -1;
            *(int *)((int)param_4 + 0x54) = iVar4;
            *(undefined4 *)(iVar1 + iVar4 * 8) = 1;
            *(undefined4 *)(iVar1 + 4 + iVar4 * 8) = uVar2;
          }
          FUN_004d05e0(param_4,param_2,param_3);
          iVar1 = *(int *)((int)param_4 + 0x6c);
          *(undefined4 *)((int)param_4 + 0x6c) = *(undefined4 *)((int)param_4 + 0x70);
          if (iVar1 != 0) {
            return;
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(int *)((int)this + 0x18));
  }
  return;
}
