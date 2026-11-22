/* Rebuilt from lomse.exe FUN_004164e0 @ 0x004164e0 (232 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define FUN_004176d0 ((undefined4 (__thiscall *)(void *, int))0x004176d0)
#define FUN_004245a0 ((undefined4 (__fastcall *)(int *))0x004245a0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00526ea0 ((undefined4 (__fastcall *)(int))0x00526ea0)

#define LOM_SELF_004164e0 1
undefined4 __thiscall rb_004164e0(void *this,int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 0x4c))) {
    if (param_2 != 0) {
      iVar3 = (int)this + param_1 * 0x4c + 0xc4;
      uVar1 = FUN_00525f10(iVar3);
      if (uVar1 != 0) {
        param_2 = param_1 + 1;
      }
      FUN_00526ea0(iVar3);
    }
    iVar3 = *(int *)((int)this + 0x4c) + -1;
    *(int *)((int)this + 0x4c) = iVar3;
    if (param_1 < iVar3) {
      puVar2 = (undefined4 *)((int)this + param_1 * 0x4c + 0xc4);
      do {
        param_1 = param_1 + 1;
        puVar4 = puVar2 + 0x13;
        puVar5 = puVar2;
        for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar2 = puVar2 + 0x13;
      } while (param_1 < *(int *)((int)this + 0x4c));
    }
    iVar3 = *(int *)((int)this + 0x4c) * 0x4c;
    *(undefined4 *)((int)this + iVar3 + 0xdc) = 0;
    *(undefined4 *)((int)this + iVar3 + 0xe0) = 0;
    *(undefined4 *)((int)this + iVar3 + 0xd8) = 0;
    if (param_2 != 0) {
      if (0 < *(int *)((int)this + 0x4c)) {
        ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
        return 0;
      }
      if ((*(uint *)((int)this + 0x30) & 0x1c00000) != 0) {
        FUN_004245a0(this);
      }
      FUN_004176d0(this,0);
      FUN_00483be0(&DAT_005aa12c,this);
      return 1;
    }
  }
  return 1;
}
