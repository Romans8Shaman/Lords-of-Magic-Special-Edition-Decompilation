/* Rebuilt from lomse.exe FUN_004a30b0 @ 0x004a30b0 (683 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00584cbc (*(int *)0x00584cbc)
#define DAT_00585248 (*(int *)0x00585248)
#define DAT_0058525c (*(int *)0x0058525c)

#define LOM_SELF_004a30b0 1
void __thiscall rb_004a30b0(void *this, int volatile param_1, int volatile param_2, int volatile param_3, int volatile param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
  
  iVar2 = DAT_0058525c;
  local_1c = 1;
  local_10 = 1;
  uVar1 = *(undefined2 *)
           (DAT_00584cbc + (*(int *)((int)this + 0x34) * 0x100 + *(int *)((int)this + 0x28)) * 2);
  uVar5 = param_3 - param_1 >> 0x1f;
  iVar7 = (param_3 - param_1 ^ uVar5) - uVar5;
  uVar5 = param_4 - param_2 >> 0x1f;
  iVar3 = (param_4 - param_2 ^ uVar5) - uVar5;
  iVar9 = DAT_00585248 >> 1;
  if (param_3 < param_1) {
    local_10 = -1;
  }
  if (param_4 < param_2) {
    local_1c = -1;
  }
  if (iVar3 < iVar7) {
    param_3 = iVar3 * 2 - iVar7;
    if (0 < iVar7 + 1) {
      iVar4 = iVar9 * param_2;
      local_8 = iVar7 + 1;
      local_c = iVar4;
      do {
        if (param_3 < 0) {
          iVar8 = iVar3;
        }
        else {
          iVar8 = iVar3 - iVar7;
          param_2 = param_2 + local_1c;
          iVar4 = iVar4 + iVar9 * local_1c;
          local_c = iVar4;
        }
        param_3 = param_3 + iVar8 * 2;
        param_1 = param_1 + local_10;
        if (((0 < param_1) && (param_1 < -*(int *)((int)this + 0x30) + 0x27f)) &&
           ((0 < param_2 && (param_2 < -*(int *)((int)this + 0x30) + 0x17f)))) {
          *(undefined2 *)(iVar2 + (param_1 + iVar4) * 2) = uVar1;
          iVar8 = 1;
          if (1 < *(int *)((int)this + 0x30)) {
            puVar6 = (undefined2 *)(iVar2 + 2 + (param_1 + iVar4) * 2);
            puVar10 = (undefined2 *)(iVar2 + (iVar9 + param_1 + iVar4) * 2);
            do {
              *puVar6 = uVar1;
              *puVar10 = uVar1;
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + iVar9;
            } while (iVar8 < *(int *)((int)this + 0x30));
            iVar4 = local_c;
          }
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
      return;
    }
  }
  else {
    param_3 = iVar7 * 2 - iVar3;
    if (0 < iVar3 + 1) {
      iVar4 = iVar9 * param_2;
      local_8 = iVar3 + 1;
      do {
        iVar8 = iVar7;
        if (-1 < param_3) {
          param_1 = param_1 + local_10;
          iVar8 = iVar7 - iVar3;
        }
        param_3 = param_3 + iVar8 * 2;
        param_2 = param_2 + local_1c;
        iVar4 = iVar4 + iVar9 * local_1c;
        if ((((0 < param_1) && (param_1 < -*(int *)((int)this + 0x30) + 0x27f)) && (0 < param_2)) &&
           (param_2 < -*(int *)((int)this + 0x30) + 0x17f)) {
          iVar8 = 1;
          *(undefined2 *)(iVar2 + (param_1 + iVar4) * 2) = uVar1;
          if (1 < *(int *)((int)this + 0x30)) {
            puVar6 = (undefined2 *)(iVar2 + 2 + (param_1 + iVar4) * 2);
            puVar10 = (undefined2 *)(iVar2 + (iVar9 + param_1 + iVar4) * 2);
            do {
              *puVar6 = uVar1;
              *puVar10 = uVar1;
              iVar8 = iVar8 + 1;
              puVar6 = puVar6 + 1;
              puVar10 = puVar10 + iVar9;
            } while (iVar8 < *(int *)((int)this + 0x30));
          }
        }
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return;
#undef local_1c
#undef local_10
#undef local_c
#undef local_8
}
