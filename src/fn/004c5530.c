/* Rebuilt from lomse.exe FUN_004c5530 @ 0x004c5530 (238 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aef04 (*(undefined4 *)0x005aef04)
#define FUN_004c5370 ((undefined4 (__thiscall *)(void *, int))0x004c5370)
#define FUN_004c5490 ((undefined4 (__thiscall *)(void *, int))0x004c5490)
#define FUN_004c5af0 ((undefined4 (__fastcall *)(int))0x004c5af0)
#define FUN_004c5e60 ((uint (__thiscall *)(void *, int))0x004c5e60)
#define FUN_004c5ec0 ((int (__thiscall *)(void *, int))0x004c5ec0)

#define LOM_SELF_004c5530 1
void __fastcall rb_004c5530(int param_1)

{
  int *this;
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_004c5af0(0x5aef04);
  iVar5 = *(int *)(param_1 + 0x24);
  if (iVar5 <= *(int *)(param_1 + 0x18)) {
    do {
      this = *(int **)(*(int *)(param_1 + 8) + iVar5 * 4);
      if (this != (int *)0x0) {
        iVar4 = this[1];
        if (iVar4 == 0) {
          uVar1 = FUN_004c5e60(&DAT_005aef04,this[7]);
          pvVar2 = (void *)FUN_004c5ec0(&DAT_005aef04,uVar1);
          if (pvVar2 != (void *)0x0) {
            FUN_004c5370(pvVar2,(int)this);
          }
        }
        else if (iVar4 == 2) {
          if (this[0x16] == 0xd) {
            uVar1 = FUN_004c5e60(&DAT_005aef04,this[7]);
            pvVar2 = (void *)FUN_004c5ec0(&DAT_005aef04,uVar1);
            if (pvVar2 != (void *)0x0) {
              iVar4 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
              FUN_004c5490(pvVar2,iVar4);
            }
          }
        }
        else if (iVar4 == 3) {
          uVar1 = FUN_004c5e60(&DAT_005aef04,this[7]);
          pvVar2 = (void *)FUN_004c5ec0(&DAT_005aef04,uVar1);
          if (pvVar2 != (void *)0x0) {
            iVar4 = 4;
            do {
              iVar3 = ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*this + 0x3c)))(this);
              FUN_004c5490(pvVar2,iVar3);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= *(int *)(param_1 + 0x18));
  }
  return;
}
