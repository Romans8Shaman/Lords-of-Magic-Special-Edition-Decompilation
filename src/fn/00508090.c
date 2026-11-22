/* Rebuilt from lomse.exe FUN_00508090 @ 0x00508090 (51 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00508090 1
void __fastcall rb_00508090(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x1a;
  do {
    iVar1 = 0;
    do {
      if (iVar1 < 3) {
        *(undefined4 *)(param_1 + (iVar1 + iVar2) * 4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + (iVar1 + iVar2) * 4) = 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x32);
    iVar2 = iVar2 + 0x32;
  } while (iVar2 < 0x33a);
  return;
}
