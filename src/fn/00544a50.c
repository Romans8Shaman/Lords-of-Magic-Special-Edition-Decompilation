/* Rebuilt from lomse.exe FUN_00544a50 @ 0x00544a50 (83 bytes, __stdcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d5674 (*(FARPROC *)0x005d5674)
#define FUN_0053f0d0 ((undefined4 (__stdcall *)(void))0x0053f0d0)
#define FUN_00544b20 ((undefined4 (__cdecl *)(FARPROC))0x00544b20)

#define LOM_SELF_00544a50 1
int __stdcall rb_00544a50(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    FUN_0053f0d0();
    return 1;
  }
  if (DAT_005d5674 != (FARPROC)0x0) {
    iVar2 = FUN_00544b20(DAT_005d5674);
    if (iVar2 != 0) {
      iVar2 = ((undefined4 (__stdcall *)(__typeof__(param_1)))(*DAT_005d5674))(param_1);
      return iVar2;
    }
  }
  return 0;
}
