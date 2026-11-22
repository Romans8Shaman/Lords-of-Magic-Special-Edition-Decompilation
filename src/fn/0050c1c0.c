/* Rebuilt from lomse.exe FUN_0050c1c0 @ 0x0050c1c0 (530 bytes, __thiscall).
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
#define FUN_004f6890 ((undefined4 (__thiscall *)(void *, uint, uint, int))0x004f6890)
#define FUN_0050c7f0 ((undefined4 (__fastcall *)(int))0x0050c7f0)
#define FUN_0050c980 ((uint (__fastcall *)(int *))0x0050c980)
#define FUN_0050f790 ((undefined4 (__fastcall *)(int))0x0050f790)

#define LOM_SELF_0050c1c0 1
undefined4 __thiscall rb_0050c1c0(void *this,uint param_1,uint param_2,int param_3)

{
  void *pvVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 6) && (*(int *)((int)this + 0x54) < 0)) {
    *(undefined4 *)((int)this + 0x14) = 1000;
    return 1;
  }
  if (param_3 < 0) {
    iVar6 = *(int *)((int)this + 0x1c);
    puVar2 = FUN_004c6fc0();
    iVar6 = (int)*(short *)(*(int *)(puVar2 + 0x54) + 2 + iVar6 * 8);
    puVar2 = FUN_004c6fc0();
    if (*(int *)(puVar2 + 0x4c) < iVar6) {
      param_3 = 0;
      *(undefined4 *)((int)this + 0x14) = 1000;
    }
    else {
      param_3 = (iVar6 < 1) + 1;
    }
  }
  if (param_3 == 0) {
    pvVar1 = *(void **)((int)this + 0x58);
    if ((pvVar1 != (void *)0x0) && ((*(uint *)((int)pvVar1 + 0x30) & 0x200) != 0)) {
      FUN_004166d0(pvVar1,param_1,param_2);
    }
    return 0;
  }
  FUN_004f6890(this,param_1,param_2,param_3);
  if (((&DAT_005a8078)[DAT_005a7d8c * 0x100] == 6) && ((*(byte *)((int)this + 0x30) & 2) == 0)) {
    if (*(int *)((int)this + 0x58) == 0) {
      return 1;
    }
    if ((*(byte *)(*(int *)((int)this + 0x58) + 0x30) & 0x20) == 0) {
      return 1;
    }
  }
  if (-1 < *(char *)((int)this + 0x4c)) {
    uVar5 = (uint)*(byte *)((int)this + 0x4d);
    iVar6 = (int)*(char *)((int)this + 0x4c);
    goto LAB_0050c2f6;
  }
  iVar6 = ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x3c)))((void *)(this));
  uVar5 = 5;
  if (-1 < *(int *)((int)this + 0x54)) {
    iVar3 = FUN_0050c7f0((int)this);
    if (iVar3 == 0) {
      iVar6 = 0xf;
      goto LAB_0050c2f6;
    }
    uVar4 = FUN_0050c980(this);
    if ((uVar4 != 0) || (iVar3 = FUN_0050f790((int)this), iVar3 != 0)) {
      uVar5 = (byte)~(byte)*(undefined4 *)((int)this + 0x30) >> 1 & 1;
      goto LAB_0050c2f6;
    }
    if (*(int *)((int)this + 0x58) != 0) goto LAB_0050c2f6;
  }
  iVar6 = -1;
LAB_0050c2f6:
  if ((iVar6 < 0) || (0xf < iVar6)) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = &DAT_005af194 + iVar6 * 0x1d84;
  }
  if (((puVar2 != (undefined *)0x0) && (*(int *)(puVar2 + 0x28) != 0)) &&
     (uVar4 = FUN_0049d8f0(*(int *)(puVar2 + 0x28)), 0 < (int)uVar4)) {
    iVar6 = *(int *)((int)this + 0x28) + DAT_005af134;
    FUN_0049da80(*(void **)(puVar2 + 0x28),uVar5);
    pvVar1 = *(void **)(puVar2 + 0x28);
    *(int *)((int)pvVar1 + 0xc) = iVar6 % (int)uVar4 + -1;
    FUN_0049d9a0(pvVar1);
    FUN_0049cd80(*(void **)(puVar2 + 0x28),*(int *)(puVar2 + 0x15c8) + param_1,
                 *(int *)(puVar2 + 0x15cc) + param_2,-1,0,2);
  }
  if (((*(char *)((int)this + 0x4c) < '\0') && (*(void **)((int)this + 0x58) != (void *)0x0)) &&
     ((puVar2 != (undefined *)0x0 && (uVar5 != 5)))) {
    FUN_004166d0(*(void **)((int)this + 0x58),param_1,param_2);
  }
  return 1;
}
