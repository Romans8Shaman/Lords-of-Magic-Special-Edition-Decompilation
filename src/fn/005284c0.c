/* Rebuilt from lomse.exe FUN_005284c0 @ 0x005284c0 (342 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00528490 ((int (__fastcall *)(int))0x00528490)
#define FUN_005291e0 ((uint (__fastcall *)(int))0x005291e0)

#define LOM_SELF_005284c0 1
void __thiscall
rb_005284c0(void *this,int *param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef uint _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef undefined4 _t_local_8;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
#define local_8 (*(_t_local_8 *)(_fr + 0x10))
  
  piVar2 = param_1;
  iVar6 = -1;
  iVar5 = 0;
  *param_1 = -1;
  *param_2 = 0;
  iVar1 = *(int *)((int)this + 0x18);
  local_14 = 0;
  local_c = -1;
  local_8 = 0;
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (-1 < *(int *)(iVar1 + 0x14)) {
      iVar3 = FUN_00528490(iVar1);
      uVar4 = *(uint *)(iVar1 + 0x10);
      if ((uVar4 & 0x2000000) == 0) {
        if ((iVar6 < 0) || (iVar5 < iVar3)) {
          iVar6 = *(int *)(iVar1 + 0x14);
          *param_1 = iVar6;
          *param_2 = *(undefined4 *)(iVar1 + 0x18);
          iVar5 = iVar3;
          local_14 = uVar4;
        }
      }
      else {
        local_c = *(int *)(iVar1 + 0x14);
        local_8 = *(undefined4 *)(iVar1 + 0x18);
      }
    }
  }
  uVar4 = FUN_005291e0((int)this);
  if ((uVar4 != 0) && (local_10 = 0, 0 < *(int *)(uVar4 + 0x44))) {
    param_1 = (int *)(uVar4 + 0x2c);
    do {
      for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
        if ((-1 < *(int *)(iVar1 + 0x14)) &&
           ((iVar3 = FUN_00528490(iVar1), iVar6 < 0 || (iVar5 < iVar3)))) {
          iVar6 = *(int *)(iVar1 + 0x14);
          local_14 = *(uint *)(iVar1 + 0x10);
          *piVar2 = iVar6;
          *param_2 = *(undefined4 *)(iVar1 + 0x18);
          iVar5 = iVar3;
        }
      }
      local_10 = local_10 + 1;
      param_1 = param_1 + 1;
    } while (local_10 < *(int *)(uVar4 + 0x44));
  }
  if ((local_14 & 0x1000000) == 0) {
    *param_3 = -1;
    *param_4 = 0;
    return;
  }
  *param_3 = *piVar2;
  *param_4 = *param_2;
  *piVar2 = local_c;
  *param_2 = local_8;
  return;
#undef local_14
#undef local_10
#undef local_c
#undef local_8
}
