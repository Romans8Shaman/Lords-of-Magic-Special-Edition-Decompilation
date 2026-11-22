/* Rebuilt from lomse.exe FUN_004a9220 @ 0x004a9220 (461 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005876d0 (*(undefined4 *)0x005876d0)
#define DAT_005a7d8c (*(int *)0x005a7d8c)
#define DAT_005a7d90 (*(undefined *)0x005a7d90)
#define FUN_00517a50 ((undefined4 (__thiscall *)(void *, int, int))0x00517a50)
#define _DAT_0054dae8 (*(double *)0x0054dae8)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_004a9220 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall rb_004a9220(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uchar _fr[0x38] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_1c;
#define local_2c (*(_t_local_2c *)(_fr + 0x4))
#define local_28 (*(_t_local_28 *)(_fr + 0x8))
#define local_24 (*(_t_local_24 *)(_fr + 0xc))
#define local_1c (*(_t_local_1c *)(_fr + 0x14))
  
  iVar1 = *(int *)((int)this + 0x6c);
  iVar8 = *(int *)((int)this + 0x50) + param_2;
  if (*(int *)((int)this + 4) != 0) {
    iVar6 = -iVar8;
    uVar3 = 1 << ((byte)param_4 & 0x1f) & 0xff;
    if (iVar8 * -2 == 0 || SBORROW4(iVar6,iVar8) != iVar8 * -2 < 0) {
      iVar4 = param_3;
      local_1c = iVar6;
      do {
        if (iVar6 <= iVar8) {
          iVar5 = param_1 % iVar1 + local_1c;
          local_24 = iVar6 + param_1 / iVar1;
          local_28 = iVar6;
          do {
            iVar9 = *(int *)((int)this + 0x5c);
            iVar7 = iVar9;
            if (iVar5 < 0) {
LAB_004a92ce:
              local_2c = iVar5 + iVar7;
            }
            else {
              local_2c = iVar5;
              if (iVar9 <= iVar5) {
                iVar7 = -iVar9;
                goto LAB_004a92ce;
              }
            }
            if (local_24 < 0) {
              iVar7 = *(int *)((int)this + 0x60) + local_24;
            }
            else {
              iVar7 = local_24;
              if (*(int *)((int)this + 0x60) <= local_24) {
                iVar7 = local_24 - *(int *)((int)this + 0x60);
              }
            }
            iVar9 = iVar7 * iVar9 + local_2c;
            lVar10 = __ftol(SQRT((float10)(local_28 * local_28 + local_1c * local_1c)) -
                            (float10)_DAT_0054dae8);
            if (param_2 < (int)lVar10) {
              if (param_2 < iVar8) {
                iVar2 = *(int *)((int)this + 0x48);
                iVar4 = (((int)lVar10 - param_2) * iVar2) / (iVar8 - param_2);
                if (iVar2 < iVar4) {
                  iVar4 = iVar2;
                }
                if (iVar4 < param_3) {
                  iVar4 = param_3;
                }
              }
            }
            else {
              *(uint *)(*(int *)((int)this + 100) + 4 + iVar9 * 8) =
                   *(uint *)(*(int *)((int)this + 100) + 4 + iVar9 * 8) | uVar3;
              iVar4 = param_3;
            }
            iVar9 = iVar9 * 8;
            if ((*(uint *)(iVar9 + 4 + *(int *)((int)this + 100)) & uVar3) != 0) {
              if (*(int *)((int)this + 0x4c) < iVar4) {
                iVar4 = *(int *)((int)this + 0x4c);
              }
            }
            if ((param_4 == *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400)) &&
               (iVar4 < *(short *)(*(int *)((int)this + 0x54) + 2 + iVar9))) {
              *(short *)(*(int *)((int)this + 0x54) + 2 + iVar9) = (short)iVar4;
              FUN_00517a50(&DAT_005876d0,local_2c,iVar7);
            }
            local_28 = local_28 + 1;
            local_24 = local_24 + 1;
          } while (local_28 <= iVar8);
        }
        local_1c = local_1c + 1;
      } while (local_1c <= iVar8);
    }
  }
  return;
#undef local_2c
#undef local_28
#undef local_24
#undef local_1c
}
