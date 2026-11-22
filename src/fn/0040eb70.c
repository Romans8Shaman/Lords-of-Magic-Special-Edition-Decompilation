/* Rebuilt from lomse.exe FUN_0040eb70 @ 0x0040eb70 (212 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555728 (*(undefined4 *)0x00555728)
#define DAT_00555730 (*(undefined4 *)0x00555730)
#define DAT_00555734 (*(undefined4 *)0x00555734)
#define DAT_00578138 (*(undefined4 *)0x00578138)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040eb70 1
void __thiscall rb_0040eb70(void *this,void *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  DAT_00555728 = *(undefined4 *)((int)this + 4);
  DAT_00578138 = 0;
  if (param_2 == 0) {
    DAT_00555730 = 0xffffffff;
    DAT_00555734 = 0xffffffff;
  }
  else {
    DAT_00555730 = *(undefined4 *)(param_2 + 0x28);
    DAT_00555734 = param_3;
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_2 + 0x28);
  }
  param_2 = *(int *)((int)this + 0x44);
  if (-1 < param_2 + -1) {
    puVar4 = (undefined4 *)((int)this + (param_2 + -1) * 4 + 0x1c);
    do {
      uVar1 = *puVar4;
      if (*(int *)((int)param_1 + 0x54) == 0) {
        *(undefined4 *)((int)param_1 + 0x90) = 3;
        FUN_004d4550(param_1);
        *(undefined4 *)((int)param_1 + 0x90) = 0;
        *(undefined4 *)((int)param_1 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)param_1 + 0x50);
        iVar3 = *(int *)((int)param_1 + 0x54) + -1;
        *(int *)((int)param_1 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
      }
      puVar4 = puVar4 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_004d09a0(param_1,*(uint *)((int)this + 0x14),*(int **)((int)this + 0x18),
               -*(int *)((int)this + 0x44));
  DAT_00555728 = 0xffffffff;
  DAT_00555730 = 0xffffffff;
  DAT_00555734 = 0xffffffff;
  return;
}
