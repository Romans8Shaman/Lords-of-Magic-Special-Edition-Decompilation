/* Rebuilt from lomse.exe FUN_0048df90 @ 0x0048df90 (40 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00583610 (*(int *)0x00583610)

#define LOM_SELF_0048df90 1
int __fastcall rb_0048df90(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00583610 != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x50)) {
      iVar2 = *(int *)(param_1 + 0x4c);
      do {
        if (DAT_00583610 == iVar2) {
          return iVar1;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (iVar1 < *(int *)(param_1 + 0x50));
    }
  }
  return -1;
}
