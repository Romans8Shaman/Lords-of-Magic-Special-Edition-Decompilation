/* Rebuilt from lomse.exe FUN_00534200 @ 0x00534200 (294 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define FUN_00534330 ((uint (__cdecl *)(int *, undefined4 *, uint))0x00534330)

#define LOM_SELF_00534200 1
void __cdecl rb_00534200(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  uVar1 = param_1[9];
  while( true ) {
    uVar3 = param_1[0x19];
    uVar5 = (param_1[0xd] - param_1[0x1b]) - uVar3;
    if (((uVar5 == 0) && (uVar3 == 0)) && (param_1[0x1b] == 0)) {
      uVar5 = uVar1;
    }
    else if (uVar5 == 0xffffffff) {
      uVar5 = 0xfffffffe;
    }
    else if ((uVar1 - 0x106) + param_1[9] <= uVar3) {
      puVar6 = (undefined4 *)(uVar1 + param_1[0xc]);
      puVar8 = (undefined4 *)param_1[0xc];
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      param_1[0x1a] = param_1[0x1a] - uVar1;
      iVar7 = param_1[0x11];
      param_1[0x19] = param_1[0x19] - uVar1;
      param_1[0x15] = param_1[0x15] - uVar1;
      puVar4 = (ushort *)(param_1[0xf] + iVar7 * 2);
      do {
        puVar4 = puVar4 + -1;
        if (*puVar4 < uVar1) {
          uVar2 = 0;
        }
        else {
          uVar2 = *puVar4 - (short)uVar1;
        }
        iVar7 = iVar7 + -1;
        *puVar4 = uVar2;
      } while (iVar7 != 0);
      puVar4 = (ushort *)(param_1[0xe] + uVar1 * 2);
      uVar3 = uVar1;
      do {
        puVar4 = puVar4 + -1;
        if (*puVar4 < uVar1) {
          uVar2 = 0;
        }
        else {
          uVar2 = *puVar4 - (short)uVar1;
        }
        uVar3 = uVar3 - 1;
        *puVar4 = uVar2;
      } while (uVar3 != 0);
      uVar5 = uVar5 + uVar1;
    }
    if (((int *)*param_1)[1] == 0) break;
    uVar3 = FUN_00534330((int *)*param_1,
                         (undefined4 *)(param_1[0xc] + param_1[0x19] + param_1[0x1b]),uVar5);
    uVar3 = param_1[0x1b] + uVar3;
    param_1[0x1b] = uVar3;
    if (2 < uVar3) {
      uVar5 = (uint)*(byte *)(param_1[0xc] + param_1[0x19]);
      param_1[0x10] = uVar5;
      param_1[0x10] =
           (uVar5 << ((byte)param_1[0x14] & 0x1f) ^
           (uint)((byte *)(param_1[0xc] + param_1[0x19]))[1]) & param_1[0x13];
    }
    if (0x105 < uVar3) {
      return;
    }
    if (*(int *)(*param_1 + 4) == 0) {
      return;
    }
  }
  return;
}
