
void __cdecl op_addcitymod(void *param_1)

{
  void *this;
  int iVar1;
  float local_44;
  float local_40;
  uint local_3c [2];
  undefined1 local_34 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  puStack_8 = &LAB_00549ca8;
  local_c = ExceptionList;
  DAT_005792fc = DAT_005792fc + 0x28;
  local_14[1] = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040adb0(param_1,local_3c);
  iVar1 = FUN_004026a0(local_3c,(uint *)&local_40,&local_20,&local_44);
  if (iVar1 != 0) {
    FUN_0040adb0(this,local_3c);
    iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_24,&local_40);
    if (iVar1 != 0) {
      FUN_0040adb0(this,local_3c);
      iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_28,&local_40);
      if (iVar1 != 0) {
        FUN_0040adb0(this,local_3c);
        iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_2c,&local_40);
        if (iVar1 != 0) {
          FUN_0040adb0(this,local_3c);
          iVar1 = FUN_004026a0(local_3c,(uint *)&local_44,&local_30,&local_40);
          if (iVar1 != 0) {
            FUN_0040adb0(this,local_3c);
            iVar1 = FUN_004026a0(local_3c,&local_1c,(uint *)&local_44,&local_40);
            if (iVar1 == 0) {
              FUN_00404ab0(this,0xe);
              goto LAB_0045355b;
            }
            FUN_0040adb0(this,local_3c);
            iVar1 = FUN_004026a0(local_3c,local_14,(uint *)&local_44,&local_40);
            if (iVar1 != 0) {
              FUN_0040adb0(this,local_3c);
              iVar1 = FUN_004026a0(local_3c,&local_18,(uint *)&local_44,&local_40);
              if (iVar1 != 0) {
                iVar1 = FUN_00451a70(this,(uint *)&param_1);
                if (iVar1 != 0) {
                  FUN_00452fc0(local_34,(int)param_1);
                }
                goto LAB_0045355b;
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
LAB_0045355b:
  DAT_005792fc = DAT_005792fc + -0x28;
  ExceptionList = local_c;
  return;
}


