/* Rebuilt from lomse.exe FUN_0052b210 @ 0x0052b210 (43 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0042c650 ((int (__fastcall *)(int))0x0042c650)
#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_0052b210 1
undefined4 __fastcall rb_0052b210(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x14) & 0x2000000) != 0)) {
    iVar1 = FUN_0042c650((int)param_1);
    if (0 < iVar1) {
      return 1;
    }
  }
  return 0;
}
