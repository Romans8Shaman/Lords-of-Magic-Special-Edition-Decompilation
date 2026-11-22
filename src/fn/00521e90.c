/* Rebuilt from lomse.exe FUN_00521e90 @ 0x00521e90 (17 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00521e90 1
undefined4 __fastcall rb_00521e90(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x138);
}
