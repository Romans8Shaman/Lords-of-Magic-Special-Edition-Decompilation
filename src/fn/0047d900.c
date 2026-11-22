/* Rebuilt from lomse.exe FUN_0047d900 @ 0x0047d900 (1467 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0055b0d0 (*(undefined *)0x0055b0d0)
#define DAT_0055b0f0 (*(undefined *)0x0055b0f0)
#define DAT_00583560 (*(uint *)0x00583560)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005aa7d0 (*(uint *)0x005aa7d0)
#define DAT_005aa7d4 (*(int *)0x005aa7d4)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define DAT_005ae9c4 (*(int *)0x005ae9c4)
#define DAT_005aee6c (*(undefined4 *)0x005aee6c)
#define DAT_005aeef4 (*(undefined4 *)0x005aeef4)
#define DAT_005af134 (*(int *)0x005af134)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_00420910 ((undefined4 (__thiscall *)(void *, int, uint))0x00420910)
#define FUN_004209c0 ((undefined4 (__fastcall *)(int))0x004209c0)
#define FUN_004209e0 ((int (__thiscall *)(void *, int))0x004209e0)
#define FUN_0042dbb0 ((undefined4 (__fastcall *)(int, undefined4, undefined4))0x0042dbb0)
#define FUN_0047d630 ((undefined4 (__thiscall *)(void *, uint))0x0047d630)
#define FUN_0047d680 ((undefined4 (__stdcall *)(int))0x0047d680)
#define FUN_0047d8a0 ((undefined4 (__thiscall *)(void *, char))0x0047d8a0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_00483be0 ((undefined4 (__thiscall *)(void *, int *))0x00483be0)
#define FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d9a0)
#define FUN_0049dcc0 ((undefined4 (__thiscall *)(void *, int))0x0049dcc0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a6600 ((undefined4 (__thiscall *)(void *, float *, int, int))0x004a6600)
#define FUN_004a6dd0 ((uint (__thiscall *)(void *, int *, int, int))0x004a6dd0)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_004b02c0 ((undefined4 (__thiscall *)(void *, uint))0x004b02c0)
#define FUN_004b0310 ((undefined4 (__thiscall *)(void *, int))0x004b0310)
#define FUN_004b0960 ((undefined4 (__fastcall *)(undefined4 *, undefined4, undefined4))0x004b0960)
#define FUN_004c6fc0 ((undefined * (__stdcall *)(void))0x004c6fc0)
#define FUN_004efe80 ((int (__thiscall *)(void *, int))0x004efe80)
#define FUN_004f1710 ((undefined4 (__thiscall *)(void *, undefined4, undefined4))0x004f1710)
#define FUN_004f5b30 ((undefined4 (__thiscall *)(void *, uint))0x004f5b30)
#define FUN_004f5b70 ((undefined4 (__thiscall *)(void *, int))0x004f5b70)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */
#define thunk_FUN_0049d9a0 ((undefined4 (__fastcall *)(void *))0x0049d880)

#define LOM_SELF_0047d900 1
undefined4 __thiscall rb_0047d900(void *this,uint param_1)

{
  undefined4 *this_00;
  void *this_01;
  int iVar1;
  int iVar2;
  undefined *puVar3;
  void *this_02;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  uchar _fr[0x68] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_iStack_60;
  typedef int _t_iStack_5c;
  typedef float _t_fStack_58;
  typedef float _t_fStack_54;
  typedef float _t_fStack_50;
  typedef float _t_fStack_2c;
  typedef float _t_fStack_28;
  typedef float _t_fStack_24;
#define iStack_60 (*(_t_iStack_60 *)(_fr + 0x0))
#define iStack_5c (*(_t_iStack_5c *)(_fr + 0x4))
#define fStack_58 (*(_t_fStack_58 *)(_fr + 0x8))
#define fStack_54 (*(_t_fStack_54 *)(_fr + 0xc))
#define fStack_50 (*(_t_fStack_50 *)(_fr + 0x10))
#define fStack_2c (*(_t_fStack_2c *)(_fr + 0x34))
#define fStack_28 (*(_t_fStack_28 *)(_fr + 0x38))
#define fStack_24 (*(_t_fStack_24 *)(_fr + 0x3c))
  
  *(byte *)((int)this + 0x34) = *(byte *)((int)this + 0x34) | 2;
  this_01 = (void *)FUN_00482ac0(&DAT_005aa12c,*(int *)((int)this + 0x44),0);
  if (this_01 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_00420620((int)this_01);
  if (iVar1 != 0) {
    FUN_004f5b30(this,*(uint *)((int)this_01 + 0x544));
  }
  iVar1 = *(int *)((int)this + 0x4c);
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x78) < *(int *)((int)this + 0x7c)) {
    iVar2 = FUN_004209e0(this_01,*(int *)((int)this_01 + 0x1c));
    if ((*(byte *)((int)this + 0x30) & 0x20) != 0) {
      if (*(int *)((int)this + 0x5c) != 0) {
        iVar2 = (iVar2 * 100) / *(int *)((int)this + 0x5c);
      }
      if (iVar2 < 0) {
        iVar2 = 0;
      }
    }
    uVar4 = (uint)((*(int *)((int)this + 0x28) + DAT_005af134) % (iVar2 + 1) == 0);
    *(uint *)((int)this + 0x78) = *(int *)((int)this + 0x78) + uVar4;
    if (((*(uint *)(iVar1 + 0x14) & 0x100000) != 0) || (uVar4 != 0)) {
      if (*(void **)((int)this + 0x2c) != (void *)0x0) {
        FUN_0049d9a0(*(void **)((int)this + 0x2c));
        uVar4 = 0;
      }
      FUN_004b0960((undefined4 *)((int)this + 0x88),uVar4,param_1);
      uVar6 = 0;
      if (*(void **)((int)this + 0xb8) != (void *)0x0) {
        thunk_FUN_0049d9a0(*(void **)((int)this + 0xb8));
        uVar6 = 0;
      }
      FUN_0042dbb0((int)this + 0x94,uVar6,param_1);
    }
    if (*(int *)((int)this + 0x78) != *(int *)((int)this + 0x7c)) {
      ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x1c)))((void *)(this));
      return 1;
    }
  }
  uVar4 = *(uint *)((int)this + 0x30);
  if ((uVar4 & 2) == 0) {
    iVar1 = *(int *)((int)this_01 + 0x1c) % DAT_005ae9c4 + *(int *)((int)this + 100);
    iVar2 = *(int *)((int)this_01 + 0x1c) / DAT_005ae9c4 + *(int *)((int)this + 0x68);
  }
  else {
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 4) == 0) {
        uVar7 = *(int *)((int)this + 0x74) - 4;
      }
      else if ((DAT_00583560 & 0x400) == 0) {
        uVar7 = *(int *)((int)this + 0x74) + 3;
      }
      else {
        uVar7 = *(int *)((int)this + 0x74) - 3;
      }
      uVar7 = uVar7 & 7;
    }
    else {
      uVar7 = DAT_005aa7d0;
      if (*(int *)((int)this_01 + 0x48) != DAT_005aa7d4) {
        uVar7 = DAT_005aa7d0 - 4 & 7;
      }
      *(uint *)((int)this + 0x30) = uVar4 & 0xfffffff7;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    puVar3 = FUN_004c6fc0();
    iVar2 = *(int *)((int)this + 0x1c);
    iVar1 = iVar1 % *(int *)(puVar3 + 0x6c) + *(int *)(&DAT_0055b0d0 + uVar7 * 4) * 2;
    puVar3 = FUN_004c6fc0();
    iVar2 = iVar2 / *(int *)(puVar3 + 0x6c) + *(int *)(&DAT_0055b0f0 + uVar7 * 4) * 2;
    if (((iVar1 < 0) || (puVar3 = FUN_004c6fc0(), *(int *)(puVar3 + 0x6c) <= iVar1)) ||
       ((iVar2 < 0 || (puVar3 = FUN_004c6fc0(), *(int *)(puVar3 + 0x70) <= iVar2))))
    goto LAB_0047dd44;
  }
  iVar1 = FUN_004a51c0(&DAT_005ae958,iVar1,iVar2);
  if (iVar1 == *(int *)((int)this + 0x1c)) {
    uVar6 = 0;
    if ((*(uint *)((int)this + 0x30) & 0x20) != 0) {
      if (((*(uint *)((int)this + 0x30) & 0x100) == 0) ||
         (*(int *)((int)this + 0x74) == *(int *)((int)this_01 + 0x44))) {
        this_02 = (void *)FUN_004efe80(&DAT_005aee6c,*(int *)((int)this + 0x58));
        if (this_02 != (void *)0x0) {
          FUN_004f1710(this_02,this,*(undefined4 *)((int)this_01 + 0x28));
        }
LAB_0047dd44:
        FUN_00483be0(&DAT_005aa12c,this);
        return 1;
      }
      FUN_0047d8a0(this,(char)*(int *)((int)this_01 + 0x44));
      uVar6 = 0;
    }
    if (*(void **)((int)this + 0x2c) != (void *)0x0) {
      FUN_0049d9a0(*(void **)((int)this + 0x2c));
      uVar6 = 0;
    }
    this_00 = (undefined4 *)((int)this + 0x88);
    FUN_004b0960(this_00,uVar6,param_1);
    uVar6 = 0;
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      thunk_FUN_0049d9a0(*(void **)((int)this + 0xb8));
      uVar6 = 0;
    }
    FUN_0042dbb0((int)this + 0x94,uVar6,param_1);
    if (*(int *)((int)this + 0x7c) == 0) {
      if (*(int *)((int)this + 0x2c) == 0) {
        return 0;
      }
      if (*(int *)(*(int *)((int)this + 0x2c) + 4) == 2) {
        return 0;
      }
      iVar1 = FUN_00420620((int)this_01);
      if (iVar1 != 0) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0x1c);
    FUN_004f5b30(this,2);
    uVar4 = FUN_0047d680(2);
    FUN_004b02c0(this_00,uVar4);
    FUN_0047d630(this,2);
    FUN_004f5b70(this,*(int *)((int)this_01 + 0x44));
    iVar1 = *(int *)((int)this_01 + 0x44);
    *(int *)((int)this + 0x74) = iVar1;
    FUN_004b0310(this_00,iVar1);
    if (*(void **)((int)this + 0xb8) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)((int)this + 0x74));
    }
    if (*(void **)((int)this + 0xc0) != (void *)0x0) {
      FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)((int)this + 0x74));
    }
    *(undefined4 *)((int)this + 0x7c) = 0;
    ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x1c)))((void *)(this));
    return 1;
  }
  uVar4 = 0;
  iStack_60 = 9999;
  iStack_5c = -1;
  param_1 = 0;
  do {
    iVar2 = *(int *)(DAT_005ae970 + (uVar4 + *(int *)((int)this + 0x1c) * 8) * 4);
    if (iVar2 == iVar1) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004a8960(&DAT_005ae958,iVar2,iVar1);
    }
    if (iVar5 < iStack_60) {
      param_1 = uVar4;
      iStack_60 = iVar5;
      iStack_5c = iVar2;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 8);
  if ((*(byte *)((int)this + 0x30) & 2) != 0) {
    iVar1 = FUN_00420910(this_01,*(int *)((int)this + 0x1c),param_1);
    if (iVar1 == 0) {
      *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 4;
      *(uint *)((int)this + 0x74) = param_1;
      FUN_004f5b30(this,2);
      uVar4 = FUN_0047d680(2);
      FUN_004b02c0((void *)((int)this + 0x88),uVar4);
      FUN_0047d630(this,2);
      iVar1 = *(int *)((int)this + 0x84) + 1;
      *(int *)((int)this + 0x84) = iVar1;
      if (iVar1 < 0xb) {
        return 1;
      }
      goto LAB_0047dd44;
    }
    *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) & 0xfffffffb;
  }
  *(int *)((int)this + 0x80) = iStack_5c;
  *(uint *)((int)this + 0x74) = param_1;
  DAT_005aeef4 = 1;
  FUN_004a6dd0(&DAT_005ae958,this,*(int *)((int)this + 0x1c),*(int *)((int)this + 0x80));
  *(undefined4 *)((int)this + 0x78) = 0;
  iVar5 = *(int *)((int)this + 0x1c) % DAT_005ae9c4;
  iVar1 = *(int *)((int)this + 0x1c) / DAT_005ae9c4;
  iVar2 = *(int *)((int)this + 0x74) * 4;
  FUN_004a6600(&DAT_005ae958,&fStack_58,*(int *)(&DAT_0055b0d0 + iVar2) + iVar5,
               *(int *)(&DAT_0055b0f0 + iVar2) + iVar1);
  FUN_004a6600(&DAT_005ae958,&fStack_2c,iVar5,iVar1);
  FUN_004f5b30(this,0);
  uVar4 = FUN_0047d680(0);
  FUN_004b02c0((void *)((int)this + 0x88),uVar4);
  FUN_0047d630(this,0);
  FUN_004f5b70(this,*(int *)((int)this + 0x74));
  FUN_004b0310((void *)((int)this + 0x88),*(int *)((int)this + 0x74));
  if (*(void **)((int)this + 0xb8) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xb8),*(int *)((int)this + 0x74));
  }
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
    FUN_0049dcc0(*(void **)((int)this + 0xc0),*(int *)((int)this + 0x74));
  }
  iVar1 = FUN_004209c0((int)this_01);
  lVar8 = __ftol((float10)iVar1 *
                 (float10)SQRT((fStack_50 - fStack_24) * (fStack_50 - fStack_24) +
                               (fStack_54 - fStack_28) * (fStack_54 - fStack_28) +
                               (fStack_58 - fStack_2c) * (fStack_58 - fStack_2c)));
  *(int *)((int)this + 0x7c) = (int)lVar8;
  if ((int)lVar8 < 1) {
    *(undefined4 *)((int)this + 0x7c) = 1;
  }
  ((undefined4 (__thiscall *)(__typeof__((void *)(this))))(**(code **)(*(int *)this + 0x1c)))((void *)(this));
  return 1;
#undef iStack_60
#undef iStack_5c
#undef fStack_58
#undef fStack_54
#undef fStack_50
#undef fStack_2c
#undef fStack_28
#undef fStack_24
}
