
undefined4 __thiscall FUN_004ea0a0(void *this,int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004e9f90(this,param_2,param_3);
  *(int *)((int)this + 0x234) = iVar1;
  if (param_1 == 0x200) {
    if (*(int *)((int)this + 0x230) != 0) {
      FUN_004ea160(this,*(uint *)((int)this + 0x220),*(int *)((int)this + 0x224),param_2,param_3);
    }
  }
  else {
    if (param_1 == 0x201) {
      *(uint *)((int)this + 0x220) = param_2;
      *(int *)((int)this + 0x224) = param_3;
      *(undefined4 *)((int)this + 0x230) = 1;
      FUN_004ea160(this,param_2,param_3,param_2,param_3);
      return 1;
    }
    if (param_1 == 0x202) {
      FUN_004ea160(this,*(uint *)((int)this + 0x220),*(int *)((int)this + 0x224),param_2,param_3);
      *(undefined4 *)((int)this + 0x230) = 0;
      *(undefined4 *)((int)this + 0x228) = 0;
      return 1;
    }
  }
  return 1;
}


