/* Rebuilt from lomse.exe FUN_00526000 @ 0x00526000 (58 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)
#define _DAT_0054e9e0 (*(float *)0x0054e9e0)

#define LOM_SELF_00526000 1
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall rb_00526000(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_005cd2f4 + iVar1 * 1000;
  }
  if (iVar1 == 0) {
    return (float10)_DAT_0054e9e0;
  }
  return (float10)*(float *)(iVar1 + 0xf8);
}
