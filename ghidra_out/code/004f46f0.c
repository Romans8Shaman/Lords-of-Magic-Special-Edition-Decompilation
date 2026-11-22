
undefined4 __cdecl FUN_004f46f0(int param_1,ushort *param_2,char *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  byte local_8;
  
  pcVar9 = param_3;
  uVar3 = 0;
  if ((*param_2 & 4) == 0) {
    uVar4 = **(byte **)(param_1 + 8) & 0x33;
    if (param_4 == 0) {
      param_4 = *(uint *)(*(byte **)(param_1 + 8) + 0xc);
    }
    switch(uVar4) {
    case 1:
      if ((*param_2 & 1) == param_5) {
        FUN_004f4160(*(char **)(param_2 + 6),param_3,(uint)param_2[2] * (uint)param_2[1]);
        return 0;
      }
      FUN_004f4160(*(char **)(param_2 + 6),param_3,(uint)param_2[2] * (uint)param_2[1]);
      return 0;
    case 2:
      uVar4 = (uint)param_2[1];
      param_4 = param_2[2] * uVar4;
      FUN_004f3d20((int)param_3,&param_4,*(undefined4 *)(param_2 + 6),param_4,uVar4,uVar4);
      return 0;
    default:
      uVar3 = 1;
      break;
    case 0x10:
    case 0x20:
    case 0x30:
      DAT_00584aa8 = (uint *)(s_c__NEWERSTORM_H_storm_h_00573258 + (uVar4 >> 4) * 0xc + 0xc);
      uVar1 = param_2[1];
      param_5 = (uint)param_2[2];
      pbVar8 = *(byte **)(param_2 + 6);
      param_3 = (char *)0x0;
      do {
        pcVar10 = pcVar9;
        param_2 = (ushort *)(uint)uVar1;
        do {
          puVar6 = DAT_00584aa8;
          if (DAT_00584aa8 == (uint *)0x0) {
            puVar6 = &DAT_00573288;
          }
          puVar7 = DAT_00584aa8;
          if (DAT_00584aa8 == (uint *)0x0) {
            puVar7 = &DAT_00573288;
          }
          puVar5 = DAT_00584aa8;
          if (DAT_00584aa8 == (uint *)0x0) {
            puVar5 = &DAT_00573288;
          }
          local_8 = (byte)puVar6[1];
          pcVar9 = pcVar10 + 1;
          *pcVar10 = *(char *)(((uint)(*pbVar8 >>
                                      (((byte)param_3 & local_8) * (char)puVar7[2] & 0x1f)) &
                               *puVar5 & 0xff) + param_4);
          puVar6 = DAT_00584aa8;
          if (DAT_00584aa8 == (uint *)0x0) {
            puVar6 = &DAT_00573288;
          }
          puVar7 = DAT_00584aa8;
          if (DAT_00584aa8 == (uint *)0x0) {
            puVar7 = &DAT_00573288;
          }
          pbVar8 = pbVar8 + (((uint)param_3 & puVar6[1]) == puVar7[1]);
          param_3 = param_3 + 1;
          param_2 = (ushort *)((int)param_2 + -1);
          pcVar10 = pcVar9;
        } while (param_2 != (ushort *)0x0);
        param_5 = param_5 - 1;
      } while (param_5 != 0);
      return 0;
    case 0x11:
    case 0x21:
    case 0x31:
      DAT_00584aa8 = (uint *)(s_c__NEWERSTORM_H_storm_h_00573258 + (uVar4 >> 4) * 0xc + 0xc);
      pbVar8 = *(byte **)(param_2 + 6);
      uVar4 = (uint)param_2[2] * (uint)param_2[1];
      uVar3 = 0;
      pcVar9 = (char *)DAT_00584aa8;
      if (DAT_00584aa8 == (uint *)0x0) {
        pcVar9 = (char *)&DAT_00573288;
      }
      iVar2 = *(int *)(pcVar9 + 8);
      if (iVar2 == 1) {
        uVar3 = FUN_004f4b60(pbVar8,param_3,uVar4,param_4);
        return uVar3;
      }
      if (iVar2 == 2) {
        uVar3 = FUN_004f4a80(pbVar8,param_3,uVar4,param_4);
        return uVar3;
      }
      if (iVar2 == 4) {
        uVar3 = FUN_004f49f0(pbVar8,param_3,uVar4,param_4);
        return uVar3;
      }
      break;
    case 0x12:
    case 0x22:
    case 0x32:
      DAT_00584aa8 = (uint *)(s_c__NEWERSTORM_H_storm_h_00573258 + (uVar4 >> 4) * 0xc + 0xc);
      return 0;
    }
  }
  return uVar3;
}


