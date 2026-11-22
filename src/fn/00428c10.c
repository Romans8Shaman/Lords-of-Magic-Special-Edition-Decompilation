/* Rebuilt from lomse.exe FUN_00428c10 @ 0x00428c10 (33 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00428c10 1
int __fastcall rb_00428c10(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x10) & 1) != 0) break;
    if (((byte)*(uint *)(iVar1 + 0x10) & 4) == 4) {
      return iVar1;
    }
    iVar1 = *(int *)(iVar1 + 0x14);
  }
  return iVar1;
}
