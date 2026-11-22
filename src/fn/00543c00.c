/* Rebuilt from lomse.exe FUN_00543c00 @ 0x00543c00 (102 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00543c00 1
undefined4 __cdecl rb_00543c00(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  
  bVar1 = (byte)(param_2 >> 0x1f);
  iVar3 = (int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5;
  if ((*(uint *)(param_1 + iVar3 * 4) &
      ~(-1 << (0x1f - ((((byte)param_2 ^ bVar1) - bVar1 & 0x1f ^ bVar1) - bVar1) & 0x1f))) != 0) {
    return 0;
  }
  iVar3 = iVar3 + 1;
  if (2 < iVar3) {
    return 1;
  }
  piVar2 = (int *)(param_1 + iVar3 * 4);
  do {
    if (*piVar2 != 0) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 3);
  return 1;
}
