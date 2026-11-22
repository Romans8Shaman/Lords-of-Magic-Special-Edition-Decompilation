/* Rebuilt from lomse.exe FUN_004bf4c0 @ 0x004bf4c0 (372 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b78 (*(void * *)0x005a7b78)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_004348c0 ((int (__thiscall *)(void *, undefined4, int))0x004348c0)
#define FUN_004bcb60 ((undefined4 (__thiscall *)(void *, int))0x004bcb60)
#define FUN_004bcb90 ((undefined4 (__thiscall *)(void *, int))0x004bcb90)
#define FUN_004bf800 ((undefined4 (__thiscall *)(void *, uint *, undefined4))0x004bf800)
#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)

#define LOM_SELF_004bf4c0 1
void __thiscall rb_004bf4c0(void *this, undefined *volatile param_1, void *volatile param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_8;
  typedef int * _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  puVar1 = param_1;
  *(undefined **)((int)this + 8) = param_1;
  puVar7 = *(undefined **)((int)param_2 + 8);
  *(undefined **)((int)this + 0xc) = puVar7;
  puVar4 = *(undefined **)((int)param_2 + 0xc);
  *(undefined **)((int)this + 0x10) = puVar4;
  puVar6 = param_1;
  if ((param_1 != puVar7) && (param_1 != puVar4)) {
    if (((int)param_1 < 0) || (0xf < (int)param_1)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = &DAT_005af194 + (int)param_1 * 0x1d84;
    }
    if (((int)puVar7 < 0) || (0xf < (int)puVar7)) {
      param_1 = (undefined *)0x0;
    }
    else {
      param_1 = puVar2 + (int)puVar7 * 0x88 + 0xd28;
    }
    if (((int)puVar4 < 0) || (0xf < (int)puVar4)) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar2 + (int)puVar4 * 0x88 + 0xd28;
    }
    puVar6 = puVar7;
    if (*(int *)(param_1 + 0xc) <= *(int *)(puVar2 + 0xc)) {
      puVar6 = puVar4;
    }
  }
  iVar3 = FUN_004348c0(param_2,puVar6,1);
  *(int *)((int)this + 0x14) = iVar3;
  iVar3 = FUN_004348c0(param_2,puVar6,0);
  *(int *)((int)this + 0x18) = iVar3;
  if (iVar3 < *(int *)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x10);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0xc);
  }
  else if (*(int *)((int)this + 0x14) < iVar3) {
    *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0xc);
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this + 0x10);
  }
  else {
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
    *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  }
  if (((int)puVar1 < 0) || (0xf < (int)puVar1)) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = &DAT_005af194 + (int)puVar1 * 0x1d84;
  }
  puVar4 = *(undefined **)((int)this + 0xc);
  if (puVar4 == puVar1) {
    puVar4 = *(undefined **)((int)this + 0x10);
  }
  else if (*(undefined **)((int)this + 0x10) != puVar1) goto LAB_004bf5e7;
  FUN_004bcb90(puVar7,(int)puVar4);
LAB_004bf5e7:
  uVar5 = FUN_004bcb60(puVar7,*(int *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x24) = uVar5;
  uVar5 = FUN_004bcb60(puVar7,*(int *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x28) = uVar5;
  iVar3 = FUN_004bf800(this,&local_8,0);
  if (iVar3 != 0) {
    FUN_004d05e0(DAT_005a7b78,local_8,local_4);
  }
  return;
#undef local_8
#undef local_4
}
