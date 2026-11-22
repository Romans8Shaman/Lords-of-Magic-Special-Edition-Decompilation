/* Rebuilt from lomse.exe FUN_004c1d30 @ 0x004c1d30 (63 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00415470 ((undefined4 (__fastcall *)(int *))0x00415470)

#define LOM_SELF_004c1d30 1
undefined4 __fastcall rb_004c1d30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x4c) < 1) {
    return 0;
  }
  piVar3 = (int *)(param_1 + 0xc4);
  do {
    iVar1 = FUN_00415470(piVar3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0x13;
  } while (iVar2 < *(int *)(param_1 + 0x4c));
  return 0;
}
