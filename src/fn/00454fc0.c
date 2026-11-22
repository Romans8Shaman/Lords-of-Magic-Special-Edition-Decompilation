/* Rebuilt from lomse.exe FUN_00454fc0 @ 0x00454fc0 (282 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00579370 (*(undefined4 *)0x00579370)
#define DAT_00579374 (*(undefined4 *)0x00579374)
#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_004a8300 ((undefined4 (__thiscall *)(void *, int, int))0x004a8300)
#define FUN_004a9a60 ((undefined4 (__thiscall *)(void *, undefined4 *, int))0x004a9a60)

#define LOM_SELF_00454fc0 1
int __stdcall rb_00454fc0(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uchar _fr[0x18] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int * _t_local_c;
  typedef int _t_local_8;
  typedef uint _t_local_4;
#define local_c (*(_t_local_c *)(_fr + 0x4))
#define local_8 (*(_t_local_8 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0xc))
  
  DAT_00579370 = param_1;
  if (param_2 < 2) {
    return 1;
  }
  iVar6 = 1;
  param_1 = 0;
  puVar8 = &DAT_00579374;
  for (iVar4 = 0x31; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0xffffffff;
    puVar8 = puVar8 + 1;
  }
  if (1 < param_2) {
    piVar7 = &DAT_00579370;
    do {
      local_c = &DAT_00579370 + iVar6;
      iVar4 = *piVar7 << 5;
      local_8 = 0;
      do {
        iVar1 = *(int *)(DAT_005ae970 + iVar4);
        FUN_004a9a60(&DAT_005ae958,&local_4,iVar1);
        if (((local_4 & 0x200000) != 0) &&
           (iVar3 = FUN_004a8300(&DAT_005ae958,iVar1,0), iVar3 == -1)) {
          iVar3 = 0;
          bVar2 = true;
          if (0x579370 < (int)piVar7) {
            piVar5 = &DAT_00579370;
            do {
              if (*piVar5 == iVar1) {
                bVar2 = false;
                break;
              }
              iVar3 = iVar3 + 1;
              piVar5 = piVar5 + 1;
            } while (iVar3 < param_1);
          }
          if (bVar2) {
            iVar6 = iVar6 + 1;
            *local_c = iVar1;
            local_c = local_c + 1;
          }
          if (param_2 <= iVar6) {
            return iVar6;
          }
        }
        iVar4 = iVar4 + 4;
        local_8 = local_8 + 1;
      } while (local_8 < 8);
      piVar7 = piVar7 + 1;
      param_1 = param_1 + 1;
    } while ((param_1 < iVar6) && (iVar6 < param_2));
  }
  return iVar6;
#undef local_c
#undef local_8
#undef local_4
}
