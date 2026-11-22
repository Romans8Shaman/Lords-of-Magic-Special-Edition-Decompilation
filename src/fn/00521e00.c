/* Rebuilt from lomse.exe FUN_00521e00 @ 0x00521e00 (40 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005cd2f0 (*(int *)0x005cd2f0)
#define DAT_005cd2f4 (*(int *)0x005cd2f4)

#define LOM_SELF_00521e00 1
int __fastcall rb_00521e00(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (((iVar1 < 0) || (DAT_005cd2f0 <= iVar1)) || (DAT_005cd2f4 == 0)) {
    return 0;
  }
  return DAT_005cd2f4 + iVar1 * 1000;
}
