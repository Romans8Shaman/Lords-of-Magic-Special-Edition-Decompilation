
int FUN_004b0c60(int *param_1,int *param_2,uint param_3,int *param_4,undefined4 param_5)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined4 unused_reg_1;
  undefined1 local_c [12];
  
  if (*param_1 < 0) {
    unused_stack_0 = FUN_004b0b80(param_3,param_4,param_5);
    if (unused_stack_0 == 0) {
      return -1;
    }
    FUN_0049dd20(local_c,(int *)&PTR_DAT_0055cd50);
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,local_c);
    *param_1 = iVar1;
    *param_2 = DAT_005aa780;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_0049ab90(pvVar2,1);
      return *param_1;
    }
  }
  else {
    if (*param_2 == DAT_005aa780) {
      return *param_1;
    }
    pbVar3 = (byte *)FUN_004b0b80(param_3,param_4,param_5);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*param_1);
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    *param_2 = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *param_1;
}


