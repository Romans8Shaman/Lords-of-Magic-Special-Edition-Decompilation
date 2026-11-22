/* Rebuilt from lomse.exe FUN_0049d8f0 @ 0x0049d8f0 (47 bytes, __fastcall).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_0049d8f0 1
uint __fastcall rb_0049d8f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((iVar1 == 0) || (*(byte **)(param_1 + 0x24) == (byte *)0x0)) {
    return 0;
  }
  if ((**(byte **)(param_1 + 0x24) & 7) == 4) {
    return (uint)*(ushort *)(iVar1 + 2) * 2 - 1;
  }
  return (uint)*(ushort *)(iVar1 + 2);
}
