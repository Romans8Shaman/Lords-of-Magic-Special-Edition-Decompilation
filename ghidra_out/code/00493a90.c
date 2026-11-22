
void __cdecl op_crop(void *param_1)

{
  int iVar1;
  void *this;
  int iVar2;
  int iVar3;
  undefined1 auStackY_cc [128];
  float local_2c;
  undefined1 *local_28;
  uint local_24 [2];
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  this = param_1;
  puStack_8 = &LAB_0054ab88;
  local_c = ExceptionList;
  DAT_00583650 = DAT_00583650 + 0x10;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_0040adb0(param_1,local_24);
  iVar2 = FUN_004026a0(local_24,&local_10,(uint *)&local_28,&local_2c);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x90) = 0xe;
  }
  else {
    FUN_0040adb0(this,local_24);
    iVar2 = FUN_004026a0(local_24,&local_14,(uint *)&local_2c,(float *)&local_28);
    if (iVar2 == 0) {
      *(undefined4 *)((int)this + 0x90) = 0xe;
    }
    else {
      FUN_0040adb0(this,local_24);
      iVar2 = FUN_004026a0(local_24,&local_18,(uint *)&local_2c,(float *)&local_28);
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0x90) = 0xe;
      }
      else {
        FUN_0040adb0(this,local_24);
        iVar2 = FUN_004026a0(local_24,&local_1c,(uint *)&local_2c,(float *)&local_28);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x90) = 0xe;
        }
        else {
          FUN_0040adb0(this,local_24);
          iVar2 = FUN_004026a0(local_24,(uint *)&param_1,(uint *)&local_2c,(float *)&local_28);
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0x90) = 0xe;
          }
          else {
            iVar2 = FUN_00491c20(&DAT_005a7b50,(int)param_1);
            if (iVar2 == 0) {
              FUN_004d41c0(this,s_no_object_0055c598);
              goto LAB_00493c9a;
            }
            local_28 = auStackY_cc + 0x84;
            DAT_00583650 = DAT_00583650 + 0x10;
            iVar2 = FUN_004925f0(&DAT_005a7b50,param_1,local_1c,local_18,local_14,local_10);
            if (*(int *)((int)this + 0x54) != 0) {
              iVar3 = *(int *)((int)this + 0x54) + -1;
              *(int *)((int)this + 0x54) = iVar3;
              iVar1 = *(int *)((int)this + 0x50);
              *(undefined4 *)(iVar1 + iVar3 * 8) = 1;
              *(int *)(iVar1 + 4 + iVar3 * 8) = iVar2;
              goto LAB_00493c9a;
            }
            *(undefined4 *)((int)this + 0x90) = 3;
          }
        }
      }
    }
  }
  FUN_004d4550(this);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
LAB_00493c9a:
  DAT_00583650 = DAT_00583650 + -0x10;
  ExceptionList = local_c;
  return;
}


