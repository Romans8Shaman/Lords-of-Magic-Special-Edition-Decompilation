/* Rebuilt from lomse.exe FUN_004727b0 @ 0x004727b0 (418 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00585170 (*(undefined4 *)0x00585170)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005aa378 (*(undefined4 *)0x005aa378)
#define FUN_00472740 ((undefined4 (__thiscall *)(void *, uint))0x00472740)
#define FUN_004923e0 ((int (__fastcall *)(int *, undefined4, undefined4, undefined4))0x004923e0)
#define FUN_00492850 ((int (__thiscall *)(void *, int))0x00492850)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_0049b450 ((undefined4 (__thiscall *)(void *, byte *, int *))0x0049b450)
#define FUN_0049c960 ((undefined4 * (__thiscall *)(void *, undefined4))0x0049c960)
#define FUN_0049c9d0 ((undefined4 (__thiscall *)(void *, undefined4))0x0049c9d0)
#define FUN_0049dd20 ((undefined4 (__thiscall *)(void *, int *))0x0049dd20)
#define FUN_0049f120 ((undefined4 (__stdcall *)(void))0x0049f120)
#define PTR_s_ATTACK_MODE_00557fd0 (*(undefined * *)0x00557fd0)
#define _DAT_005aa630 (*(undefined4 *)0x005aa630)

#define LOM_SELF_004727b0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_004727b0(void *this,byte *param_1)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  void *this_01;
  undefined4 *puVar3;
  undefined4 unused_reg_1;
  int *piVar4;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef undefined1 _t_local_18[12];
#define local_18 (*(_t_local_18 *)(_fr + 0x0))

  if (*(int *)((int)this + 0x174) < 0) {
    FUN_0049dd20(local_18,(int *)&PTR_s_ATTACK_MODE_00557fd0);
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,param_1,local_18);
    *(int *)((int)this + 0x174) = iVar1;
  }
  this_00 = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)this + 0x174));
  if (this_00 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_0049b450(this_00,param_1,(int *)0x0);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (*(void **)((int)this + 0x170) == (void *)0x0) {
        this_01 = (void *)FUN_0049f120();
        if (this_01 == (void *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3 = FUN_0049c960(this_01,this_00);
        }
        *(undefined4 **)((int)this + 0x170) = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
      }
      else {
        FUN_0049c9d0(*(void **)((int)this + 0x170),this_00);
      }
      FUN_00495590((int *)((int)this + 0xf4));
      *(undefined4 *)((int)this + 0x114) = 0;
      FUN_00495590((int *)((int)this + 300));
      *(undefined4 *)((int)this + 0x14c) = 0;
      piVar4 = (int *)((int)this + 0x19c);
      iVar1 = 4;
      do {
        FUN_00495590(piVar4);
        piVar4[8] = 0;
        piVar4 = piVar4 + 0xe;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_00495590((int *)((int)this + 0x70));
      *(undefined4 *)((int)this + 0x90) = 0;
      *(undefined4 *)((int)this + 0x118) = DAT_00585170;
      *(undefined4 *)((int)this + 0x150) = DAT_00585170;
      *(undefined4 *)((int)this + 0x94) = DAT_00585170;
      _DAT_005aa630 = DAT_00585170;
      puVar3 = &DAT_005aa378;
      do {
        puVar3[-0x18] = DAT_00585170;
        *puVar3 = DAT_00585170;
        puVar3 = puVar3 + 0x32;
      } while ((int)puVar3 < 0x5aa698);
      puVar3 = (undefined4 *)((int)this + 0x1c0);
      iVar1 = 4;
      do {
        *puVar3 = DAT_00585170;
        puVar3 = puVar3 + 0xe;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      FUN_00472740(this,*(uint *)((int)this + 0xe8));
      uVar2 = 1;
    }
  }
  return uVar2;
#undef local_18
}
