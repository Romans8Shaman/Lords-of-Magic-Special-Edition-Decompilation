/* Rebuilt from lomse.exe FUN_00535710 @ 0x00535710 (178 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"


#define LOM_SELF_00535710 1
void __cdecl rb_00535710(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = *(int *)(param_1 + 0xb54 + param_3 * 4);
  iVar4 = *(int *)(param_1 + 0x1448);
  iVar7 = param_3 * 2;
  if (iVar7 <= iVar4) {
    bVar8 = SBORROW4(iVar7,iVar4);
    iVar4 = iVar7 - iVar4;
    do {
      iVar6 = iVar7;
      if (bVar8 != iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0xb54 + iVar7 * 4);
        iVar5 = *(int *)(param_1 + 0xb58 + iVar7 * 4);
        uVar1 = *(ushort *)(param_2 + iVar5 * 4);
        uVar2 = *(ushort *)(param_2 + iVar4 * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(param_1 + 0x1450 + iVar5) <= *(byte *)(param_1 + 0x1450 + iVar4))))) {
          iVar6 = iVar7 + 1;
        }
      }
      iVar4 = *(int *)(param_1 + 0xb54 + iVar6 * 4);
      uVar1 = *(ushort *)(param_2 + iVar3 * 4);
      uVar2 = *(ushort *)(param_2 + iVar4 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar3 + 0x1450 + param_1) <= *(byte *)(param_1 + 0x1450 + iVar4))))) break;
      iVar7 = iVar6 * 2;
      *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar4;
      iVar5 = *(int *)(param_1 + 0x1448);
      bVar8 = SBORROW4(iVar7,iVar5);
      iVar4 = iVar7 - iVar5;
      param_3 = iVar6;
    } while (iVar7 <= iVar5);
  }
  *(int *)(param_1 + 0xb54 + param_3 * 4) = iVar3;
  return;
}
