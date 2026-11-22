/* Rebuilt from lomse.exe FUN_004ffdd0 @ 0x004ffdd0 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004ffdd0 1
int __fastcall rb_004ffdd0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x25318) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x25598)) {
      iVar2 = *(int *)(param_1 + 0x255a0);
      do {
        if (*(int *)(param_1 + 0x25318) == iVar2) {
          return iVar1 + 0x11000000;
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x80;
      } while (iVar1 < *(int *)(param_1 + 0x25598));
      return -1;
    }
  }
  return -1;
}
