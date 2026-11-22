/* Rebuilt from lomse.exe FUN_00521e50 @ 0x00521e50 (20 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00521e50 1
uint __fastcall rb_00521e50(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 0x14) >> 0x12 & 1;
}
