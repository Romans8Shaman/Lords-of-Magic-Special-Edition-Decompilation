/* Rebuilt from lomse.exe FUN_0044ee90 @ 0x0044ee90 (752 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005af194 (*(undefined *)0x005af194)
#define FUN_0043b990 ((undefined4 * (__thiscall *)(void *, undefined4, short, short, int, int, undefined4, undefined4, undefined4))0x0043b990)
#define FUN_0043ba50 ((undefined4 (__fastcall *)(undefined4 *))0x0043ba50)
#define FUN_0043c4e0 ((undefined4 (__thiscall *)(void *, int *))0x0043c4e0)
#define FUN_0043de80 ((undefined4 (__thiscall *)(void *, int))0x0043de80)
#define FUN_0043e680 ((undefined4 (__thiscall *)(void *, int *, undefined4))0x0043e680)
#define FUN_0043eff0 ((undefined4 (__thiscall *)(void *, void *, int, int, int, int))0x0043eff0)
#define FUN_0044ede0 ((undefined4 (__thiscall *)(void *, undefined4 *, int, int, int))0x0044ede0)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004869d0 ((undefined4 (__thiscall *)(void *, undefined4))0x004869d0)
#define FUN_004a51c0 ((int (__thiscall *)(void *, int, int))0x004a51c0)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define OutputDebugStringA (*(__typeof__(void (__stdcall *)(LPCSTR)) *)0x0054d0f8) /* KERNEL32.DLL!OutputDebugStringA via IAT */
#define s_Can_t_add_LIBRARY_without_WIZARD_00557364 (*(char (*)[])0x00557364)
#define s_City__SetBuildingLevel___invalid_0055733c (*(char (*)[])0x0055733c)

#define LOM_SELF_0044ee90 1
undefined4 __thiscall rb_0044ee90(void *this,void *param_1,int param_2,int param_3)

{
  int iVar1;
  void *this_00;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  uchar _fr[0x100] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_f8;
  typedef int _t_local_f4;
  typedef int _t_local_f0;
  typedef undefined4 _t_local_ec[7];
  typedef undefined4 _t_local_d0;
  typedef undefined4 _t_local_c4;
  typedef undefined4 _t_local_a8;
  typedef undefined4 _t_local_a0[5];
  typedef undefined4 _t_local_8c;
  typedef int _t_local_58;
  typedef int _t_local_54;
  typedef undefined4 _t_local_50[17];
#define local_f8 (*(_t_local_f8 *)(_fr + 0x0))
#define local_f4 (*(_t_local_f4 *)(_fr + 0x4))
#define local_f0 (*(_t_local_f0 *)(_fr + 0x8))
#define local_ec (*(_t_local_ec *)(_fr + 0xc))
#define local_d0 (*(_t_local_d0 *)(_fr + 0x28))
#define local_c4 (*(_t_local_c4 *)(_fr + 0x34))
#define local_a8 (*(_t_local_a8 *)(_fr + 0x50))
#define local_a0 (*(_t_local_a0 *)(_fr + 0x58))
#define local_8c (*(_t_local_8c *)(_fr + 0x6c))
#define local_58 (*(_t_local_58 *)(_fr + 0xa0))
#define local_54 (*(_t_local_54 *)(_fr + 0xa4))
#define local_50 (*(_t_local_50 *)(_fr + 0xa8))

  local_f8 = 0;
  if (((int)param_1 < 0) || (0x14 < (int)param_1)) {
    OutputDebugStringA(s_City__SetBuildingLevel___invalid_0055733c);
    return 0;
  }
  if (8 < (int)param_1) {
    uVar2 = *(undefined4 *)((int)this + 0x28);
    FUN_0043b990(local_ec,*(undefined4 *)((int)this + 0x68),(short)*(undefined4 *)((int)this + 0x74)
                 ,(short)*(undefined4 *)((int)this + 0x80),(int)param_1,param_2,uVar2,uVar2,uVar2);
    local_c4 = *(undefined4 *)((int)this + 0x28);
    local_a8 = 0;
    if (param_1 == (void *)0xe) {
      iVar1 = FUN_0043de80(local_ec,9);
      if (iVar1 < 0) {
        OutputDebugStringA(s_Can_t_add_LIBRARY_without_WIZARD_00557364);
        FUN_0043ba50(local_ec);
        return 0;
      }
      this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      param_1 = (void *)0xe;
    }
    else {
      iVar1 = FUN_0043de80(local_ec,(int)param_1);
      if (iVar1 < 0) {
        local_d0 = *(undefined4 *)((int)this + 0x1c);
        local_8c = local_d0;
        FUN_0043e680(local_ec,&local_f4,param_1);
        local_54 = local_f0;
        local_58 = local_f4;
        puVar4 = local_a0;
        puVar6 = local_50;
        for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        FUN_0043c4e0(&DAT_005aa12c,&local_58);
        iVar1 = FUN_004a51c0(&DAT_005ae958,local_58,local_54);
        iVar1 = FUN_004a8300(&DAT_005ae958,iVar1,2);
        this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      }
      else {
        this_00 = (void *)FUN_00482ac0(&DAT_005aa12c,iVar1,2);
      }
    }
    uVar2 = FUN_0043eff0(this_00,param_1,param_2,param_3,-1,0);
    FUN_0043ba50(local_ec);
    return uVar2;
  }
  if (-1 < param_3) {
    if ((param_3 < 0) || (0xf < param_3)) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_005af194 + param_3 * 0x1d84;
    }
    iVar1 = FUN_0044ede0(this,&local_f8,(int)param_1,param_2,param_3);
    if (iVar1 == 0) {
      return 0;
    }
    *(int *)((int)this + 0xe0) = *(int *)((int)this + 0xe0) - (*(int *)(local_f8 + 0xc) >> 8);
    *(int *)(puVar5 + 0xcfc) = *(int *)(puVar5 + 0xcfc) - *(int *)(local_f8 + 0x10);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
    *(int *)(puVar5 + 0xd04) = *(int *)(puVar5 + 0xd04) - *(int *)(local_f8 + 0x14);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
    *(int *)(puVar5 + 0xd08) = *(int *)(puVar5 + 0xd08) - *(int *)(local_f8 + 0x18);
    *(uint *)(puVar5 + 0x15d8) = *(uint *)(puVar5 + 0x15d8) | 0x40;
  }
  *(int *)((int)this + (int)param_1 * 0x44 + 0xd4) = param_2;
  if (param_1 == (void *)0x0) {
    piVar3 = (int *)((int)this + 0xd4);
    iVar1 = 9;
    do {
      *piVar3 = param_2;
      piVar3 = piVar3 + 0x11;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    ((undefined4 (__thiscall *)(__typeof__(this)))(**(code **)(*(int *)this + 0x2c)))(this);
  }
  FUN_004869d0(&DAT_005aa12c,param_3);
  return 1;
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_d0
#undef local_c4
#undef local_a8
#undef local_a0
#undef local_8c
#undef local_58
#undef local_54
#undef local_50
}
