
void __cdecl FUN_00536480(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x1698) != 0) {
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0x169c) + uVar3 * 2);
      uVar10 = (uint)*(byte *)(*(int *)(param_1 + 0x1690) + uVar3);
      uVar3 = uVar3 + 1;
      if (uVar5 == 0) {
        uVar5 = (uint)*(ushort *)(param_2 + 2 + uVar10 * 4);
        iVar6 = *(int *)(param_1 + 0x16b8);
        if ((int)(0x10 - uVar5) < iVar6) {
          uVar2 = *(ushort *)(param_2 + uVar10 * 4);
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) | uVar2 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16b4);
          iVar6 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar6;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16b5);
          iVar6 = *(int *)(param_1 + 0x16b8);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(uint *)(param_1 + 0x16b8) = (uVar5 - 0x10) + iVar6;
          *(ushort *)(param_1 + 0x16b4) = uVar2 >> (0x10U - (char)iVar6 & 0x1f);
        }
        else {
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) |
               *(short *)(param_2 + uVar10 * 4) << ((byte)iVar6 & 0x1f);
          *(uint *)(param_1 + 0x16b8) = uVar5 + iVar6;
        }
      }
      else {
        uVar4 = (uint)*(byte *)((int)&DAT_005d3860 + uVar10);
        uVar9 = (uint)*(ushort *)(param_2 + 0x406 + uVar4 * 4);
        iVar6 = *(int *)(param_1 + 0x16b8);
        if ((int)(0x10 - uVar9) < iVar6) {
          uVar2 = *(ushort *)(param_2 + 0x404 + uVar4 * 4);
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) | uVar2 << ((byte)iVar6 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16b4);
          iVar6 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar6;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16b5);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16b4) = uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16b8) = (uVar9 - 0x10) + *(int *)(param_1 + 0x16b8);
        }
        else {
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) |
               *(short *)(param_2 + 0x404 + uVar4 * 4) << ((byte)iVar6 & 0x1f);
          *(uint *)(param_1 + 0x16b8) = uVar9 + iVar6;
        }
        iVar6 = (&DAT_0054eac8)[uVar4];
        if (iVar6 != 0) {
          iVar8 = *(int *)(param_1 + 0x16b8);
          iVar7 = uVar10 - (&DAT_005d3960)[uVar4];
          if (0x10 - iVar6 < iVar8) {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar7 << ((byte)iVar8 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b4);
            iVar8 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar8;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar8) = *(undefined1 *)(param_1 + 0x16b5);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            *(ushort *)(param_1 + 0x16b4) =
                 (ushort)iVar7 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
            *(int *)(param_1 + 0x16b8) = iVar6 + -0x10 + *(int *)(param_1 + 0x16b8);
          }
          else {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar7 << ((byte)iVar8 & 0x1f));
            *(int *)(param_1 + 0x16b8) = iVar6 + iVar8;
          }
        }
        uVar10 = uVar5 - 1;
        if (uVar10 < 0x100) {
          bVar1 = (&DAT_005d39d7)[uVar5];
        }
        else {
          bVar1 = (&DAT_005d3ad8)[uVar10 >> 7];
        }
        uVar5 = (uint)bVar1;
        iVar6 = uVar5 * 4;
        iVar8 = *(int *)(param_1 + 0x16b8);
        uVar4 = (uint)*(ushort *)(param_3 + 2 + iVar6);
        if ((int)(0x10 - uVar4) < iVar8) {
          uVar2 = *(ushort *)(param_3 + iVar6);
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) | uVar2 << ((byte)iVar8 & 0x1f);
          *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
               *(undefined1 *)(param_1 + 0x16b4);
          iVar6 = *(int *)(param_1 + 0x14) + 1;
          *(int *)(param_1 + 0x14) = iVar6;
          *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16b5);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          *(ushort *)(param_1 + 0x16b4) = uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f)
          ;
          *(uint *)(param_1 + 0x16b8) = (uVar4 - 0x10) + *(int *)(param_1 + 0x16b8);
        }
        else {
          *(ushort *)(param_1 + 0x16b4) =
               *(ushort *)(param_1 + 0x16b4) | *(short *)(param_3 + iVar6) << ((byte)iVar8 & 0x1f);
          *(uint *)(param_1 + 0x16b8) = uVar4 + iVar8;
        }
        iVar6 = (&DAT_0054eb40)[uVar5];
        if (iVar6 != 0) {
          iVar7 = uVar10 - (&DAT_005d40d0)[uVar5];
          iVar8 = *(int *)(param_1 + 0x16b8);
          if (0x10 - iVar6 < iVar8) {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar7 << ((byte)iVar8 & 0x1f));
            *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
                 *(undefined1 *)(param_1 + 0x16b4);
            iVar8 = *(int *)(param_1 + 0x14) + 1;
            *(int *)(param_1 + 0x14) = iVar8;
            *(undefined1 *)(*(int *)(param_1 + 8) + iVar8) = *(undefined1 *)(param_1 + 0x16b5);
            *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
            iVar6 = iVar6 + -0x10 + *(int *)(param_1 + 0x16b8);
            *(ushort *)(param_1 + 0x16b4) =
                 (ushort)iVar7 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
          }
          else {
            *(ushort *)(param_1 + 0x16b4) =
                 *(ushort *)(param_1 + 0x16b4) | (ushort)(iVar7 << ((byte)iVar8 & 0x1f));
            iVar6 = iVar6 + iVar8;
          }
          *(int *)(param_1 + 0x16b8) = iVar6;
        }
      }
    } while (uVar3 < *(uint *)(param_1 + 0x1698));
  }
  iVar6 = *(int *)(param_1 + 0x16b8);
  uVar3 = (uint)*(ushort *)(param_2 + 0x402);
  if ((int)(0x10 - uVar3) < iVar6) {
    uVar2 = *(ushort *)(param_2 + 0x400);
    *(ushort *)(param_1 + 0x16b4) = *(ushort *)(param_1 + 0x16b4) | uVar2 << ((byte)iVar6 & 0x1f);
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b4);
    iVar6 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar6;
    *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16b5);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(ushort *)(param_1 + 0x16b4) = uVar2 >> (0x10U - (char)*(int *)(param_1 + 0x16b8) & 0x1f);
    *(uint *)(param_1 + 0x16b8) = (uVar3 - 0x10) + *(int *)(param_1 + 0x16b8);
  }
  else {
    *(ushort *)(param_1 + 0x16b4) =
         *(ushort *)(param_1 + 0x16b4) | *(short *)(param_2 + 0x400) << ((byte)iVar6 & 0x1f);
    *(uint *)(param_1 + 0x16b8) = uVar3 + iVar6;
  }
  *(uint *)(param_1 + 0x16b0) = (uint)*(ushort *)(param_2 + 0x402);
  return;
}


