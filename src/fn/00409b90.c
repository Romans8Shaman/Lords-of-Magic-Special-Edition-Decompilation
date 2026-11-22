/* Rebuilt from lomse.exe FUN_00409b90 @ 0x00409b90 (36 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004e8bc0 ((undefined4 (__fastcall *)(int *))0x004e8bc0)
#define FUN_00525f10 ((uint (__fastcall *)(int))0x00525f10)

#define LOM_SELF_00409b90 1
undefined4 __fastcall rb_00409b90(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00525f10(param_1 + 0xc4);
  if (uVar1 != 0) {
    iVar2 = FUN_004e8bc0((int *)(param_1 + 0xc4));
    if (iVar2 == 1) {
      return 1;
    }
  }
  return 0;
}
