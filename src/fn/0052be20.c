/* Rebuilt from lomse.exe FUN_0052be20 @ 0x0052be20 (289 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define FUN_00431160 ((uint (__fastcall *)(int, undefined4, undefined4))0x00431160)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)

#define LOM_SELF_0052be20 1
uint __fastcall rb_0052be20(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unused_reg_1;
  int *piVar7;
  uchar _fr[0xfa8] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_fa0[1000];
#define local_fa0 (*(_t_local_fa0 *)(_fr + 0x0))
  
  iVar1 = DAT_005cd2f0;
  if (0 < DAT_005cd2f0) {
    piVar7 = local_fa0;
    for (iVar4 = DAT_005cd2f0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar7 = -1;
      piVar7 = piVar7 + 1;
    }
  }
  iVar4 = 0;
  piVar6 = (int *)(param_1 + 0x18);
  piVar7 = piVar6;
  do {
    uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar7,0);
    if ((uVar2 != 0) && (*(int *)(uVar2 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)))
    {
      uVar3 = FUN_00431160(uVar2,unused_reg_1,0);
      if (uVar3 != 0) {
        return uVar2;
      }
      iVar5 = *(int *)(uVar2 + 0xc4 + *(int *)(uVar2 + 0x50) * 0x4c);
      local_fa0[iVar5] = local_fa0[iVar5] + 1;
    }
    iVar4 = iVar4 + 1;
    piVar7 = piVar7 + 3;
  } while (iVar4 < 0x1e);
  iVar5 = 1;
  uVar2 = 0;
  iVar1 = iVar1 + -1;
  iVar4 = 0;
  if (1 < iVar1) {
    piVar7 = local_fa0;
    do {
      piVar7 = piVar7 + 1;
      if (local_fa0[0] < *piVar7) {
        iVar4 = iVar5;
        local_fa0[0] = *piVar7;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00482ac0(&DAT_005aa12c,*piVar6,0);
      if (((uVar2 != 0) &&
          (*(int *)(uVar2 + 0x48) == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400))) &&
         (*(int *)(uVar2 + 0xc4 + *(int *)(uVar2 + 0x50) * 0x4c) == iVar4)) {
        return uVar2;
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 3;
    } while (iVar5 < iVar1);
  }
  return uVar2;
#undef local_fa0
}
