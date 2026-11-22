/* Rebuilt from lomse.exe FUN_0050cc20 @ 0x0050cc20 (66 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0050cc20 1
undefined4 __fastcall rb_0050cc20(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    return 1;
  }
  iVar2 = 0;
  if (*(short *)(param_1 + 0x4e) < 1) {
    return 0;
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x50) + 4);
  while ((*(int *)(pbVar1 + 4) == 0 && ((*pbVar1 & 1) != 0))) {
    iVar2 = iVar2 + 1;
    pbVar1 = pbVar1 + 0xc;
    if (*(short *)(param_1 + 0x4e) <= iVar2) {
      return 0;
    }
  }
  return 1;
}
