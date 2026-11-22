/* Rebuilt from lomse.exe FUN_004017b0 @ 0x004017b0 (90 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005ae958 (*(undefined *)0x005ae958)
#define FUN_00407d50 ((undefined4 (__fastcall *)(int))0x00407d50)
#define FUN_004a8960 ((int (__thiscall *)(void *, int, int))0x004a8960)
#define FUN_00506110 ((undefined4 (__thiscall *)(void *, int))0x00506110)

#define LOM_SELF_004017b0 1
undefined4 __cdecl rb_004017b0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00407d50(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_00506110((void *)*param_2,param_1);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(*param_2 + 0x48))) {
      iVar1 = FUN_004a8960(&DAT_005ae958,*(int *)(param_1 + 0x1c),*(int *)(*param_2 + 0x1c));
      if (iVar1 < param_2[2]) {
        param_2[1] = param_1;
        param_2[2] = iVar1;
        if (iVar1 < 2) {
          return 0;
        }
      }
    }
  }
  return 1;
}
