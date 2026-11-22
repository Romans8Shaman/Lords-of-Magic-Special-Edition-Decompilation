/* Rebuilt from lomse.exe FUN_00402150 @ 0x00402150 (162 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define DAT_005ae970 (*(int *)0x005ae970)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004a8330 ((int (__thiscall *)(void *, int, int))0x004a8330)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_00402150 1
int __stdcall rb_00402150(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uchar _fr[0x10] __attribute__((aligned(8))); /* stack frame: locals at Ghidra offsets */
  typedef int _t_local_4;
#define local_4 (*(_t_local_4 *)(_fr + 0x4))
  
  iVar5 = 0;
  local_4 = 0;
  uVar4 = 8;
  do {
    iVar1 = *(int *)(DAT_005ae970 + (iVar5 + *(int *)((int)param_1 + 0x1c) * 8) * 4);
    if (iVar1 != *(int *)((int)param_1 + 0x1c)) {
      iVar1 = FUN_004a8330(&DAT_005ae958,iVar1,0);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) != *(int *)((int)param_1 + 0x48))) {
        iVar2 = FUN_00407d50(iVar1);
        if (iVar2 == 0) {
          iVar2 = FUN_00506110(param_1,iVar1);
          if (iVar2 != 0) {
            if (*(int *)(iVar1 + 0x28) == param_2) {
              return iVar1;
            }
            uVar3 = *(int *)((int)param_1 + 0x44) - iVar5 & 7;
            if (4 < uVar3) {
              uVar3 = 8 - uVar3;
            }
            if ((int)uVar3 < (int)uVar4) {
              uVar4 = uVar3;
              local_4 = iVar1;
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  return local_4;
#undef local_4
}
