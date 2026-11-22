/* Rebuilt from lomse.exe FUN_004530e0 @ 0x004530e0 (63 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005792c4 (*(int *)0x005792c4)

#define LOM_SELF_004530e0 1
void __cdecl rb_004530e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x348);
    if (iVar1 != 0) {
      iVar2 = iVar1;
      for (iVar3 = *(int *)(iVar1 + 0x24); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x24)) {
        iVar2 = iVar3;
      }
      *(int *)(iVar2 + 0x24) = DAT_005792c4;
      DAT_005792c4 = iVar1;
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
  }
  return;
}
