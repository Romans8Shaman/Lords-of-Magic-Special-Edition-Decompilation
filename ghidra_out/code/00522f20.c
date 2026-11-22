
int __fastcall FUN_00522f20(void *param_1)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined4 unused_reg_1;
  undefined1 local_c [12];
  
  if (*(int *)((int)param_1 + 0x3cc) < 0) {
    unused_stack_0 = FUN_00523530(param_1,DAT_005aa780);
    if (unused_stack_0 == 0) {
      return -1;
    }
    FUN_0049dd20(local_c,(int *)&PTR_DAT_00574008);
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,local_c);
    *(int *)((int)param_1 + 0x3cc) = iVar1;
    *(int *)((int)param_1 + 0x3e0) = DAT_005aa780;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,iVar1);
    if (pvVar2 != (void *)0x0) {
      FUN_0049ab90(pvVar2,1);
      FUN_00521cd0(pvVar2);
      return *(int *)((int)param_1 + 0x3cc);
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x3e0) == DAT_005aa780) {
      return *(int *)((int)param_1 + 0x3cc);
    }
    pbVar3 = (byte *)FUN_00523530(param_1,DAT_005aa780);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)param_1 + 0x3cc));
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    FUN_00521cd0(pvVar2);
    *(int *)((int)param_1 + 0x3e0) = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *(int *)((int)param_1 + 0x3cc);
}


