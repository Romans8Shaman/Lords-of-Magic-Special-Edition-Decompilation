/* Rebuilt from lomse.exe FUN_00449160 @ 0x00449160 (240 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_004c1c50 ((undefined4 (__fastcall *)(int))0x004c1c50)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_00529180 ((uint (__fastcall *)(int *))0x00529180)

#define LOM_SELF_00449160 1
undefined4 __stdcall rb_00449160(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = param_1;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar2 = FUN_004c1c50(param_1);
    if (iVar2 == 0) {
      return 1;
    }
    piVar5 = (int *)(param_1 + 0x4c);
    local_8 = 0;
    param_1 = 0;
    iVar2 = 0;
    if (0 < *piVar5) {
      piVar5 = (int *)(iVar1 + 0xc4);
      do {
        iVar2 = *piVar5;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if (iVar2 != 0) {
          FUN_00527e90(piVar5,0x2e,&local_4);
          if (local_4 <= piVar5[3]) {
            local_8 = local_8 + 1;
          }
          if (*(int *)(iVar2 + 0x1c) == 1) {
            uVar3 = FUN_00529180(piVar5);
            if (uVar3 != 0) {
              param_1 = param_1 + 1;
            }
          }
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x13;
      } while (iVar4 < *(int *)(iVar1 + 0x4c));
      iVar2 = param_1;
    }
    if (iVar2 != 0) {
      if (local_8 < *(int *)(iVar1 + 0x4c)) {
        return 3;
      }
      if (0 < iVar2) {
        return 0;
      }
    }
  }
  return 2;
#undef local_8
#undef local_4
}
