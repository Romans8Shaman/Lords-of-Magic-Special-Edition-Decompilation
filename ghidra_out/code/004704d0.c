
undefined4
FUN_004704d0(undefined1 param_1,uint param_2,int param_3,uint param_4,uint param_5,int *param_6,
            int *param_7,undefined4 *param_8)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_EDX;
  uint *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint auStack_2c [5];
  uint uStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00549e88;
  pvStack_c = ExceptionList;
  if (DAT_005d1e84 == (int *)0x0) {
    piVar1 = (int *)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    piVar1 = (int *)(/*IC:00470504*/**(code **)(*DAT_005d1e84 + 0x60))(&param_1,param_2);
  }
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    DAT_00583648 = DAT_00583648 + 0x20;
    FUN_00494610(auStack_2c);
    uStack_4 = 0;
    puVar6 = (uint *)*piVar1;
    puVar8 = auStack_2c;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar3 = uStack_18 & 0xfffffffe;
    auStack_2c[0] = param_4;
    auStack_2c[1] = piVar1[3];
    *param_6 = piVar1[3];
    *param_7 = piVar1[4];
    if ((uStack_18 & 4) == 0) {
      *param_8 = 8;
      piVar5 = (int *)piVar1[3];
      param_6 = piVar5;
      uStack_18 = uVar3;
      if (param_3 != 0) {
        iVar4 = 0;
        puVar7 = (undefined1 *)(param_3 + 2);
        do {
          FUN_00474e70(&DAT_00584ae8,(uint *)&param_8,&param_2,&param_4,
                       CONCAT22((short)((uint)piVar5 >> 0x10),
                                *(undefined2 *)(*(int *)(*piVar1 + 0x10) + iVar4)));
          iVar4 = iVar4 + 2;
          piVar5 = (int *)CONCAT31((int3)((uint)extraout_EDX >> 8),(undefined1)param_4);
          puVar7[-2] = param_8._0_1_;
          puVar7[-1] = (undefined1)param_2;
          *puVar7 = (undefined1)param_4;
          puVar7[1] = 0;
          puVar7 = puVar7 + 4;
        } while (iVar4 < 0x200);
      }
      piVar5 = param_6;
    }
    else {
      *param_8 = 0x10;
      piVar5 = (int *)(piVar1[3] << 1);
      uStack_18 = uVar3;
    }
    auStack_2c[2] = param_5 / (uint)piVar5;
    FUN_00495db0(auStack_2c,piVar1,0,0);
    DAT_00583648 = DAT_00583648 + -0x20;
    uStack_4 = 0xffffffff;
    FUN_00495590((int *)auStack_2c);
    uVar2 = 1;
  }
  ExceptionList = pvStack_c;
  return uVar2;
}


