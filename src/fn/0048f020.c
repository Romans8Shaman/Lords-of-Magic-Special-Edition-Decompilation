/* Rebuilt from lomse.exe FUN_0048f020 @ 0x0048f020 (518 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584ae8 (*(undefined *)0x00584ae8)
#define DAT_005a7a14 (*(undefined4 *)0x005a7a14)
#define DAT_005a7a38 (*(undefined4 *)0x005a7a38)
#define DAT_005a7aa4 (*(undefined4 *)0x005a7aa4)
#define DAT_005a7ac8 (*(int *)0x005a7ac8)
#define DAT_005a7acc (*(int *)0x005a7acc)
#define DAT_005a7b50 (*(undefined4 *)0x005a7b50)
#define DAT_005aa128 (*(int *)0x005aa128)
#define FUN_00476010 ((bool (__thiscall *)(void *, int, int, int, int))0x00476010)
#define FUN_0048ec90 ((undefined4 (__thiscall *)(void *, int *))0x0048ec90)
#define FUN_0048ee50 ((undefined4 (__thiscall *)(void *, int *, int))0x0048ee50)
#define FUN_00492760 ((int (__thiscall *)(void *, int))0x00492760)
#define FUN_00495db0 ((undefined4 (__thiscall *)(void *, int *, int, int))0x00495db0)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)
#define FUN_00496880 ((undefined4 (__thiscall *)(void *, int *, uint, int, byte, byte))0x00496880)
#define FUN_00500650 ((undefined4 (__thiscall *)(void *, int, int, int, int))0x00500650)

#define LOM_SELF_0048f020 1
void __thiscall rb_0048f020(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_10 (*(_t_local_10 *)(_fr + 0x0))
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar1 = *(int *)((int)this + 0x3c);
  iVar2 = *(int *)((int)this + 0x40);
  *(int *)((int)this + 0x3c) = iVar1 - DAT_005a7ac8;
  *(int *)((int)this + 0x40) = iVar2 - DAT_005a7acc;
  piVar3 = (int *)FUN_00492760(&DAT_005a7b50,*(int *)((int)this + 8));
  if (piVar3 == (int *)0x0) goto LAB_0048f1b8;
  if ((*(uint *)((int)this + 4) & 8) == 0) {
    iVar6 = *(int *)((int)this + 0x40);
    if ((*(uint *)((int)this + 4) & 2) == 0) {
      FUN_00495db0(param_1,piVar3,*(int *)((int)this + 0x3c),iVar6);
      if (DAT_005aa128 != 0) {
        piVar3 = (int *)FUN_0048ec90(this,&local_10);
        FUN_00476010(&DAT_005a7a38,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
      }
      goto LAB_0048f1b8;
    }
    uVar5 = *(uint *)((int)this + 0x3c);
    if (*piVar3 == 0) goto LAB_0048f1b8;
    iVar4 = (-(uint)((*(uint *)(*piVar3 + 0x14) & 0x10) != 0) & 2) - 1;
    if (-1 < iVar4) {
      FUN_00496880(param_1,piVar3,uVar5,iVar6,0,(byte)iVar4);
      goto LAB_0048f1b8;
    }
  }
  else {
    FUN_0048ec90(this,&local_10);
    FUN_00476010(&DAT_005a7aa4,local_10,local_c,local_8,local_4);
    FUN_00476010(&DAT_005a7a14,local_10,local_c,local_8,local_4);
    FUN_00500650(&DAT_00584ae8,local_10,local_c,local_8,local_4);
    iVar6 = *(int *)((int)this + 0x40);
    uVar5 = *(uint *)((int)this + 0x3c);
    if (*piVar3 == 0) goto LAB_0048f1b8;
    iVar4 = (-(uint)((*(uint *)(*piVar3 + 0x14) & 0x10) != 0) & 2) - 1;
    if (-1 < iVar4) {
      FUN_00496880(param_1,piVar3,uVar5,iVar6,0,(byte)iVar4);
      goto LAB_0048f1b8;
    }
  }
  FUN_00496340(param_1,piVar3,uVar5,iVar6,0);
LAB_0048f1b8:
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x50)) {
    iVar4 = 0;
    do {
      FUN_0048ee50((void *)(iVar4 + *(int *)((int)this + 0x4c)),param_1,0);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 0x2c;
    } while (iVar6 < *(int *)((int)this + 0x50));
  }
  *(int *)((int)this + 0x40) = iVar2;
  *(int *)((int)this + 0x3c) = iVar1;
  piVar3 = (int *)FUN_0048ec90(this,&local_10);
  FUN_00476010(&DAT_005a7aa4,*piVar3,piVar3[1],piVar3[2],piVar3[3]);
  return;
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
