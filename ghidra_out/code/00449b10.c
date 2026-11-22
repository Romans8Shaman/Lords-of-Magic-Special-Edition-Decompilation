
undefined4 __thiscall FUN_00449b10(void *this,int *param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (int *)FUN_00482ac0(this,*param_1,2);
  if (this_00 == (int *)0x0) {
    return 0;
  }
  FUN_00447360(this_00,param_1[1]);
  iVar2 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
  iVar1 = (/*IC:00449b49*/**(code **)(*this_00 + 0x3c))(this_00);
  if (iVar1 == iVar2) {
    iVar2 = FUN_0052d160((int)(&DAT_005a7d90 + DAT_005a7d8c * 0x400));
    if (this_00[10] == iVar2) {
      FUN_004d09a0(DAT_005a7b78,DAT_005a7be4,DAT_005a7be8,0);
    }
  }
  return 1;
}


