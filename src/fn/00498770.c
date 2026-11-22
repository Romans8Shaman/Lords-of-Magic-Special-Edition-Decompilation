/* Rebuilt from lomse.exe FUN_00498770 @ 0x00498770 (186 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004d05e0 ((undefined4 (__thiscall *)(void *, uint, int *))0x004d05e0)
#define FUN_004d4550 ((undefined4 (__fastcall *)(void *))0x004d4550)

#define LOM_SELF_00498770 1
int __thiscall rb_00498770(void *this,int param_1,uint param_2,int *param_3,void *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  local_4 = 0;
  if ((param_1 < 0) || (9 < param_1)) {
    return 0;
  }
  piVar1 = *(int **)(param_1 * 0x10 + 0x5e4 + (int)this);
  if (piVar1 != (int *)0x0) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      uVar2 = *(undefined4 *)(*piVar1 + 0x28);
      if (*(int *)((int)param_4 + 0x54) == 0) {
        *(undefined4 *)((int)param_4 + 0x90) = 3;
        FUN_004d4550(param_4);
        *(undefined4 *)((int)param_4 + 0x90) = 0;
        *(undefined4 *)((int)param_4 + 0xa4) = 0;
      }
      else {
        iVar3 = *(int *)((int)param_4 + 0x50);
        iVar4 = *(int *)((int)param_4 + 0x54) + -1;
        *(int *)((int)param_4 + 0x54) = iVar4;
        *(undefined4 *)(iVar3 + iVar4 * 8) = 1;
        *(undefined4 *)(iVar3 + 4 + iVar4 * 8) = uVar2;
      }
      FUN_004d05e0(param_4,param_2,param_3);
      iVar3 = *(int *)((int)param_4 + 0x6c);
      *(undefined4 *)((int)param_4 + 0x6c) = *(undefined4 *)((int)param_4 + 0x70);
      if (iVar3 != 0) {
        return local_4;
      }
      local_4 = local_4 + 1;
    }
  }
  return local_4;
#undef local_4
}
