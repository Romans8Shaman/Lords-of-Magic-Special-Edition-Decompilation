/* Rebuilt from lomse.exe FUN_004c4d00 @ 0x004c4d00 (18 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_004c4d00 1
int __fastcall rb_004c4d00(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - *param_1;
  if (iVar1 < 0) {
    return param_1[2] + iVar1;
  }
  return iVar1;
}
