/* Rebuilt from lomse.exe FUN_0046cd20 @ 0x0046cd20 (591 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583118 (*(int *)0x00583118)
#define DAT_0058311c (*(int *)0x0058311c)
#define DAT_00583120 (*(undefined4 *)0x00583120)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005a9e04 (*(undefined4 *)0x005a9e04)
#define FUN_0046d3c0 ((undefined4 (__thiscall *)(void *, int, undefined4, undefined4))0x0046d3c0)
#define FUN_00472700 ((undefined4 (__thiscall *)(void *, undefined4, undefined4, undefined4))0x00472700)
#define FUN_004918d0 ((int (__fastcall *)(void *))0x004918d0)
#define FUN_004918f0 ((int (__fastcall *)(void *))0x004918f0)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_00492de0 ((int (__thiscall *)(void *, int))0x00492de0)
#define FUN_00493a00 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00493a00)
#define GetTickCount (*(__typeof__(DWORD (__stdcall *)(void)) *)0x0054d0e8) /* KERNEL32.DLL!GetTickCount via IAT */
#define _DAT_00583124 (*(undefined4 *)0x00583124)

#define LOM_SELF_0046cd20 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall rb_0046cd20(void *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x30] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_24;
  typedef int _t_local_20;
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_24 (*(_t_local_24 *)(_fr + 0x4))
#define local_20 (*(_t_local_20 *)(_fr + 0x8))
#define local_1c (*(_t_local_1c *)(_fr + 0xc))
#define local_18 (*(_t_local_18 *)(_fr + 0x10))
#define local_14 (*(_t_local_14 *)(_fr + 0x14))
#define local_10 (*(_t_local_10 *)(_fr + 0x18))
#define local_c (*(_t_local_c *)(_fr + 0x1c))
#define local_8 (*(_t_local_8 *)(_fr + 0x20))
#define local_4 (*(_t_local_4 *)(_fr + 0x24))
  
  if (((-1 < param_1) && (param_1 < *(int *)((int)this + 0xc))) &&
     (iVar3 = *(int *)((int)this + 4), iVar3 != 0)) {
    iVar6 = param_1 * 0x30;
    if ((0 < *(int *)(iVar6 + 0x28 + iVar3)) &&
       (uVar1 = *(uint *)(iVar6 + 0x14 + iVar3), (uVar1 & 1) == 0)) {
      if ((uVar1 & 0x20) != 0) {
        DAT_00583120 = 1;
        *(int *)((int)this + 0x38) = param_1;
        FUN_0046d3c0(this,iVar6 + 0x1c + *(int *)((int)this + 4),param_1,param_1);
        *(undefined4 *)((int)this + 0x48) = 1;
        return 1;
      }
      piVar2 = (int *)(iVar6 + 0x1c + iVar3);
      *(int *)((int)this + 0x38) = param_1;
      *(int *)((int)this + 0x28) = *piVar2;
      *(int *)((int)this + 0x2c) = piVar2[1];
      *(int *)((int)this + 0x30) = piVar2[2];
      *(int *)((int)this + 0x34) = piVar2[3];
      _DAT_00583124 = GetTickCount();
      DAT_0058311c = param_3;
      DAT_00583118 = param_2;
      DAT_00583120 = 0;
      iVar3 = iVar6 + *(int *)((int)this + 4);
      if ((*(byte *)(iVar6 + 0x14 + *(int *)((int)this + 4)) & 4) == 0) {
        param_1 = 1;
        *(undefined4 *)((int)this + 0x34) = 1;
      }
      else {
        param_1 = *(int *)((int)this + 0x34);
      }
      if ((*(byte *)(iVar3 + 0x14) & 2) != 0) {
        *(int *)(iVar3 + 0x28) = *(int *)(iVar3 + 0x28) - param_1;
        *(undefined4 *)((int)this + 0x48) = 1;
      }
      piVar2 = (int *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x28));
      if (piVar2 != (int *)0x0) {
        iVar3 = FUN_00492de0(&DAT_005a7b50,*(int *)((int)this + 8));
        if (((*(byte *)((int)this + 0x44) & 1) == 0) || (iVar3 == 0)) {
          local_24 = 0;
        }
        else {
          local_24 = *(int *)(iVar3 + 8);
        }
        piVar4 = (int *)(*(int *)((int)this + 4) + iVar6);
        FUN_00491910(piVar2,&local_20,*piVar4,piVar4[1]);
        local_8 = local_18;
        local_10 = local_20;
        local_c = local_1c;
        local_4 = local_14;
        if (*piVar2 == 0xf) {
          FUN_00493a00((void *)piVar2[1],&local_20,*(int *)(iVar6 + *(int *)((int)this + 4)),
                       *(int *)(iVar6 + 4 + *(int *)((int)this + 4)));
          iVar3 = (local_18 - local_20) + 1;
          iVar5 = (local_14 - local_1c) + 1;
        }
        else {
          iVar3 = FUN_004918d0(piVar2);
          iVar5 = FUN_004918f0(piVar2);
        }
        piVar2 = (int *)(iVar6 + *(int *)((int)this + 4));
        FUN_00472700(&DAT_005a9e04,this,
                     ((((*(int *)((int)this + 0x3c) - (iVar3 >> 1)) + (piVar2[2] >> 1)) - param_2) -
                     local_20) + local_10 + *piVar2,
                     ((((*(int *)((int)this + 0x40) - (local_24 + iVar5 >> 1)) + (piVar2[3] >> 1)) -
                      param_3) - local_1c) + local_c + piVar2[1]);
      }
      FUN_0046d3c0(this,(int)this + 0x28,*(undefined4 *)((int)this + 0x38),-param_1);
      return 1;
    }
  }
  return 0;
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
