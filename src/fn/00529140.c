/* Rebuilt from lomse.exe FUN_00529140 @ 0x00529140 (54 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_00529140 1
uint __fastcall rb_00529140(int *param_1)

{
  int iVar1;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if (*(int *)(param_1[5] + 4) == 3) {
    return 0;
  }
  iVar1 = FUN_00521e00(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return ~-(uint)(*(int *)(iVar1 + 0x20) != *(int *)(param_1[5] + 4)) & param_1[5];
}
