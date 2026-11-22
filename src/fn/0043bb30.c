/* Rebuilt from lomse.exe FUN_0043bb30 @ 0x0043bb30 (402 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a8078 (*(undefined4 *)0x005a8078)
#define DAT_005af134 (*(int *)0x005af134)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004166d0 ((undefined4 (__thiscall *)(void *, int, int))0x004166d0)
#define FUN_0049cd80 ((undefined4 (__thiscall *)(void *, uint, uint, int, int, int))0x0049cd80)
#define FUN_0049d8f0 ((uint (__fastcall *)(int))0x0049d8f0)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define FUN_0049da80 ((undefined4 (__thiscall *)(void *, uint))0x0049da80)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)

#define LOM_SELF_0043bb30 1
undefined4 __thiscall rb_0043bb30(void *this, uint unused_stack_8, uint param_p3, undefined4 unused_pad_8)

{
  void *pvVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 0x2c) == 0) {
    return 0;
  }
  iVar4 = *(int *)((int)this + 0x1c);
  puVar2 = FUN_004c6fc0();
  iVar4 = (int)*(short *)(*(int *)(puVar2 + 0x54) + 2 + iVar4 * 8);
  puVar2 = FUN_004c6fc0();
  if (*(int *)(puVar2 + 0x4c) < iVar4) {
    iVar4 = 0;
    *(undefined4 *)((int)this + 0x14) = 1000;
  }
  else {
    iVar4 = (iVar4 < 1) + 1;
  }
  if (iVar4 == 0) {
    pvVar1 = *(void **)((int)this + 0x48);
    if ((pvVar1 != (void *)0x0) && ((*(uint *)((int)pvVar1 + 0x30) & 0x200) != 0)) {
      FUN_004166d0(pvVar1,unused_stack_8,param_p3);
      return 1;
    }
  }
  else {
    FUN_0049da80(*(void **)((int)this + 0x2c),(uint)*(byte *)((int)this + 0x50));
    FUN_0049cd80(*(void **)((int)this + 0x2c),unused_stack_8,param_p3,*(int *)((int)this + 0x38),1,
                 iVar4);
    *(uint *)((int)this + 0x14) = unused_stack_8;
    *(uint *)((int)this + 0x18) = param_p3;
    if ((((&DAT_005a8078)[DAT_005a7d8c * 0x100] != 6) || ((*(byte *)((int)this + 0x30) & 2) != 0))
       || ((*(int *)((int)this + 0x48) != 0 &&
           ((*(byte *)(*(int *)((int)this + 0x48) + 0x30) & 0x20) != 0)))) {
      if (*(int *)((int)this + 0x58) == 0xd) {
        iVar4 = *(int *)((int)this + 0x4c);
        if ((iVar4 < 0) || (0xf < iVar4)) {
          puVar2 = (undefined *)0x0;
        }
        else {
          puVar2 = &DAT_005af194 + iVar4 * 0x1d84;
        }
        if (((puVar2 != (undefined *)0x0) && (*(int *)(puVar2 + 0x28) != 0)) &&
           (uVar3 = FUN_0049d8f0(*(int *)(puVar2 + 0x28)), 0 < (int)uVar3)) {
          iVar4 = *(int *)((int)this + 0x28) + DAT_005af134;
          FUN_0049da80(*(void **)(puVar2 + 0x28),(uint)((*(byte *)((int)this + 0x30) & 2) == 0));
          pvVar1 = *(void **)(puVar2 + 0x28);
          *(int *)((int)pvVar1 + 0xc) = iVar4 % (int)uVar3 + -1;
          FUN_0049d9a0(pvVar1);
          FUN_0049cd80(*(void **)(puVar2 + 0x28),*(int *)(puVar2 + 0x15c8) + unused_stack_8,
                       *(int *)(puVar2 + 0x15cc) + param_p3,-1,0,2);
        }
      }
      if (*(void **)((int)this + 0x48) != (void *)0x0) {
        FUN_004166d0(*(void **)((int)this + 0x48),unused_stack_8,param_p3);
      }
    }
  }
  return 1;
}
