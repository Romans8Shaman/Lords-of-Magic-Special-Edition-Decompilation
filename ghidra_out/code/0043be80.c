
int __fastcall FUN_0043be80(void *param_1)

{
  uint unused_stack_0;
  int iVar1;
  byte *pbVar2;
  void *this;
  undefined4 unused_reg_1;
  undefined1 local_c [12];
  
  iVar1 = *(int *)((int)param_1 + 0x50);
  if (iVar1 < 0) {
    unused_stack_0 = FUN_0043bfa0(param_1,DAT_005aa780);
    if (unused_stack_0 == 0) {
      return -1;
    }
    FUN_0049dd20(local_c,(int *)(&PTR_s_BUILDING_00556170 + *(int *)((int)param_1 + 0x28) * 10));
    iVar1 = FUN_004923e0(&DAT_005a7b50,unused_reg_1,unused_stack_0,local_c);
    *(int *)((int)param_1 + 0x50) = iVar1;
    *(int *)((int)param_1 + 0x54) = DAT_005aa780;
    return iVar1;
  }
  if (*(int *)((int)param_1 + 0x54) != DAT_005aa780) {
    pbVar2 = (byte *)FUN_0043bfa0(param_1,DAT_005aa780);
    if (pbVar2 == (byte *)0x0) {
      return -1;
    }
    this = (void *)FUN_00492850(&DAT_005a7b50,*(int *)((int)param_1 + 0x50));
    if (this == (void *)0x0) {
      return -1;
    }
    iVar1 = FUN_0049b450(this,pbVar2,(int *)0x0);
    if (iVar1 == 0) {
      return -1;
    }
    *(int *)((int)param_1 + 0x54) = DAT_005aa780;
    FUN_004f6670(&DAT_00584ae8,(int)this);
    iVar1 = *(int *)((int)param_1 + 0x50);
  }
  return iVar1;
}


