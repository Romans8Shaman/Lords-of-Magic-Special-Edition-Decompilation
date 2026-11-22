/* Rebuilt from lomse.exe FUN_0053b590 @ 0x0053b590 (153 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_00575094 (*(int *)0x00575094)
#define FUN_00541d40 ((uint (__cdecl *)(int, uint))0x00541d40)
#define PTR_DAT_00574e88 (*(undefined * *)0x00574e88)

#define LOM_SELF_0053b590 1
int __cdecl rb_0053b590(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_00575094 < 2) {
      uVar2 = (byte)PTR_DAT_00574e88[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_00541d40((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_00575094 < 2) {
      uVar3 = (byte)PTR_DAT_00574e88[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_00541d40(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}
