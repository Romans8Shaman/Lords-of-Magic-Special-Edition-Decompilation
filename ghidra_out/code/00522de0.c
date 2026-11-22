
int __fastcall FUN_00522de0(void *param_1)

{
  uint unused_stack_0;
  int iVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined1 local_c [12];
  
  if (*(int *)((int)param_1 + 0x3c8) < 0) {
    unused_stack_0 = FUN_00523440(param_1,DAT_005aa780);
    if (unused_stack_0 == 0) {
      return -1;
    }
    *(int *)((int)param_1 + 0x3dc) = DAT_005aa780;
    FUN_0049dd20(local_c,(int *)&PTR_DAT_00574008);
    iVar1 = FUN_004923e0(&DAT_005a7b50,local_c,unused_stack_0,local_c);
    *(int *)((int)param_1 + 0x3c8) = iVar1;
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,iVar1);
    if (pvVar2 != (void *)0x0) {
      FUN_00521cd0(pvVar2);
      return *(int *)((int)param_1 + 0x3c8);
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x3dc) == DAT_005aa780) {
      return *(int *)((int)param_1 + 0x3c8);
    }
    pbVar3 = (byte *)FUN_00523440(param_1,DAT_005aa780);
    if (pbVar3 == (byte *)0x0) {
      return -1;
    }
    pvVar2 = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)param_1 + 0x3c8));
    if (pvVar2 == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(pvVar2,pbVar3,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    FUN_00521cd0(pvVar2);
    *(int *)((int)param_1 + 0x3dc) = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)pvVar2);
  }
  return *(int *)((int)param_1 + 0x3c8);
}


