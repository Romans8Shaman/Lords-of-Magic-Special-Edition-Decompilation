/* Rebuilt from lomse.exe FUN_0043c2e0 @ 0x0043c2e0 (41 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_0043bf60 ((undefined4 (__fastcall *)(int))0x0043bf60)

#define LOM_SELF_0043c2e0 1
void __fastcall rb_0043c2e0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = 0;
    do {
      FUN_0043bf60(*(int *)(param_1 + 8) + iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x58;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return;
}
