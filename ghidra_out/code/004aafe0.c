
undefined4 __thiscall FUN_004aafe0(void *this,int *param_1,undefined2 *param_2,float *param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0054b178;
  local_c = ExceptionList;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  DAT_00583650 = DAT_00583650 + 0x10;
  local_30 = (*param_1 << 4) / param_1[2];
  local_2c = (param_1[1] << 4) / param_1[3];
  DAT_0058364c = DAT_0058364c + 0x28;
  local_34 = (int)this + 0x234;
  local_20 = (int)this + 0x254;
  local_4 = 2;
  local_28 = 0x10;
  local_24 = 0x10;
  local_14 = 0x10;
  local_10 = 0x10;
  iVar6 = 0;
  ExceptionList = &local_c;
  local_1c = local_30;
  local_18 = local_2c;
LAB_004ab0be:
  iVar5 = 0;
  puVar3 = param_2 + 0x10;
  pfVar4 = param_3;
  do {
    if ((*(byte *)(local_34 + 0x14) & 4) == 0) {
      if ((((iVar5 < 0) || (iVar6 < 0)) || (local_28 <= iVar5)) || (local_24 <= iVar6))
      goto LAB_004ab120;
      uVar2 = FUN_004ab1f0(&local_34,iVar5,iVar6);
      uVar1 = (undefined2)uVar2;
    }
    else if (((iVar5 < 0) || (iVar6 < 0)) || ((local_28 <= iVar5 || (local_24 <= iVar6)))) {
LAB_004ab120:
      uVar1 = 0xffff;
    }
    else {
      uVar2 = FUN_004ab220(&local_34,iVar5,iVar6);
      uVar1 = (undefined2)uVar2;
    }
    *param_2 = uVar1;
    if ((*(byte *)(local_20 + 0x14) & 4) == 0) {
      if (((iVar5 < 0) || (iVar6 < 0)) || ((local_14 <= iVar5 || (local_10 <= iVar6))))
      goto LAB_004ab172;
      param_1 = (int *)FUN_004ab1f0(&local_20,iVar5,iVar6);
    }
    else if ((((iVar5 < 0) || (iVar6 < 0)) || (local_14 <= iVar5)) || (local_10 <= iVar6)) {
LAB_004ab172:
      param_1 = (int *)0xffffffff;
    }
    else {
      param_1 = (int *)FUN_004ab220(&local_20,iVar5,iVar6);
    }
    if ((int)param_1 < 0) {
      param_1 = (int *)0x0;
    }
    iVar5 = iVar5 + 1;
    param_2 = param_2 + 1;
    *pfVar4 = (float)(int)param_1 * *(float *)((int)this + 0x274);
    if (0xf < iVar5) break;
    pfVar4 = pfVar4 + 1;
  } while( true );
  iVar6 = iVar6 + 1;
  if (0xf < iVar6) {
    DAT_0058364c = DAT_0058364c + -0x28;
    DAT_00583650 = DAT_00583650 + -0x10;
    ExceptionList = local_c;
    return 1;
  }
  param_3 = param_3 + 0x10;
  param_2 = puVar3;
  goto LAB_004ab0be;
}


