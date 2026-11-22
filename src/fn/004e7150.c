/* Rebuilt from lomse.exe FUN_004e7150 @ 0x004e7150 (30 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00521e00 ((int (__fastcall *)(int *))0x00521e00)

#define LOM_SELF_004e7150 1
int __fastcall rb_004e7150(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00521e00(param_1);
  if ((iVar1 == 0) ||
     (((iVar1 = *(int *)(iVar1 + 0x20), iVar1 != 0 && (iVar1 != 1)) && (iVar1 != 2)))) {
    iVar1 = -1;
  }
  return iVar1;
}
