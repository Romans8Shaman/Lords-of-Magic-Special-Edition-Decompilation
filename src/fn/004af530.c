/* Rebuilt from lomse.exe FUN_004af530 @ 0x004af530 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004af280 ((undefined4 (__fastcall *)(int))0x004af280)

#define LOM_SELF_004af530 1
void __fastcall rb_004af530(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_004af280(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x34;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}
