
undefined4 FUN_0044c120(byte *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  
  puVar3 = FUN_004fbed0(&DAT_005ae974,0);
  *param_2 = (int)puVar3;
  do {
    if (puVar3 == (undefined4 *)0x0) {
      *param_2 = 0;
      *param_3 = -1;
      return 0;
    }
    iVar6 = 0;
    iVar2 = *(int *)(*param_2 + 0x4c);
    if (0 < iVar2) {
      pbVar8 = (byte *)(*param_2 + 0xec);
      do {
        if (*(int *)(pbVar8 + -0x14) != 0) {
          pbVar4 = pbVar8;
          pbVar7 = param_1;
          do {
            bVar1 = *pbVar4;
            bVar9 = bVar1 < *pbVar7;
            if (bVar1 != *pbVar7) {
LAB_0044c17c:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_0044c181;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar9 = bVar1 < pbVar7[1];
            if (bVar1 != pbVar7[1]) goto LAB_0044c17c;
            pbVar4 = pbVar4 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_0044c181:
          if (iVar5 == 0) {
            *param_3 = iVar6;
            return 1;
          }
        }
        iVar6 = iVar6 + 1;
        pbVar8 = pbVar8 + 0x4c;
      } while (iVar6 < iVar2);
    }
    puVar3 = FUN_004fbed0(&DAT_005ae974,*param_2);
    *param_2 = (int)puVar3;
  } while( true );
}


