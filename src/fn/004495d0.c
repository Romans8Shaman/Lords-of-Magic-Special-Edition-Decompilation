/* Rebuilt from lomse.exe FUN_004495d0 @ 0x004495d0 (245 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define FUN_00527e90 ((undefined4 (__thiscall *)(void *, int, int *))0x00527e90)
#define FUN_0052b0e0 ((undefined4 (__thiscall *)(void *, int))0x0052b0e0)

#define LOM_SELF_004495d0 1
undefined4 __stdcall rb_004495d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_8;
  typedef int _t_local_4;
#define local_8 (*(_t_local_8 *)(_fr + 0x0))
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar1 = param_1;
  iVar5 = 0;
  if (param_1 != 0) {
    piVar4 = (int *)(param_1 + 0x4c);
    iVar3 = 0;
    param_1 = 0;
    local_8 = 0;
    iVar2 = 0;
    if (0 < *piVar4) {
      piVar4 = (int *)(iVar1 + 0xc4);
      do {
        iVar2 = *piVar4;
        if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
          iVar2 = 0;
        }
        else {
          iVar2 = DAT_005cd2f4 + iVar2 * 1000;
        }
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == 4)) {
          iVar3 = iVar3 + 1;
          iVar2 = FUN_0052b0e0(piVar4,4);
          if (iVar2 == 0) {
            param_1 = param_1 + 1;
          }
        }
        FUN_00527e90(piVar4,0x2e,&local_4);
        if (local_4 <= piVar4[3]) {
          local_8 = local_8 + 1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 0x13;
      } while (iVar5 < *(int *)(iVar1 + 0x4c));
      iVar2 = param_1;
    }
    if (iVar3 != 0) {
      if (iVar2 == 0) {
        return 4;
      }
      if (local_8 == 0) {
        return 3;
      }
      if (iVar2 == *(int *)(iVar1 + 0x4c)) {
        return 0;
      }
      if (0 < iVar2) {
        return 1;
      }
    }
  }
  return 2;
#undef local_8
#undef local_4
}
