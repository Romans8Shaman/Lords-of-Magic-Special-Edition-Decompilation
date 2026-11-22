/* Rebuilt from lomse.exe FUN_0052de40 @ 0x0052de40 (340 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005aa12c (*(undefined4 *)0x005aa12c)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00482ac0 ((uint (__thiscall *)(void *, int, int))0x00482ac0)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)

#define LOM_SELF_0052de40 1
void __fastcall rb_0052de40(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_18;
  typedef int * _t_local_14;
#define local_18 (*(_t_local_18 *)(_fr + 0x0))
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
  
  piVar1 = (int *)(param_1 + 0x18);
  iVar9 = 0;
  piVar7 = piVar1;
  do {
    uVar4 = FUN_00482ac0(&DAT_005aa12c,*piVar7,0);
    iVar3 = DAT_005ae998;
    iVar2 = DAT_005ae98c;
    if (uVar4 == 0) break;
    iVar9 = iVar9 + 1;
    piVar7 = piVar7 + 3;
  } while (iVar9 < 0x1e);
  if ((iVar9 < 0x1e) && (local_18 = 0, 0 < iVar9)) {
    iVar10 = iVar9;
    local_14 = piVar1;
    do {
      uVar4 = FUN_00482ac0(&DAT_005aa12c,*local_14,0);
      if ((uVar4 != 0) && (iVar3 <= iVar2)) {
        puVar11 = (undefined4 *)(param_1 + (iVar10 + 2) * 0xc);
        iVar8 = iVar3;
        do {
          iVar5 = FUN_004f6000(&DAT_005ae974,iVar8);
          if ((((iVar5 != 0) && (*(int *)(iVar5 + 4) == 0)) &&
              (iVar6 = FUN_00407d50(uVar4), iVar6 == 0)) &&
             ((*(int *)(iVar5 + 0x48) == *(int *)(uVar4 + 0x48) &&
              (*(char *)(iVar5 + 0x5ac) == *(char *)(uVar4 + 0x5ac))))) {
            iVar6 = 0;
            if (0 < iVar10) {
              piVar7 = piVar1;
              do {
                if (*piVar7 == *(int *)(iVar5 + 0x28)) goto LAB_0052df5b;
                iVar6 = iVar6 + 1;
                piVar7 = piVar7 + 3;
              } while (iVar6 < iVar10);
            }
            puVar11[-1] = 0xffffffff;
            *puVar11 = *(undefined4 *)(iVar5 + 0x28);
            puVar11[1] = 0xffffffff;
            iVar10 = iVar10 + 1;
            puVar11 = puVar11 + 3;
            *(uint *)(iVar5 + 0x30) = *(uint *)(iVar5 + 0x30) | 0x20;
            *(byte *)(iVar5 + 0x34) = *(byte *)(iVar5 + 0x34) | 2;
            if (0x1d < iVar10) {
              return;
            }
          }
LAB_0052df5b:
          iVar8 = iVar8 + 1;
        } while (iVar8 <= iVar2);
      }
      local_18 = local_18 + 1;
      local_14 = local_14 + 3;
    } while (local_18 < iVar9);
  }
  return;
#undef local_18
#undef local_14
}
