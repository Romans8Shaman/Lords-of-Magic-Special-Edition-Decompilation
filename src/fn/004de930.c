/* Rebuilt from lomse.exe op_geteditboxdata @ 0x004de930 (474 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_004026a0 ((undefined4 (__cdecl *)(uint *, uint *, uint *, undefined4 *))0x004026a0)
#define FUN_00404ab0 ((undefined4 (__thiscall *)(void *, undefined4))0x00404ab0)
#define FUN_0040adb0 ((undefined4 (__thiscall *)(void *, undefined4 *))0x0040adb0)
#define FUN_0041d1d0 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x0041d1d0)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_00493360 ((int (__thiscall *)(void *, int))0x00493360)
#define FUN_004d41c0 ((undefined4 (__thiscall *)(void *, char *))0x004d41c0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)
#define s_no_edit_box_005728dc (*(char (*)[])0x005728dc)

#define LOM_SELF_004de930 1
void __cdecl rb_004de930(void *vm)

{
  undefined4 uVar1;
  void *this;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined4 _t_fStack_10;
  typedef uint _t_uStack_c;
  typedef uint _t_auStack_8[2];
#define fStack_10 (*(_t_fStack_10 *)(_fr + 0x0))
#define uStack_c (*(_t_uStack_c *)(_fr + 0x4))
#define auStack_8 (*(_t_auStack_8 *)(_fr + 0x8))
  
  this = vm;
  FUN_0040adb0(vm,auStack_8);
  iVar2 = FUN_004026a0(auStack_8,(uint *)&vm,&uStack_c,&fStack_10);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
    FUN_004d4550(this);
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0xa4) = 0;
    return;
  }
  puVar3 = (undefined4 *)FUN_00493360(&DAT_005a7b50,(int)vm);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_004d41c0(this,s_no_edit_box_005728dc);
    return;
  }
  uVar1 = puVar3[7];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = *puVar3;
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[1];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[2];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 8;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  uVar1 = puVar3[4];
  if (*(int *)((int)this + 0x54) == 0) {
    FUN_00404ab0(this,3);
  }
  else {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = uVar1;
  }
  iVar2 = DAT_005a7b50;
  iVar4 = 0;
  if (puVar3[5] == 0) {
    pvVar5 = vm;
  }
  else {
    pvVar5 = (void *)0x0;
    if (0 < (int)DAT_005a7b50) {
      do {
        iVar4 = FUN_00492de0(&DAT_005a7b50,(int)pvVar5);
        if (iVar4 == puVar3[5]) break;
        pvVar5 = (void *)((int)pvVar5 + 1);
      } while ((int)pvVar5 < iVar2);
    }
  }
  if (iVar4 == 0) {
    if (*(int *)((int)this + 0x54) != 0) {
      iVar2 = *(int *)((int)this + 0x50);
      iVar4 = *(int *)((int)this + 0x54) + -1;
      *(int *)((int)this + 0x54) = iVar4;
      *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
      *(undefined4 *)(iVar2 + 4 + iVar4 * 8) = 0xffffffff;
      goto LAB_004deaf1;
    }
  }
  else if (*(int *)((int)this + 0x54) != 0) {
    iVar2 = *(int *)((int)this + 0x50);
    iVar4 = *(int *)((int)this + 0x54) + -1;
    *(int *)((int)this + 0x54) = iVar4;
    *(undefined4 *)(iVar2 + iVar4 * 8) = 1;
    *(void **)(iVar2 + 4 + iVar4 * 8) = pvVar5;
    goto LAB_004deaf1;
  }
  FUN_00404ab0(this,3);
LAB_004deaf1:
  FUN_0041d1d0(this,1,puVar3[6]);
  return;
#undef fStack_10
#undef uStack_c
#undef auStack_8
}
