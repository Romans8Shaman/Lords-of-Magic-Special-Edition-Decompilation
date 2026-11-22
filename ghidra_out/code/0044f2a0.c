
undefined4 __thiscall
FUN_0044f2a0(void *this,int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  void *pvVar1;
  int *this_00;
  void *this_01;
  undefined4 uVar2;
  int *this_02;
  int iVar3;
  int iVar4;
  
  pvVar1 = (void *)FUN_00482ac0(this,param_1,3);
  this_00 = (int *)FUN_00482ac0(this,param_1,2);
  this_01 = (void *)FUN_00482ac0(this,param_1,1);
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_0044ee90(pvVar1,param_2,param_3,param_4);
    if (param_2 == (void *)0x0) {
      FUN_0044ee90(pvVar1,(void *)0x1,param_3,-1);
      FUN_0044ee90(pvVar1,(void *)0x2,param_3,-1);
      FUN_0044ee90(pvVar1,(void *)0x3,param_3,-1);
      FUN_0044ee90(pvVar1,(void *)0x4,param_3,-1);
    }
    return uVar2;
  }
  if (this_00 == (int *)0x0) {
    if (this_01 == (void *)0x0) {
      return 0;
    }
    uVar2 = FUN_005102e0(this_01,(int)param_2,param_3,param_4,param_5);
    return uVar2;
  }
  if (param_3 == 0) {
    this_02 = (int *)FUN_00482ac0(this,this_00[0x20],3);
    if (this_02 != (int *)0x0) {
      iVar4 = *(int *)(&DAT_005a7d90 + DAT_005a7d8c * 0x400);
      iVar3 = (/*IC:0044f364*/**(code **)(*this_02 + 0x3c))(this_02);
      if (iVar3 == iVar4) {
        iVar4 = (/*IC:0044f36f*/**(code **)(*this_02 + 0x3c))(this_02);
        iVar3 = (/*IC:0044f379*/**(code **)(*this_00 + 0x3c))(this_00);
        pvVar1 = DAT_005a7b78;
        if ((iVar4 != iVar3) && (0 < this_00[0x17])) {
          if (*(int *)((int)DAT_005a7b78 + 0x54) == 0) {
            *(undefined4 *)((int)DAT_005a7b78 + 0x90) = 3;
            FUN_004d4550(pvVar1);
            *(undefined4 *)((int)pvVar1 + 0x90) = 0;
            *(undefined4 *)((int)pvVar1 + 0xa4) = 0;
          }
          else {
            iVar4 = *(int *)((int)DAT_005a7b78 + 0x50);
            iVar3 = *(int *)((int)DAT_005a7b78 + 0x54) + -1;
            *(int *)((int)DAT_005a7b78 + 0x54) = iVar3;
            *(undefined4 *)(iVar4 + iVar3 * 8) = 1;
            *(int *)(iVar4 + 4 + iVar3 * 8) = param_1;
          }
          FUN_004d05e0(DAT_005a7b78,DAT_005aa178,DAT_005aa17c);
        }
      }
    }
  }
  uVar2 = FUN_0043eff0(this_00,param_2,param_3,param_4,param_5,1);
  return uVar2;
}


