/* Rebuilt from lomse.exe FUN_00415470 @ 0x00415470 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00415470 1
undefined4 __fastcall rb_00415470(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (((*(int *)(iVar1 + 0x138) < 1) || ((*(uint *)(iVar1 + 0x14) & 0x80000) == 0)) ||
     ((*(uint *)(iVar1 + 0x14) & 0x140000) != 0)) {
    return 0;
  }
  return 1;
}
