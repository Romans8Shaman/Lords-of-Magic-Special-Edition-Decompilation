/* Rebuilt from lomse.exe FUN_00449250 @ 0x00449250 (561 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_005228b0 ((int (__thiscall *)(void *, undefined4, undefined4))0x005228b0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)
#define FUN_00525f20 ((uint (__fastcall *)(int))0x00525f20)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_005291a0 ((uint (__fastcall *)(int *))0x005291a0)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_00449250 1
undefined4 __stdcall rb_00449250(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uchar _fr[0x28] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_1c;
  typedef int _t_local_18;
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_1c (*(_t_local_1c *)(_fr + 0x4))
#define local_18 (*(_t_local_18 *)(_fr + 0x8))
#define local_14 (*(_t_local_14 *)(_fr + 0xc))
#define local_10 (*(_t_local_10 *)(_fr + 0x10))
#define local_c (*(_t_local_c *)(_fr + 0x14))
#define local_8 (*(_t_local_8 *)(_fr + 0x18))
#define local_4 (*(_t_local_4 *)(_fr + 0x1c))
  
  iVar1 = param_1;
  if (param_1 != 0) {
    piVar6 = (int *)(param_1 + 0x4c);
    iVar8 = 0;
    local_4 = 0;
    local_14 = 0;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
    local_1c = 0;
    param_1 = 0;
    iVar4 = 0;
    iVar2 = 0;
    iVar5 = 0;
    iVar7 = 0;
    if (0 < *piVar6) {
      piVar6 = (int *)(iVar1 + 0xc4);
      do {
        iVar4 = *piVar6;
        if (((iVar4 < 0) || (DAT_005cd2f0 <= iVar4)) || (DAT_005cd2f4 == 0)) {
          iVar4 = 0;
        }
        else {
          iVar4 = DAT_005cd2f4 + iVar4 * 1000;
        }
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x1c) == 2)) &&
           ((iVar2 = FUN_0052b0e0(piVar6,2), iVar2 == 0 && ((*(byte *)(piVar6 + 9) & 1) == 0)))) {
          FUN_00527e90(piVar6,0x2e,&local_18);
          uVar3 = FUN_005291a0(piVar6);
          if (uVar3 != 0) {
            uVar3 = FUN_00525f10((int)piVar6);
            if ((uVar3 == 0) && (uVar3 = FUN_00525f20((int)piVar6), uVar3 == 0)) {
              iVar2 = FUN_005228b0(piVar6,*(undefined4 *)(iVar1 + 0x28),iVar8);
              if (iVar2 < 10) {
                local_c = local_c + 1;
                if (piVar6[3] < local_18) {
                  param_1 = param_1 + 1;
                }
              }
              else {
                local_1c = local_1c + 1;
              }
            }
            else {
              iVar2 = FUN_005228b0(piVar6,*(undefined4 *)(iVar1 + 0x28),iVar8);
              if (iVar2 < 0xc) {
                local_8 = local_8 + 1;
                if (piVar6[3] < local_18) {
                  param_1 = param_1 + 1;
                }
              }
              else {
                local_1c = local_1c + 1;
              }
            }
            local_4 = local_4 + 1;
          }
          if (((*(int *)(iVar4 + 0x164) == 2) &&
              (iVar4 = FUN_005228b0(piVar6,*(undefined4 *)(iVar1 + 0x28),iVar8), iVar4 == 5)) &&
             (local_14 = local_14 + 1, piVar6[3] < local_18)) {
            param_1 = param_1 + 1;
          }
        }
        iVar4 = FUN_0052b0e0(piVar6,2);
        if (iVar4 != 0) {
          local_10 = local_10 + 1;
        }
        iVar8 = iVar8 + 1;
        piVar6 = piVar6 + 0x13;
      } while (iVar8 < *(int *)(iVar1 + 0x4c));
      iVar4 = param_1;
      iVar2 = local_14;
      iVar5 = local_1c;
      iVar7 = local_10;
    }
    local_8 = local_c + iVar2 + local_8;
    if ((local_4 != 0) || (iVar2 != 0)) {
      if (local_8 == 0) {
        if (0 < iVar5) {
          return 6;
        }
        if (0 < iVar7) {
          return 3;
        }
      }
      if (0 < iVar4) {
        return (-(uint)(iVar4 != local_8) & 3) + 2;
      }
      if ((iVar7 < 1) && (iVar5 < 1)) {
        return 0;
      }
      return 4;
    }
  }
  return 1;
#undef local_1c
#undef local_18
#undef local_14
#undef local_10
#undef local_c
#undef local_8
#undef local_4
}
