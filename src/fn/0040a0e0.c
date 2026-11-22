/* Rebuilt from lomse.exe FUN_0040a0e0 @ 0x0040a0e0 (458 bytes, __thiscall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define DAT_005ae998 (*(int *)0x005ae998)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00409f70 ((int (__thiscall *)(void *, int, int, int, int *, int *))0x00409f70)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)
#define FUN_004a89d0 ((float10 (__thiscall *)(int, int, int))0x004a89d0)
#define FUN_004a8b50 ((int (__thiscall *)(void *, int, int))0x004a8b50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define _DAT_0054d38c (*(float *)0x0054d38c)

#define LOM_SELF_0040a0e0 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall rb_0040a0e0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  uchar _fr[0x50] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_44;
  typedef int _t_local_40;
  typedef int _t_local_3c;
  typedef int _t_local_38;
  typedef int _t_local_2c;
  typedef int _t_local_28;
  typedef int _t_local_24;
  typedef int _t_local_20[8];
#define local_44 (*(_t_local_44 *)(_fr + 0x4))
#define local_40 (*(_t_local_40 *)(_fr + 0x8))
#define local_3c (*(_t_local_3c *)(_fr + 0xc))
#define local_38 (*(_t_local_38 *)(_fr + 0x10))
#define local_2c (*(_t_local_2c *)(_fr + 0x1c))
#define local_28 (*(_t_local_28 *)(_fr + 0x20))
#define local_24 (*(_t_local_24 *)(_fr + 0x24))
#define local_20 (*(_t_local_20 *)(_fr + 0x28))
  
  piVar7 = local_20;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_3c = 0;
  local_44 = -1;
  local_38 = 0;
  local_24 = DAT_005ae98c;
  iVar5 = DAT_005ae998;
  iVar1 = 0;
  if (DAT_005ae998 <= DAT_005ae98c) {
    do {
      iVar1 = FUN_004f6000(&DAT_005ae974,iVar5);
      if ((((iVar1 != 0) && (*(int *)(iVar1 + 4) == 0)) &&
          (*(int *)(iVar1 + 0x48) != *(int *)(param_1 + 0x48))) &&
         (iVar2 = FUN_00407d50(iVar1), iVar2 == 0)) {
        local_38 = local_38 + 1;
        fVar8 = FUN_004a89d0(0x5ae958,*(int *)(param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
        if ((__LOM_ISNAN(fVar8) || __LOM_ISNAN((float10)_DAT_0054d38c)) || fVar8 <= (float10)_DAT_0054d38c) {
          local_40 = 1;
          iVar2 = FUN_004a8b50(&DAT_005ae958,*(int *)(param_1 + 0x1c),*(int *)(iVar1 + 0x1c));
          if (local_20[iVar2] == 0) {
            local_20[iVar2] = 1;
            iVar6 = 0;
            do {
              iVar3 = FUN_00409f70(this,*(int *)(param_1 + 0x1c),iVar2,iVar6,&local_2c,&local_28);
              if (((((iVar3 != -1) && (-1 < local_2c)) &&
                   ((local_2c < *(int *)((int)this + 0x6c) &&
                    ((-1 < local_28 && (local_28 < *(int *)((int)this + 0x70))))))) &&
                  (iVar3 = FUN_004a8330(this,iVar3,0), iVar3 != 0)) &&
                 ((iVar4 = FUN_00407d50(iVar3), iVar4 == 0 &&
                  (*(int *)(iVar3 + 0x48) == *(int *)(iVar1 + 0x48))))) {
                local_40 = local_40 + 1;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x19);
            if (local_44 == -1) {
              local_44 = *(int *)(iVar1 + 0x28);
              local_3c = local_40;
            }
            else if (local_3c < local_40) {
              local_44 = *(int *)(iVar1 + 0x28);
              local_3c = local_40;
            }
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= local_24);
    iVar1 = local_3c;
  }
  if ((local_44 != -1) && ((iVar1 * 100) / local_38 < 0xf)) {
    local_44 = -1;
  }
  return local_44;
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
}
