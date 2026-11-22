/* Rebuilt from lomse.exe FUN_00535030 @ 0x00535030 (615 bytes, __cdecl).
 * Source: Ghidra 12.2 decompilation, cleaned by tools/gen.py. Behaviour-match target, not byte-match. */
#include "lom.h"

#define DAT_005d3fd8 (*(uint *)0x005d3fd8)
#define FUN_00536960 ((undefined4 (__cdecl *)(int))0x00536960)

#define LOM_SELF_00535030 1
void __cdecl rb_00535030(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x16b8);
  if (iVar3 < 0xe) {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(int *)(param_1 + 0x16b8) = iVar3 + 3;
  }
  else {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)(2 << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = *(int *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x16b8) = iVar3 + -0xd;
    *(ushort *)(param_1 + 0x16b4) = 2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  uVar2 = DAT_005d3fd8;
  iVar3 = *(int *)(param_1 + 0x16b8);
  uVar1 = DAT_005d3fd8 >> 0x10;
  if ((int)(0x10 - uVar1) < iVar3) {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)((DAT_005d3fd8 & 0xffff) << ((byte)iVar3 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar3 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar3;
    *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    iVar3 = (uVar1 - 0x10) + *(int *)(param_1 + 0x16b8);
    *(ushort *)(param_1 + 0x16b4) =
         (ushort)uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
  }
  else {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | (ushort)(DAT_005d3fd8 << ((byte)iVar3 & 0x1f));
    iVar3 = uVar1 + iVar3;
  }
  *(int *)(param_1 + 0x16b8) = iVar3;
  *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + 10;
  FUN_00536960(param_1);
  iVar3 = *(int *)(param_1 + 0x16b8);
  if ((*(int *)(param_1 + 0x16b0) - iVar3) + 0xb < 9) {
    if (iVar3 < 0xe) {
      *(ushort *)(param_1 + 0x16b4) =
           *(ushort *)(param_1 + 0x16b4) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(int *)(param_1 + 0x16b8) = iVar3 + 3;
    }
    else {
      *(ushort *)(param_1 + 0x16b4) =
           *(ushort *)(param_1 + 0x16b4) | (ushort)(2 << ((byte)iVar3 & 0x1f));
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16b4);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar3 = *(int *)(param_1 + 0x16b8);
      *(int *)(param_1 + 0x16b8) = iVar3 + -0xd;
      *(ushort *)(param_1 + 0x16b4) = 2 >> (0x10U - (char)iVar3 & 0x1f);
    }
    uVar2 = DAT_005d3fd8;
    iVar3 = *(int *)(param_1 + 0x16b8);
    uVar1 = DAT_005d3fd8 >> 0x10;
    if ((int)(0x10 - uVar1) < iVar3) {
      *(ushort *)(param_1 + 0x16b4) =
           *(ushort *)(param_1 + 0x16b4) | (ushort)((DAT_005d3fd8 & 0xffff) << ((byte)iVar3 & 0x1f))
      ;
      *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
           *(undefined1 *)(param_1 + 0x16b4);
      iVar3 = *(int *)(param_1 + 0x14) + 1;
      *(int *)(param_1 + 0x14) = iVar3;
      *(undefined1 *)(iVar3 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b5);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      iVar3 = (uVar1 - 0x10) + *(int *)(param_1 + 0x16b8);
      *(ushort *)(param_1 + 0x16b4) =
           (ushort)uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
    }
    else {
      *(ushort *)(param_1 + 0x16b4) =
           *(ushort *)(param_1 + 0x16b4) | (ushort)(DAT_005d3fd8 << ((byte)iVar3 & 0x1f));
      iVar3 = uVar1 + iVar3;
    }
    *(int *)(param_1 + 0x16b8) = iVar3;
    *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + 10;
    FUN_00536960(param_1);
  }
  *(undefined4 *)(param_1 + 0x16b0) = 7;
  return;
}
