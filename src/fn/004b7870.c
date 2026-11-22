/* Rebuilt from lomse.exe FUN_004b7870 @ 0x004b7870 (29 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004b7dd0 ((undefined4 (__fastcall *)(int))0x004b7dd0)
#define op_sunlight ((undefined4 (__stdcall *)(void))0x0051bc30)

#define LOM_SELF_004b7870 1
void __fastcall rb_004b7870(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x390);
  iVar2 = FUN_004b7dd0(param_1);
  if (iVar1 == iVar2) {
    op_sunlight();
  }
  return;
}
