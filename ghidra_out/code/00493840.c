
undefined4 __thiscall
FUN_00493840(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  void *this_00;
  int iVar1;
  undefined4 uVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0054ab68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)FUN_00491c20(&DAT_005a7b50,*(int *)((int)this + 0x10));
  uVar2 = 0;
  if (this_00 != (void *)0x0) {
    iVar1 = FUN_00493960(this,&local_3c,param_2,param_3);
    uVar2 = 0;
    if (iVar1 != 0) {
      if (local_3c < 0) {
        local_3c = 0;
      }
      if (local_38 < 0) {
        local_38 = 0;
      }
      if (local_3c < local_34) {
        if (local_38 < local_30) {
          DAT_00583648 = DAT_00583648 + 0x20;
          FUN_00494610(local_2c);
          local_4 = 0;
          FUN_00494630(local_2c,param_1,&local_3c);
          uVar2 = FUN_004935c0(this_00,local_2c,param_2 - local_3c,param_3 - local_38,param_4,
                               param_5);
          DAT_00583648 = DAT_00583648 + -0x20;
          local_4 = 0xffffffff;
          FUN_00495590(local_2c);
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  ExceptionList = local_c;
  return uVar2;
}


