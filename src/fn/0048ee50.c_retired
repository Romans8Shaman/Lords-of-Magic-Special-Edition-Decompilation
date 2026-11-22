/* Rebuilt from lomse.exe FUN_0048ee50 @ 0x0048ee50 (450 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583648 (*(int *)0x00583648)
#define DAT_0058364c (*(int *)0x0058364c)
#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define FUN_0048ee40 ((undefined4 (__fastcall *)(int))0x0048ee40)
#define FUN_0048f020 ((undefined4 (__thiscall *)(void *, int *))0x0048f020)
#define FUN_004918d0 ((int (__fastcall *)(void *))0x004918d0)
#define FUN_004918f0 ((int (__fastcall *)(void *))0x004918f0)
#define FUN_00491910 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00491910)
#define FUN_00491c20 ((int (__thiscall *)(void *, int))0x00491c20)
#define FUN_004935c0 ((undefined4 (__thiscall *)(void *, int *, uint, int, int, int))0x004935c0)
#define FUN_00494610 ((undefined4 (__fastcall *)(undefined4 *))0x00494610)
#define FUN_00495590 ((undefined4 (__fastcall *)(int *))0x00495590)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)
#define FUN_005005f0 ((int (__thiscall *)(void *, uint))0x005005f0)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)

#define LOM_SELF_0048ee50 1
void __thiscall rb_0048ee50(void *this,int *param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uchar _fr[0x58] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_50;
  typedef int _t_local_4c;
  typedef int _t_local_48;
  typedef int _t_local_44;
  typedef int _t_local_40[4];
  typedef int _t_local_30;
  typedef int _t_local_2c[8];
#define local_50 (*(_t_local_50 *)(_fr + 0x0))
#define local_4c (*(_t_local_4c *)(_fr + 0x4))
#define local_48 (*(_t_local_48 *)(_fr + 0x8))
#define local_44 (*(_t_local_44 *)(_fr + 0xc))
#define local_40 (*(_t_local_40 *)(_fr + 0x10))
#define local_30 (*(_t_local_30 *)(_fr + 0x20))
#define local_2c (*(_t_local_2c *)(_fr + 0x24))

  DAT_00583648 = DAT_00583648 + 0x20;
  uVar5 = *(int *)(*(int *)((int)this + 0x28) + 0x3c) + *(int *)this;
  iVar4 = *(int *)(*(int *)((int)this + 0x28) + 0x40) + *(int *)((int)this + 4);
  FUN_00494610(local_2c);
  pvVar1 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0xc));
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)FUN_005005f0(&DAT_00584ae8,*(uint *)((int)this + 0xc));
    if (pvVar1 != (void *)0x0) {
      FUN_0048f020(pvVar1,param_1);
    }
  }
  else {
    iVar2 = FUN_00491910(pvVar1,&local_50,uVar5,iVar4);
    if (iVar2 != 0) {
      if ((param_2 != 0) && ((*(byte *)(*(int *)((int)this + 0x28) + 4) & 8) == 0)) {
        piVar3 = (int *)FUN_0048ee40(*(int *)((int)this + 0x28));
        if (piVar3 != (int *)0x0) {
          DAT_0058364c = DAT_0058364c + 0x14;
          piVar6 = local_40;
          for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
            *piVar6 = *piVar3;
            piVar3 = piVar3 + 1;
            piVar6 = piVar6 + 1;
          }
          local_40[1] = local_40[1] + *(int *)this;
          local_40[2] = local_40[2] + *(int *)((int)this + 4);
          local_40[3] = FUN_004918d0(pvVar1);
          local_30 = FUN_004918f0(pvVar1);
          FUN_00495db0(param_1,local_40,uVar5,iVar4);
          DAT_0058364c = DAT_0058364c + -0x14;
        }
      }
      FUN_004935c0(pvVar1,param_1,uVar5,iVar4,-1,1);
      FUN_00500650(&DAT_00584ae8,local_50,local_4c,local_48,local_44);
    }
  }
  DAT_00583648 = DAT_00583648 + -0x20;
  FUN_00495590(local_2c);
  return;
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_30
#undef local_2c
}
