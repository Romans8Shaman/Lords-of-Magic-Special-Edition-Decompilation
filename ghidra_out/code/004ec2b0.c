
undefined4 __thiscall FUN_004ec2b0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  
  if (*(int *)((int)this + 0xd0) < 0) {
    if (param_1 == 0x201) {
      iVar1 = FUN_004ec110(this,param_2,param_3);
      *(int *)((int)this + 0xd0) = iVar1;
      if (-1 < iVar1) {
        FUN_004ec1c0(this,0x201,1,iVar1);
        return 1;
      }
      iVar1 = FUN_004ebdf0(this,param_2,param_3);
      in_EDX = extraout_EDX;
      if (-1 < iVar1) {
        FUN_004ec1c0(this,0x201,0,iVar1);
        return 1;
      }
    }
    if (param_1 == 0x202) {
      if (*(int *)this == 1) {
        *(undefined4 *)((int)this + 0xd0) = 0;
      }
      iVar1 = FUN_004ebf80(this,in_EDX,param_2,param_3);
      if (iVar1 == 0) {
        *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
        return 1;
      }
      FUN_004ec1c0(this,0x202,1,*(undefined4 *)((int)this + 0xd0));
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
    }
    if (param_1 == 0x204) {
      iVar1 = FUN_004ec110(this,param_2,param_3);
      FUN_004ec1c0(this,0x204,1,iVar1);
    }
  }
  else {
    if ((param_1 != 0x200) && (param_1 != 0x202)) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
    iVar1 = FUN_004ebf80(this,in_EDX,param_2,param_3);
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
    FUN_004ec1c0(this,param_1,1,*(undefined4 *)((int)this + 0xd0));
    if (param_1 == 0x202) {
      *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
      return 1;
    }
  }
  return 1;
}


