/* Rebuilt from lomse.exe FUN_00407a10 @ 0x00407a10 (397 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae974 (*(undefined4 *)0x005ae974)
#define DAT_005ae98c (*(int *)0x005ae98c)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_00420620 ((undefined4 (__fastcall *)(int))0x00420620)
#define FUN_004a8a50 ((int (__thiscall *)(void *, int, int))0x004a8a50)
#define FUN_004f6000 ((int (__thiscall *)(void *, int))0x004f6000)
#define FUN_00525fc0 ((undefined4 (__fastcall *)(int *))0x00525fc0)

#define LOM_SELF_00407a10 1
undefined4 __fastcall rb_00407a10(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uchar _fr[0x20] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_14;
  typedef undefined4 _t_local_10;
  typedef int _t_local_4;
#define local_14 (*(_t_local_14 *)(_fr + 0x4))
#define local_10 (*(_t_local_10 *)(_fr + 0x8))
#define local_4 (*(_t_local_4 *)(_fr + 0x14))
  
  local_10 = 0;
  bVar1 = false;
  iVar3 = FUN_00525fc0((int *)(param_1 + 0xc4));
  iVar2 = DAT_005ae98c;
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = -1;
  iVar6 = 9999;
  local_14 = 0;
  if (-1 < DAT_005ae98c) {
    do {
      iVar4 = FUN_004f6000(&DAT_005ae974,local_14);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 4) == 0)) {
        local_4 = iVar4;
        if (*(int *)(iVar4 + 0x48) == *(int *)(param_1 + 0x48)) {
          iVar5 = FUN_00407d50(iVar4);
          if ((((iVar5 == 0) && (iVar5 = FUN_00420620(iVar4), iVar5 == 0)) &&
              (*(int *)(iVar4 + 0x68) != 0x32)) &&
             ((*(char *)(iVar4 + 0x5ac) == *(char *)(param_1 + 0x5ac) &&
              (*(int *)(iVar4 + 0x68) != 1)))) {
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
            *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar4 + 0x6c);
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar4 + 0x70);
            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar4 + 0x74);
            *(undefined4 *)(iVar4 + 0x7c) = 0;
            return 1;
          }
          if (*(int *)(iVar4 + 0x68) == 2) {
            bVar1 = true;
          }
        }
        else {
          iVar5 = FUN_00407d50(iVar4);
          if ((iVar5 == 0) && (iVar5 = FUN_00420620(iVar4), iVar5 == 0)) {
            if (iVar3 == -1) {
              iVar3 = *(int *)(iVar4 + 0x28);
              iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
            }
            else {
              iVar5 = FUN_004a8a50(&DAT_005ae958,*(int *)(iVar4 + 0x1c),*(int *)(param_1 + 0x1c));
              if (iVar6 <= iVar5) goto LAB_00407b19;
              iVar3 = *(int *)(iVar4 + 0x28);
            }
            iVar6 = iVar5;
          }
        }
      }
LAB_00407b19:
      local_14 = local_14 + 1;
    } while (local_14 <= iVar2);
  }
  if ((iVar3 != -1) && (bVar1)) {
    *(undefined4 *)(param_1 + 0x68) = 2;
    *(int *)(param_1 + 0x6c) = iVar3;
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(local_4 + 0x7c) = 0;
    local_10 = 1;
  }
  return local_10;
#undef local_14
#undef local_10
#undef local_4
}
