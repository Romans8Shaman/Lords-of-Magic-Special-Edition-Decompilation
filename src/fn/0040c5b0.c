/* Rebuilt from lomse.exe FUN_0040c5b0 @ 0x0040c5b0 (159 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00555728 (*(undefined4 *)0x00555728)
#define DAT_00578138 (*(undefined4 *)0x00578138)
#define FUN_004d09a0 ((undefined4 (__thiscall *)(void *, uint, int *, int))0x004d09a0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_0040c5b0 1
void __thiscall rb_0040c5b0(void *this,void *param_1)

{
  undefined4 uVar1;
  int iVar2;
  void *this_00;
  int iVar3;
  undefined4 *puVar4;
  
  this_00 = param_1;
  DAT_00555728 = *(undefined4 *)((int)this + 0x34);
  DAT_00578138 = 0;
  param_1 = *(void **)((int)this + 0x30);
  if (-1 < (int)param_1 + -1) {
    puVar4 = (undefined4 *)((int)this + ((int)param_1 + -1) * 4 + 8);
    do {
      uVar1 = *puVar4;
      if (*(int *)((int)this_00 + 0x54) == 0) {
        *(undefined4 *)((int)this_00 + 0x90) = 3;
        FUN_004d4550(this_00);
        *(undefined4 *)((int)this_00 + 0x90) = 0;
        *(undefined4 *)((int)this_00 + 0xa4) = 0;
      }
      else {
        iVar2 = *(int *)((int)this_00 + 0x50);
        iVar3 = *(int *)((int)this_00 + 0x54) + -1;
        *(int *)((int)this_00 + 0x54) = iVar3;
        *(undefined4 *)(iVar2 + iVar3 * 8) = 1;
        *(undefined4 *)(iVar2 + 4 + iVar3 * 8) = uVar1;
      }
      puVar4 = puVar4 + -1;
      param_1 = (void *)((int)param_1 + -1);
    } while (param_1 != (void *)0x0);
  }
  FUN_004d09a0(this_00,*(uint *)this,*(int **)((int)this + 4),-*(int *)((int)this + 0x30));
  DAT_00555728 = 0xffffffff;
  return;
}
