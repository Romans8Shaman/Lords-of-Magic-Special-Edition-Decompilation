/* Rebuilt from lomse.exe FUN_004b0f10 @ 0x004b0f10 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b0d80 ((undefined4 (__fastcall *)(int))0x004b0d80)

#define LOM_SELF_004b0f10 1
void __fastcall rb_004b0f10(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_004b0d80(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}
