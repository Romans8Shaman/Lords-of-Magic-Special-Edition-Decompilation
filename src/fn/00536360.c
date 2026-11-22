/* Rebuilt from lomse.exe FUN_00536360 @ 0x00536360 (287 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_0054eb40 (*(undefined4 *)0x0054eb40)
#define DAT_005d3860 (*(undefined4 *)0x005d3860)
#define DAT_005d39d7 (*(undefined *)0x005d39d7)
#define DAT_005d3ad8 (*(undefined *)0x005d3ad8)

#define LOM_SELF_00536360 1
undefined4 __cdecl rb_00536360(int param_1,int param_2,int param_3)

{
  short *psVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  
  *(short *)(*(int *)(param_1 + 0x169c) + *(int *)(param_1 + 0x1698) * 2) = (short)param_2;
  *(char *)(*(int *)(param_1 + 0x1690) + *(int *)(param_1 + 0x1698)) = (char)param_3;
  *(int *)(param_1 + 0x1698) = *(int *)(param_1 + 0x1698) + 1;
  if (param_2 == 0) {
    psVar1 = (short *)(param_1 + 0x8c + param_3 * 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    *(int *)(param_1 + 0x16ac) = *(int *)(param_1 + 0x16ac) + 1;
    psVar1 = (short *)(param_1 + 0x490 + (uint)*(byte *)((int)&DAT_005d3860 + param_3) * 4);
    *psVar1 = *psVar1 + 1;
    if (param_2 - 1U < 0x100) {
      bVar2 = (&DAT_005d39d7)[param_2];
    }
    else {
      bVar2 = (&DAT_005d3ad8)[param_2 - 1U >> 7];
    }
    psVar1 = (short *)(param_1 + 0x980 + (uint)bVar2 * 4);
    *psVar1 = *psVar1 + 1;
  }
  if (2 < *(int *)(param_1 + 0x7c)) {
    uVar3 = *(uint *)(param_1 + 0x1698);
    if ((uVar3 & 0xfff) == 0) {
      uVar7 = uVar3 * 8;
      puVar6 = (ushort *)(param_1 + 0x980);
      piVar5 = &DAT_0054eb40;
      do {
        iVar4 = *piVar5;
        piVar5 = piVar5 + 1;
        uVar7 = uVar7 + (iVar4 + 5) * (uint)*puVar6;
        puVar6 = puVar6 + 2;
      } while ((int)piVar5 < 0x54ebb8);
      if ((*(uint *)(param_1 + 0x16ac) < uVar3 >> 1) &&
         (uVar7 >> 3 < (uint)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x54)) >> 1)) {
        return 1;
      }
    }
  }
  return (uint)(*(int *)(param_1 + 0x1698) == *(int *)(param_1 + 0x1694) + -1);
}
