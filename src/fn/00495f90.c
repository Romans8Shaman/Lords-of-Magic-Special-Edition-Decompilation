/* Rebuilt from lomse.exe FUN_00495f90 @ 0x00495f90 (341 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0058364c (*(int *)0x0058364c)
#define FUN_00496340 ((undefined4 (__thiscall *)(void *, int *, int, int, byte))0x00496340)

#define LOM_SELF_00495f90 1
void __thiscall
rb_00495f90(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_20[3];
  typedef int * _t_local_14;
  typedef undefined4 _t_local_10;
#define local_20 (*(_t_local_20 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))

  piVar5 = param_1;
  DAT_0058364c = DAT_0058364c + 0x14;
  local_20[0] = 0;
  local_10 = 0;
  local_14 = (int *)0x0;
  local_20[2] = 0;
  local_20[1] = 0;
  iVar2 = param_1[3];
  iVar1 = param_4 / iVar2;
  if (param_5 == 0) {
    param_1 = (int *)(param_4 % iVar2);
  }
  else {
    iVar1 = param_5 % iVar2;
    if (iVar1 < 0) {
      iVar1 = iVar1 + iVar2;
    }
    iVar2 = iVar2 - iVar1;
    piVar4 = param_1;
    piVar6 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    local_20[1] = local_20[1] + iVar1;
    local_14 = (int *)iVar2;
    FUN_00496340(this,local_20,param_2,param_3,0);
    param_2 = param_2 + iVar2;
    iVar1 = (param_4 - iVar2) / param_1[3];
    param_1 = (int *)((param_4 - iVar2) % param_1[3]);
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_00496340(this,piVar5,iVar2 * piVar5[3] + param_2,param_3,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (param_1 != (int *)0x0) {
    iVar2 = piVar5[3];
    piVar4 = local_20;
    for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar4 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
    }
    local_14 = param_1;
    FUN_00496340(this,local_20,iVar1 * iVar2 + param_2,param_3,0);
  }
  DAT_0058364c = DAT_0058364c + -0x14;
  return;
#undef local_20
#undef local_14
#undef local_10
}
