/* Rebuilt from lomse.exe FUN_00419640 @ 0x00419640 (1179 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define DAT_005aeefc (*(undefined *)0x005aeefc)
#define FUN_00419520 ((undefined4 (__thiscall *)(void *, uint))0x00419520)
#define FUN_00419590 ((undefined4 (__thiscall *)(void *, int, int, int, int *, int *))0x00419590)
#define FUN_00420560 ((undefined4 (__fastcall *)(int))0x00420560)
#define FUN_00420910 ((undefined4 (__thiscall *)(void *, int, uint))0x00420910)
#define FUN_00421180 ((undefined4 (__fastcall *)(int *))0x00421180)
#define FUN_00427880 ((undefined4 (__thiscall *)(void *, int *, int))0x00427880)
#define FUN_00427900 ((undefined4 (__thiscall *)(void *, int, byte))0x00427900)
#define FUN_00427950 ((undefined4 (__thiscall *)(void *, int *))0x00427950)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004ab8f0 ((undefined4 (__thiscall *)(void *, int, int))0x004ab8f0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)

#define LOM_SELF_00419640 1
undefined4 __thiscall rb_00419640(void *this, uint volatile param_1, uint volatile param_2, int volatile param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  iVar6 = *(int *)((int)this + 0x1c);
  uVar9 = param_1 - 1 & 7;
  uVar8 = param_1 + 1 & 7;
  puVar1 = FUN_004c6fc0();
  iVar7 = *(int *)((int)this + 0x1c);
  iVar6 = *(int *)(*(int *)(puVar1 + 0x18) + (uVar9 + iVar6 * 8) * 4);
  puVar1 = FUN_004c6fc0();
  iVar7 = *(int *)(*(int *)(puVar1 + 0x18) + (uVar8 + iVar7 * 8) * 4);
  iVar2 = FUN_004a8300(&DAT_005ae958,iVar6,0);
  iVar3 = FUN_004a8300(&DAT_005ae958,iVar7,0);
  iVar4 = FUN_00420910(this,*(int *)((int)this + 0x1c),uVar9);
  iVar5 = FUN_00420910(this,*(int *)((int)this + 0x1c),uVar8);
  if ((param_1 & 1) == 0) {
    if ((iVar4 != 0) && (iVar2 == -1)) {
      iVar2 = iVar6;
      iVar4 = param_3;
      puVar1 = FUN_004c6fc0();
      iVar2 = FUN_004ab8f0(puVar1,iVar2,iVar4);
      if (iVar2 != 0) {
        iVar7 = param_3;
        puVar1 = FUN_004c6fc0();
        iVar6 = FUN_004a8b50(puVar1,iVar6,iVar7);
        FUN_00427880(&DAT_005aeefc,(int *)((int)this + 0x538),1);
        FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538),(byte)iVar6);
        FUN_004f5b70(this,uVar9);
        *(uint *)((int)this + 0x44) = uVar9;
        FUN_004b0310((void *)((int)this + 0x55c),uVar9);
        if (*(void **)((int)this + 0x58c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x58c),uVar9);
        }
        if (*(void **)((int)this + 0x598) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x598),uVar9);
        }
        goto LAB_00419a86;
      }
    }
    iVar6 = param_3;
    if ((iVar5 != 0) && (iVar3 == -1)) {
      iVar2 = iVar7;
      iVar3 = param_3;
      puVar1 = FUN_004c6fc0();
      iVar2 = FUN_004ab8f0(puVar1,iVar2,iVar3);
      if (iVar2 != 0) {
        puVar1 = FUN_004c6fc0();
        iVar6 = FUN_004a8b50(puVar1,iVar7,iVar6);
        FUN_00427880(&DAT_005aeefc,(int *)((int)this + 0x538),1);
        FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538),(byte)iVar6);
        FUN_004f5b70(this,uVar8);
        *(uint *)((int)this + 0x44) = uVar8;
        FUN_004b0310((void *)((int)this + 0x55c),uVar8);
        if (*(void **)((int)this + 0x58c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x58c),uVar8);
        }
        if (*(void **)((int)this + 0x598) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x598),uVar8);
        }
        goto LAB_00419a86;
      }
    }
    iVar6 = FUN_00420560((int)this);
    if (iVar6 != 0) {
      FUN_00419520(this,param_2);
      if (-1 < *(int *)((int)this + 0x538)) {
        FUN_00427950(&DAT_005aeefc,(int *)((int)this + 0x538));
      }
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 0x80;
      return 0;
    }
  }
  else {
    if ((iVar4 != 0) && (iVar2 == -1)) {
      iVar2 = iVar6;
      iVar4 = param_3;
      puVar1 = FUN_004c6fc0();
      iVar2 = FUN_004ab8f0(puVar1,iVar2,iVar4);
      if (iVar2 != 0) {
        iVar7 = param_3;
        puVar1 = FUN_004c6fc0();
        iVar6 = FUN_004a8b50(puVar1,iVar6,iVar7);
        FUN_00427880(&DAT_005aeefc,(int *)((int)this + 0x538),1);
        FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538),(byte)iVar6);
        FUN_004f5b70(this,uVar9);
        *(uint *)((int)this + 0x44) = uVar9;
        FUN_004b0310((void *)((int)this + 0x55c),uVar9);
        if (*(void **)((int)this + 0x58c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x58c),uVar9);
        }
        if (*(void **)((int)this + 0x598) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x598),uVar9);
        }
        goto LAB_00419a86;
      }
    }
    iVar6 = param_3;
    if ((iVar5 != 0) && (iVar3 == -1)) {
      iVar2 = iVar7;
      iVar3 = param_3;
      puVar1 = FUN_004c6fc0();
      iVar2 = FUN_004ab8f0(puVar1,iVar2,iVar3);
      if (iVar2 != 0) {
        puVar1 = FUN_004c6fc0();
        iVar6 = FUN_004a8b50(puVar1,iVar7,iVar6);
        FUN_00427880(&DAT_005aeefc,(int *)((int)this + 0x538),1);
        FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538),(byte)iVar6);
        FUN_004f5b70(this,uVar8);
        *(uint *)((int)this + 0x44) = uVar8;
        FUN_004b0310((void *)((int)this + 0x55c),uVar8);
        if (*(void **)((int)this + 0x58c) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x58c),uVar8);
        }
        if (*(void **)((int)this + 0x598) != (void *)0x0) {
          FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
        }
        goto LAB_00419a86;
      }
    }
    uVar8 = param_2;
    iVar7 = FUN_00419590(this,*(int *)((int)this + 0x1c),param_2,iVar6,&param_3,(int *)&param_1);
    if (iVar7 != 0) {
      iVar7 = *(int *)((int)this + 0x1c);
      iVar2 = param_3;
      puVar1 = FUN_004c6fc0();
      iVar7 = FUN_004a8b50(puVar1,iVar7,iVar2);
      FUN_004f5b70(this,iVar7);
      *(int *)((int)this + 0x44) = iVar7;
      FUN_004b0310((void *)((int)this + 0x55c),iVar7);
      if (*(void **)((int)this + 0x58c) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x58c),iVar7);
      }
      if (*(void **)((int)this + 0x598) != (void *)0x0) {
        FUN_0049dcc0(*(void **)((int)this + 0x598),*(int *)((int)this + 0x44));
      }
      iVar7 = param_3;
      uVar8 = param_1;
      puVar1 = FUN_004c6fc0();
      iVar7 = FUN_004a8b50(puVar1,iVar7,uVar8);
      FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538),(byte)iVar7);
      uVar8 = param_1;
      puVar1 = FUN_004c6fc0();
      iVar6 = FUN_004a8b50(puVar1,uVar8,iVar6);
      FUN_00427900(&DAT_005aeefc,*(int *)((int)this + 0x538) + 1,(byte)iVar6);
LAB_00419a86:
      FUN_00421180(this);
      DAT_005aeef4 = 1;
      return 1;
    }
    iVar6 = FUN_00420560((int)this);
    if (iVar6 != 0) {
      FUN_00419520(this,uVar8);
      if (-1 < *(int *)((int)this + 0x538)) {
        FUN_00427950(&DAT_005aeefc,(int *)((int)this + 0x538));
      }
    }
  }
  return 0;
}
