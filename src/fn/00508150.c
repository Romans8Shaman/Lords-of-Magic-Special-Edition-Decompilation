/* Rebuilt from lomse.exe FUN_00508150 @ 0x00508150 (61 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00508150 1
undefined4 __fastcall rb_00508150(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x1a;
  do {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + (iVar2 + iVar3) * 4);
      if (iVar2 < 3) {
        if (0 < iVar1) {
          return 1;
        }
      }
      else if (iVar1 != -1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x32);
    iVar3 = iVar3 + 0x32;
  } while (iVar3 < 0x33a);
  return 0;
}
