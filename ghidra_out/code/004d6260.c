
undefined4 FUN_004d6260(void *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 uVar7;
  
  pbVar5 = (byte *)(param_2 + param_4);
  switch(param_3) {
  case 0:
    uVar7 = *(undefined4 *)pbVar5;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar7;
      return 1;
    }
    goto LAB_004d63a2;
  case 1:
    sVar2 = *(short *)pbVar5;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(int *)(iVar4 + 4 + iVar6 * 8) = (int)sVar2;
      return 1;
    }
    break;
  case 2:
    bVar1 = *pbVar5;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = 1;
      *(uint *)(iVar4 + 4 + iVar6 * 8) = (uint)bVar1;
      return 1;
    }
    break;
  case 3:
    uVar7 = *(undefined4 *)pbVar5;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = 4;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar7;
      return 1;
    }
    break;
  case 4:
    uVar7 = 2;
    goto LAB_004d6342;
  case 5:
    uVar7 = 8;
LAB_004d6342:
    uVar3 = *(undefined4 *)pbVar5;
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = uVar7;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar3;
      return 1;
    }
    break;
  case 6:
  case 7:
    uVar7 = *(undefined4 *)pbVar5;
    uVar3 = *(undefined4 *)(pbVar5 + 4);
    if (*(int *)((int)param_1 + 0x54) != 0) {
      iVar6 = *(int *)((int)param_1 + 0x54) + -1;
      *(int *)((int)param_1 + 0x54) = iVar6;
      iVar4 = *(int *)((int)param_1 + 0x50);
      *(undefined4 *)(iVar4 + iVar6 * 8) = uVar7;
      *(undefined4 *)(iVar4 + 4 + iVar6 * 8) = uVar3;
      return 1;
    }
LAB_004d63a2:
    *(undefined4 *)((int)param_1 + 0x90) = 3;
    FUN_004d4550(param_1);
    *(undefined4 *)((int)param_1 + 0x90) = 0;
    *(undefined4 *)((int)param_1 + 0xa4) = 0;
    return 1;
  default:
    return 0;
  }
  FUN_00404ab0(param_1,3);
  return 1;
}


