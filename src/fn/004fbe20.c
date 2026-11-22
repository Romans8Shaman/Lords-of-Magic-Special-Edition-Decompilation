/* Rebuilt from lomse.exe FUN_004fbe20 @ 0x004fbe20 (62 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_004ba1c0 ((undefined4 (__thiscall *)(void *, int))0x004ba1c0)

#define LOM_SELF_004fbe20 1
void __fastcall rb_004fbe20(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x1c) != 0) && (iVar1 = 0, 0 < *(int *)(param_1 + 0x24))) {
    iVar2 = 0;
    do {
      FUN_004ba1c0((void *)(*(int *)(param_1 + 0x1c) + iVar2),0);
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44 + iVar2) = 0xffffffff;
      iVar2 = iVar2 + 0x58;
    } while (iVar1 < *(int *)(param_1 + 0x24));
  }
  return;
}
