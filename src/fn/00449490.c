/* Rebuilt from lomse.exe FUN_00449490 @ 0x00449490 (307 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00521fc0 ((int (__fastcall *)(int *))0x00521fc0)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_00449490 1
undefined4 __stdcall rb_00449490(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_c;
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  iVar1 = param_1;
  iVar4 = 0;
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + 0x4c);
    param_1 = 0;
    local_c = 0;
    local_8 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar1 + 0xc4);
      do {
        iVar3 = *piVar5;
        if (((iVar3 < 0) || (DAT_005cd2f0 <= iVar3)) || (DAT_005cd2f4 == 0)) {
          iVar3 = 0;
        }
        else {
          iVar3 = DAT_005cd2f4 + iVar3 * 1000;
        }
        if (((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == 3)) &&
           (iVar2 = FUN_0052b0e0(piVar5,3), iVar2 == 0)) {
          iVar3 = *(int *)(iVar3 + 0x164);
          if (((iVar3 == 1) || (iVar3 == 0)) || (iVar3 == 2)) {
            param_1 = param_1 + 1;
          }
          iVar3 = FUN_00521fc0(piVar5);
          if (0x14 < iVar3) {
            local_c = local_c + 1;
          }
        }
        FUN_00521fc0(piVar5);
        FUN_00527e90(piVar5,0x2e,&local_4);
        if (local_4 <= piVar5[3]) {
          local_8 = local_8 + 1;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar4 < *(int *)(iVar1 + 0x4c));
      iVar3 = local_c;
      iVar2 = param_1;
    }
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar1 + 0x4c);
      if (local_8 != iVar1) {
        return 2;
      }
      if ((iVar2 == iVar1) && (iVar3 == iVar1)) {
        return 0;
      }
      if (iVar3 == 0) {
        return 4;
      }
      if (0 < iVar3) {
        return 3;
      }
    }
  }
  return 1;
#undef local_c
#undef local_8
#undef local_4
}
