/* Rebuilt from lomse.exe FUN_0052b1f0 @ 0x0052b1f0 (24 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_0052b1f0 1
uint __fastcall rb_0052b1f0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return param_1[9] & 0x800000;
}
