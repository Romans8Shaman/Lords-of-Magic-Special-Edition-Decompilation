
void __cdecl op_setbuildingrequirements(void *param_1)

{
  void *this;
  int iVar1;
  uint local_38;
  uint local_34 [2];
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  puStack_8 = &LAB_00549be8;
  local_c = ExceptionList;
  DAT_00579084 = DAT_00579084 + 0x20;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040adb0(param_1,local_34);
  iVar1 = FUN_004026a0(local_34,&local_28,&local_38,(float *)&param_1);
  if (iVar1 != 0) {
    FUN_0040adb0(this,local_34);
    iVar1 = FUN_004026a0(local_34,&local_24,&local_38,(float *)&param_1);
    if (iVar1 != 0) {
      FUN_0040adb0(this,local_34);
      iVar1 = FUN_004026a0(local_34,&local_38,&local_14,(float *)&param_1);
      if (iVar1 != 0) {
        FUN_0040adb0(this,local_34);
        iVar1 = FUN_004026a0(local_34,&local_38,&local_18,(float *)&param_1);
        if (iVar1 != 0) {
          FUN_0040adb0(this,local_34);
          iVar1 = FUN_004026a0(local_34,&local_38,&local_1c,(float *)&param_1);
          if (iVar1 != 0) {
            FUN_0040adb0(this,local_34);
            iVar1 = FUN_004026a0(local_34,&local_38,&local_20,(float *)&param_1);
            if (iVar1 != 0) {
              FUN_0040adb0(this,local_34);
              iVar1 = FUN_004026a0(local_34,&local_2c,&local_38,(float *)&param_1);
              if (iVar1 != 0) {
                FUN_0040adb0(this,local_34);
                iVar1 = FUN_004026a0(local_34,&local_10,&local_38,(float *)&param_1);
                if (iVar1 != 0) {
                  FUN_0043d360(&DAT_005cd31c,(int *)&local_2c);
                  goto LAB_0044feba;
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined4 *)((int)this + 0x90) = 0xe;
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_0044feba:
  DAT_00579084 = DAT_00579084 + -0x20;
  ExceptionList = local_c;
  return;
}


