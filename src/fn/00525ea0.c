/* Rebuilt from lomse.exe FUN_00525ea0 @ 0x00525ea0 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)

#define LOM_SELF_00525ea0 1
int * __fastcall rb_00525ea0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 10;
  if ((char)param_1[10] == '\0') {
    iVar2 = *param_1;
    if (((iVar2 < 0) || (DAT_005cd2f0 <= iVar2)) || (DAT_005cd2f4 == 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = DAT_005cd2f4 + iVar2 * 1000;
    }
    if (iVar2 != 0) {
      piVar1 = *(int **)(iVar2 + 0xf0);
    }
  }
  return piVar1;
}
