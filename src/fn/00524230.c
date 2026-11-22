/* Rebuilt from lomse.exe FUN_00524230 @ 0x00524230 (43 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00523160 ((undefined4 (__fastcall *)(int))0x00523160)

#define LOM_SELF_00524230 1
void __fastcall rb_00524230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_00523160(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1000;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}
