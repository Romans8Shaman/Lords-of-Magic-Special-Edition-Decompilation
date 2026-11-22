/* Rebuilt from lomse.exe FUN_00409840 @ 0x00409840 (252 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define __ftol(x) ((longlong)(float10)(x)) /* MSVC CRT: x87 truncating convert */

#define LOM_SELF_00409840 1
int __stdcall rb_00409840(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 x;
  longlong lVar8;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef int _t_local_10;
  typedef int _t_local_c;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_c (*(_t_local_c *)(_fr + 0xc))
  
  iVar2 = DAT_005ae998;
  iVar1 = DAT_005ae98c;
  local_10 = 0;
  local_c = -1;
  for (iVar7 = DAT_005ae998; iVar7 <= iVar1; iVar7 = iVar7 + 1) {
    iVar3 = FUN_004f6000(&DAT_005ae974,iVar7);
    if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 0)) && (*(int *)(iVar3 + 0x48) == param_2)) &&
       (iVar4 = FUN_00407d50(iVar3), iVar4 == 0)) {
      local_14 = 0;
      iVar4 = iVar2;
      do {
        if (((iVar7 != iVar4) && (iVar5 = FUN_004f6000(&DAT_005ae974,iVar4), iVar5 != 0)) &&
           ((*(int *)(iVar5 + 4) == 0 &&
            ((*(int *)(iVar5 + 0x48) == param_2 && (iVar6 = FUN_00407d50(iVar5), iVar6 == 0)))))) {
          x = FUN_004a89d0(0x5ae958,*(int *)(iVar3 + 0x1c),*(int *)(iVar5 + 0x1c));
          lVar8 = __ftol(x);
          if ((int)lVar8 < param_1) {
            local_14 = local_14 + 1;
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 <= iVar1);
      if (local_10 < local_14) {
        local_10 = local_14;
        local_c = iVar7;
      }
    }
  }
  return local_c;
#undef local_14
#undef local_10
#undef local_c
}
